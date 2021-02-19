const fs = require('fs')
const path = require('path')
const hookerProtectedMethodsFile = __dirname + "/.hookerProtectedMethod"
try {

	if (process.argv.length < 3) throw "Missing parameters"
		const filepath = process.argv[2]

	let hti
	if ((hti = process.argv.indexOf('--hooktype')) !== -1 && process.argv[hti + 1])
		var hookType = process.argv[hti + 1]
			else
		var hookType = "before"

	var ignoreObfuscated = process.argv.indexOf('--ignore-obfuscated') !== -1
	var ignoreNonVoid = process.argv.indexOf('--ignore-non-void') !== -1

	let htpi
	if ((htpi = process.argv.indexOf('--hooktype-protected')) !== -1 && process.argv[htpi + 1])
		var hookTypeProtected = process.argv[htpi + 1]
			else
		var hookTypeProtected = "skip"

	let szi
	if ((szi = process.argv.indexOf('--size')) !== -1 && process.argv[szi + 1])
		var size = parseInt(process.argv[szi + 1]) || "full"
			else
		var size = "full"

	let sti
	if ((sti = process.argv.indexOf('--start')) !== -1 && process.argv[sti + 1])
		var start = parseInt(process.argv[sti + 1])
	else
		var start = 0

	console.log(`\n\n -- Info -- :
		- --hooktype : ${hookType}
		- --start: ${start}
		- --size : ${size}
		- --hooktype-protected : ${hookTypeProtected}
		- --ignore-obfuscated : ${ignoreObfuscated}
		- --ignore-non-void : ${ignoreNonVoid}
	`)

	let protectedMethods = []
	if (!fs.existsSync(hookerProtectedMethodsFile))  fs.writeFileSync(hookerProtectedMethodsFile, '')
	else protectedMethods = fs.readFileSync(hookerProtectedMethodsFile).toString().split("\n").map(e => e.trim()).filter(e => e && e.indexOf('#') === -1)

	if (!fs.existsSync(filepath))  throw `File ${filepath} not found`
	const folder = path.dirname(filepath)

	const brutLines = fs.readFileSync(filepath).toString().split("\n").map(e => e.trim())
	let strs = []
	let structName = null
	for(i in brutLines) {
		const [full, name, name2] = brutLines[i].match(/^struct (\w+) : ark::meta<(\w+),/) || [null, null, null]
		if (full)
	    	structName = name
		else if (ignoreObfuscated && brutLines[i].match(/^(void|\w+) ([A-Z0-9]{11})\(([^)]+|)\)\s?{\s?.*/))
			console.log("Obfuskated skiped: ", brutLines[i])
		else if (ignoreNonVoid && brutLines[i].match(/^(?!void)\w* (\w+)\(([^)]+|)\)\s?{\s?.*/))
			console.log("Non-void skiped: ", brutLines[i])
		else if (brutLines[i].match(/^\w* (\w+)\(([^)]+|)\)\s?{\s?.*/))
	    	strs.push(brutLines[i])
	}
	const results = { inits: [], hooks: [] }

	strs = strs.slice(start, size === "full" ? strs.length : start + size)



	strs.map(str => {
		let hook = str.replace(/^\w+ ([\w]+)\(([^)]+|)\).*/, `ark::hook<&${structName}::$1>::${hookType}(this, [](auto&& self, $2) {ark_trace("${structName}::$1 called");});`)

		let protected = (protectedMethods.length && (match = hook.match(new RegExp(`ark::hook<&(${protectedMethods.join('|')})>::`))))
		if (protected) {
			let method = match[1]
						console.log(`Protected method found: ${method}`)
			hook = hook.replace(`ark::hook<&${method}>::${hookType}`, `ark::hook<&${method}>::${hookTypeProtected}`)
		}

		if (!protected || hookTypeProtected !== 'skip') {
			results.hooks.push(hook.replace('self, )', 'self)').replace(/, struct \w+\*/, ', auto'))
			results.inits.push(str.replace(/^(\w+) (\w+)\(([^)]+|)\).*/, `hkr($1, ${structName}::$2);`))
		}
	})

	console.log(`\n\n -- Hook -- (${results.hooks.length}): \n#include <analysis/${structName}.hooks.hpp>`)
	console.log(`\n\n -- INITS -- (${results.inits.length}): \n#include <analysis/${structName}.init.hpp>`)

	fs.writeFileSync(`${folder}/../analysis/${structName}.init.hpp`, results.inits.join("\n")); 
	fs.writeFileSync(`${folder}/../analysis/${structName}.hooks.hpp`, results.hooks.join("\n")); 


} catch (e) {
	console.log(e)
	process.exit()
}
