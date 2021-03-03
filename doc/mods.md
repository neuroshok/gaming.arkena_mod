# Sorcerer
- whisperer : the target kill after X secondes
- illusionist : create a fake player
- necromancer : 

# Humans
- Pranker : can fake death
- Barbarian : can kill 

# Sages
- Medium : can see another player

# Fighter
- Archer : can kill a marked player

# Gods
Thanatos : kill everyone

# Order of the Fate : finish all quests to get the artifact
whisperer, protector, archer
# The Dark Mages : protect the artifact
pranker, medium, illusionist
# Barbarians : kill everyone
archer, whisperer, barbarian

# zombie
Le zombie doit contaminer tous les joueurs
Le dernier joueur en vie gagne la partie
A chaque nouveau zombie, la vitesse de déplacement est réduite

# bomberman 
La compétence de kill des imposteurs est remplacée par une bombe.

Quand un imposteur place une bombe sur un joueur, le joueur doit donner cette bombe à un autre joueur dans les 15s après 5s ou il meurt
Le meeting annule les bombes

# poisonman
Le poison man est un imposteur qui a une capacité en plus d'empoisonnement
Il peut contaminer un joueur toutes les X secondes
Après 15s, le joueur contaminé devient vert et a 15s pour se soigner ou être soigné.

# sniper
Le sniper peut kill à distance
1 seul impo max

# whisperer
Le whisperer peut kill et forcer un joueur à kill dès qu'il est proche d'une cible 
une seule fois par game

# lovers
Les Lovers ne sont pas impos
Quand un lover meurt, le 2e peut tuer un impo 

# The village
Chaque joueur a un role
Chaque role est associé à X team
Chaque role est associé à X compétences
Les fantomes peuvent utiliser des compétences (spécifiques aux fantomes)

**Exemple**

The whisperer : 
 - Team : Sorcerers & Lover
 - Ability1 : 
    - whisper(alive): Ordonne à un joueur de tuer dans les X prochaines secondes 
    - whisper(dead): Ordonne à un joueur de ne plus bouger pendant X secondes 
    
## Win condition
Les win conditions sont basées sur des points ?
A 10 points, la team gagne la partie

Chaque team possède X win condition

**Exemple**
Les sorcerers doivent tuer X personnes

Les villageois doivent compléter toutes les tasks ou éliminer au vote toutes les personnes d'une même team
