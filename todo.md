# main
- remove kiero submodule, add sources directly to remove hardcoded configs (KIERO_USE_MINHOOK & KIERO_INCLUDE_D3D11)
- default values (generator)

# fix
- HudManager, GameStartManager should inherit from DestroyableSingleton (add bool + mono behaviour base qas quickfix) (generator issue) 
- Guid (generator issue)
- ValueTypes should not inherit from anything (generator issue)
- array parameter should not forward enum classes
- add ARK_SHARED on classes to export symbols
- out variables should be ref (generator issue) // float Console::CanUse(au::GameData_PlayerInfo* pc, bool canUse, bool couldUse), add ref to canUse & couldUse
DestroyableSingleton<GameStartManager>
- handle template parameters