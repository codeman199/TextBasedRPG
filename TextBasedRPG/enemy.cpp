#include "playerAndEnemies.h"

enemy createEnemy(enemy ret, std::string name, int attack, int health, int defense, wearables loot, weapons drops, int gold) {
	ret.name = name;
	ret.attack = attack;
	ret.health = health;
	ret.defense = defense;
	ret.loot = loot;
	ret.drops = drops;
	ret.gold = gold;
	return ret;
}

enemy createEnemy(enemy ret, std::string name, int attack, int health, int defense, wearables loot, int gold) {
	ret.name = name;
	ret.attack = attack;
	ret.health = health;
	ret.defense = defense;
	ret.loot = loot;
	ret.gold = gold;
	return ret;
}

enemy createEnemy(enemy ret, std::string name, int attack, int health, int defense, weapons drops, int gold) {
	ret.name = name;
	ret.attack = attack;
	ret.health = health;
	ret.defense = defense;
	ret.drops = drops;
	ret.gold = gold;
	return ret;
}

enemy createEnemy(enemy ret, std::string name, int attack, int health, int defense, int gold) {
	ret.name = name;
	ret.attack = attack;
	ret.health = health;
	ret.defense = defense;
	ret.gold = gold;
	return ret;
}
