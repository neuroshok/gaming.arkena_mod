# Camera
FollowCamera::FixedUpdate
```
ark::hook<&FollowCamera::FixedUpdate>::overwrite(this, [](auto original, auto&& self) -> void {

auto pos = GameData::statics()->instance->GetPlayerById(0)->_object->GetTruePosition();
self->Offset = {0, 0};
self->Locked = false;
self->Target = GameData::statics()->instance->GetPlayerById(0)->_object;
original(self);
```

# Material
_BodyColor
_BackColor : color over the body
_VisorColor : the visor
SetPlayerMaterialColors_2 : std::int32_t is renderer ptr

# Shader





HHMBANDDIOA = PassiveButton

rpc (hors context) : ban / server side check
host can call rpc

SetInfected : 1st byte ? 2nd byte :




TEST :
rpc owner call
host can call rpc

- [ ] launcher, autoupdater (nano)
- [x] load/unload mod via injection
- [x] D3D hook (imgui)
- [-] discord api (sdk)
- [ ] il2cppdumper to structured_dump (RE tool)
- [ ] generate c++ headers from structured_dump (RE tool)
- [ ] generate code analysis from structured_dump (RE tool)
- [ ] deobfuscation (RE tool)
- [ ] trace test from memory address (RE)
- [ ] role based mod
- [ ] game api
- [ ] mod settings
- [ ] enable/disable mods