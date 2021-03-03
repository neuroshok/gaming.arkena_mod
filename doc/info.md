# Intro scene
mod framework (title, subtitle, colors)

# GameObject
position/scale/rotation
destroy

# Player
PlayerControl::get_CanMove : player move/stop
DeadBody control : Prefab

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

_AddColor
_OutlineColor :
 - player : halo color
_BodyColor
_BackColor : color over the body
_VisorColor : the visor
SetPlayerMaterialColors_2 : std::int32_t is renderer ptr

# Shader

# Ship
player light radius : return value of ShipStatus::CalculateLightRadius
player voted : isgameoverduetodeath called
ShipStatus::RepairSystem : called on buzz
ShipStatus.Class : tasks

# KillButton
cd : playercontrol->setkilltimer

# EndGame
MFIBPNBCMKM called to set up end game scene, use playerinfo to display players