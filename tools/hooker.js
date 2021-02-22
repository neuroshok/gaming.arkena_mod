const fs = require('fs')
const path = require('path')
const global = {}
const headers = {source: [], hooks: [], inits: []}
const printTypeMapping = {
	'PlayerControl*': `varName->PlayerId`
}
const rootPath = path.dirname(__dirname)+path.sep;
const includePath = `${rootPath}include${path.sep}`;

const paramListReducer = (acc, e) => `${acc}${acc ? ', ' : ''}${(printTypeMapping[e.type] || (e.pointer ? `(uintptr_t)${e.name}` : e.name)).replace('varName', e.name)}`
const paramPrintReducer = (acc, e) => `${acc}${acc ? ', ' : ''}${e.name}(${e.type}): {}`
const processFile = (file) => {
	console.log(`\n\n -- Processing -- : ${file.replace(includePath, '')}`)
	const rawLines = fs.readFileSync(file).toString().replace(/\/\*[\s\S]*?\*\//g, '').split("\n").map(e => e.trim())
	let dataset = []
	let structName = null
	for (let line of rawLines) {
		if (!structName) {
			structName = parseLineStructName(line);
			continue;
		}
		let data = parseLine(line, structName)
		if (data) dataset.push(data)
	}
	if (!structName) throw "Class name not found, pattern : struct NAME : ark::meta<NAME,"
	const results = {inits: [], hooks: []}

	dataset = dataset.slice(global.start, global.size === "full" ? dataset.length : global.start + global.size)

	dataset.map(data => {
		let hook = `ark::hook<&${data.fullMethod}>::${global.hookType}`
		hook += `(this, [](auto original, auto&& self${data.rawParameters ? `, ${data.rawParameters.replace(/struct ([^, ]+)/g, 'auto* /* $1 */')}` : ''}) -> ${data.type} {`
		if (data.parameters.length)
			hook += `ark_trace("${data.fullMethod}(${data.type}), ${data.parameters.reduce(paramPrintReducer, "")}", ${data.parameters.reduce(paramListReducer, "")});`
		else
			hook += `ark_trace("${data.fullMethod}(${data.type}) called");`
		// if (data.type !== 'void')
		// 	hook += ` return ${data.pointer ? 'nullptr' : `${data.type}{}`};`
		hook += `return original(self${data.parameters.reduce((acc, e) => `${acc}, ${e.name}`, "")});`
		hook += `}); // ${data.address}`

		results.hooks.push(hook)
		results.inits.push(`hkr(${data.type}, ${data.fullMethod});`)
	})

	for (const key in results) {
		headers[key].push(`#include <analysis/${structName}.${key}.hpp>`)
		console.log(`\t -- ${key} -- (${results[key].length}): #include <analysis/${structName}.${key}.hpp>`)
		fs.writeFileSync(`${includePath}analysis${path.sep}${structName}.${key}.hpp`, results[key].join("\n"));
	}
	headers.source.push(`#include <${file.replace(includePath, '').replace(new RegExp(`\\${path.sep}`, 'g'), '/')}>`)
}
const parseLineStructName = (line) => {
	const [full, name, name2] = line.match(/^struct (\w+) : ark::meta<(\w+),/) || [null, null, null]
	if (full && name === name2) {
		if (global.debug) console.log([full, name, name2])
		return name;
	}
	return null;
}
const parseLine = (line, structName) => {
	if (line.match(/^[\w:*]+ (\w+)\(([^)]+|)\)\s?{\s?.*/)) {
		let json = line.replace(/^((struct |)([\w:*]+) ([\w]+)\(([^)]+|)\)[^\/]*(\/\/ (0x[A-F0-9]{6})|$).*)/, `{"struct": "$2","type": "$3","method": "$4","rawParameters": "$5", "address": "$7", "full": "$1"}`)
		if (global.debug) console.log(json)
		let data = JSON.parse(json)
		data.class = structName;
		data.rawParameters = data.rawParameters.replace(/\s*=\s*[^,]+/g, '');
		data.fullMethod = `${data.class}::${data.method}`;
		data.obfuscated = !!data.method.match(/^[A-Z0-9]{11}$/);
		data.pointer = data.type.slice(-1) === '*';
		data.struct = !!data.struct;
		data.parameters = data.rawParameters ? data.rawParameters.split(/,\s?/).map(e => {
			let param = e.split(' ');
			return {struct: param[0] === 'struct', pointer: param[param.length - 2].slice(-1) === '*', type: param[param.length - 2], name: param[param.length - 1]}
		}) : []
		if (global.debug) console.log(data)
		if ((global.ignoreNonVoid && data.type !== 'void') || (global.ignoreObfuscated && data.obfuscated)) return null;
		return data
	}
}
try {

	if (process.argv.length < 3) throw "Missing parameters"
	const filepath = path.resolve(process.argv[2])

	let szi, hti;
	global.hookType = (hti = process.argv.indexOf('--hooktype')) !== -1 && process.argv[hti + 1] ? process.argv[hti + 1] : "overwrite"
	global.ignoreObfuscated = process.argv.indexOf('--ignore-obfuscated') !== -1
	global.ignoreNonVoid = process.argv.indexOf('--ignore-non-void') !== -1
	global.debug = process.argv.indexOf('--debug') !== -1
	global.size = ((szi = process.argv.indexOf('--size')) !== -1 && process.argv[szi + 1]) ? parseInt(process.argv[szi + 1]) || "full" : "full"
	global.start = ((sti = process.argv.indexOf('--start')) !== -1 && process.argv[sti + 1]) ? parseInt(process.argv[sti + 1]) : 0

	console.log(`\n\n -- Info -- :
		- --hooktype ${global.hookType}
		- --star ${global.start}
		- --size ${global.size}
		- --debug ${global.debug}
		- --ignore-obfuscated ${global.ignoreObfuscated}
		- --ignore-non-void ${global.ignoreNonVoid}
	`)

	if (!fs.existsSync(filepath)) throw `File ${filepath} not found`
	const scanFolder = folder => {
		folder = folder.slice(-1) === path.sep ? folder : folder + path.sep
		for (const file of fs.readdirSync(folder)) {
			let filePath = `${folder}${file}`
			if (fs.lstatSync(filePath).isDirectory()) {
				scanFolder(filePath);
				continue;
			}
			if (!file.match(/^[A-Za-z]+\.hpp$/)) continue;
			try {
				processFile(filePath);
			} catch (e) {
				if (e === 'Class name not found, pattern : struct NAME : ark::meta<NAME,')
					console.log(e)
				else
					throw e;
			}
		}
	}
	if (fs.lstatSync(filepath).isDirectory()) {
		scanFolder(filepath);
	} else {
		processFile(filepath);
	}
	console.log(`\n\n -- Headers -- (${headers.source.length}):`)
	for (const key in headers) {
		console.log(`\t#include <analysis/header.test.${key}.hpp>`)
		fs.writeFileSync(`${includePath}analysis${path.sep}header.test.${key}.hpp`, headers[key].join("\n"));
	}

} catch (e) {
	console.error(e)
	process.exit()
}
