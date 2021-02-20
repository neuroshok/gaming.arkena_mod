const fs = require('fs')
const path = require('path')
const hookerProtectedMethodsFile = __dirname + "/.hookerProtectedMethod"


const printTypeMapping = {
	'PlayerControl*': `varName->PlayerId`
}

const paramListReducer = (acc, e) => `${acc}${acc ? ', ' : ''}${(printTypeMapping[e.type] || (e.pointer ? `(uintptr_t)${e.name}` : e.name)).replace('varName', e.name)}`
const paramPrintReducer = (acc, e) => `${acc}${acc ? ', ' : ''}${e.name}(${e.type}): {}`

try {

	if (process.argv.length < 3) throw "Missing parameters"
	const filepath = process.argv[2]

	let szi, htpi, hti, hookTypeProtected, hookType, size, start, ignoreObfuscated, ignoreNonVoid
	hookType = (hti = process.argv.indexOf('--hooktype')) !== -1 && process.argv[hti + 1] ? process.argv[hti + 1] : "override"
	ignoreObfuscated = process.argv.indexOf('--ignore-obfuscated') !== -1
	ignoreNonVoid = process.argv.indexOf('--ignore-non-void') !== -1
	hookTypeProtected = ((htpi = process.argv.indexOf('--hooktype-protected')) !== -1 && process.argv[htpi + 1]) ? process.argv[htpi + 1] : "skip"
	size = ((szi = process.argv.indexOf('--size')) !== -1 && process.argv[szi + 1]) ? parseInt(process.argv[szi + 1]) || "full" : "full"
	start = ((sti = process.argv.indexOf('--start')) !== -1 && process.argv[sti + 1]) ? parseInt(process.argv[sti + 1]) : 0

	console.log(`\n\n -- Info -- :
		- --hooktype ${hookType}
		- --star ${start}
		- --size ${size}
		- --hooktype-protected ${hookTypeProtected}
		- --ignore-obfuscated ${ignoreObfuscated}
		- --ignore-non-void ${ignoreNonVoid}
	`)

	let protectedMethods = []
	if (!fs.existsSync(hookerProtectedMethodsFile)) fs.writeFileSync(hookerProtectedMethodsFile, '')
	else protectedMethods = fs.readFileSync(hookerProtectedMethodsFile).toString().split("\n").map(e => e.trim()).filter(e => e && e.indexOf('#') === -1)

	if (!fs.existsSync(filepath)) throw `File ${filepath} not found`
	const folder = path.dirname(filepath)
	const brutLines = fs.readFileSync(filepath).toString().replace(/\/\*[\s\S]*?\*\//g, '').split("\n").map(e => e.trim())
	let dataset = []
	let structName = null
	for (let i in brutLines) {
		const [full, name, name2] = brutLines[i].match(/^struct (\w+) : ark::meta<(\w+),/) || [null, null, null]
		if (full && name === name2)
			structName = name
		else if (brutLines[i].match(/^[\w:*]+ (\w+)\(([^)]+|)\)\s?{\s?.*/)) {
			if (!structName) throw "Class name not found, pattern : struct NAME : ark::meta<NAME,"
			let json = brutLines[i].replace(/^((struct |)([\w:*]+) ([\w]+)\(([^)]+|)\).*\/\/ (0x[A-F0-9]{6}).*)/, `{"struct": "$2","type": "$3","method": "$4","rawParameters": "$5", "address": "$6", "full": "$1"}`)
			let data = JSON.parse(json)
			data.class = structName;
			data.fullMethod = `${data.class}::${data.method}`;
			data.obfuscated = !!data.method.match(/^[A-Z0-9]{11}$/);
			data.pointer = data.type.slice(-1) === '*';
			data.struct = !!data.struct;
			data.parameters = data.rawParameters ? data.rawParameters.split(/,\s?/).map(e => {
				let param = e.split(' ');
				return {struct: param[0] === 'struct', pointer: param[param.length - 2].slice(-1) === '*', type: param[param.length - 2], name: param[param.length - 1]}
			}) : []
			data.isProtected = !!~protectedMethods.indexOf(data.fullMethod)
			console.log(data)
			if ((ignoreNonVoid && data.type !== 'void') || (ignoreObfuscated && data.obfuscated)) continue;
			dataset.push(data)
		}
	}
	const results = {inits: [], hooks: []}

	dataset = dataset.slice(start, size === "full" ? dataset.length : start + size)

	dataset.map(data => {
		let hook = `ark::hook<&${data.fullMethod}>::${data.isProtected ? hookTypeProtected : hookType}`
		hook += `(this, [](auto original, auto&& self${data.rawParameters ? `, ${data.rawParameters}` : ''}) -> ${data.type} {`
		hook += `original(self${data.parameters.reduce((acc, e) => `${acc}, ${e.name}`, "")});`
		if (data.parameters)
			hook += `ark_trace("${data.fullMethod}(${data.type}), ${data.parameters.reduce(paramPrintReducer, "")}, ",${data.parameters.reduce(paramListReducer, "")});`
		else
			hook += `ark_trace("${data.fullMethod}(${data.type}) called");`
		if (data.type !== 'void')
			hook += ` return ${data.pointer ? 'nullptr' : `${data.type}{}`};`
		hook += `}); // ${data.address}`

		if (!data.isProtected || hookTypeProtected !== 'skip') {
			results.hooks.push(hook)
			results.inits.push(`hkr(${data.type}, ${data.fullMethod});`)
		}
	})

	for (const key in results) {
		console.log(`\n\n -- Hook -- (${results[key].length}): \n#include <analysis/${structName}.hooks.hpp>`)
		fs.writeFileSync(`${folder}/../analysis/${structName}.${key}.hpp`, results[key].join("\n"));
	}

} catch (e) {
	console.log(e)
	process.exit()
}
