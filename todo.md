# main
- remove kiero submodule, add sources directly to remove hardcoded configs (KIERO_USE_MINHOOK & KIERO_INCLUDE_D3D11)
- default values (generator)

# fix
- HudManager, GameStartManager should inherit from DestroyableSingleton (add bool + mono behaviour base qas quickfix) (generator issue) 
- Guid (generator issue)
- ValueTypes should not inherit from anything (generator issue)
DestroyableSingleton<GameStartManager>