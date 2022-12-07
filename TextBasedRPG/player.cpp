#include "playerAndEnemies.h"
#include "main.h"

struct playerCharacter player;


void startingInventory() {
	wearables none;
	none.name = "none";
	none.def = 0;
	none.type = "none";
	none.bonus = "none";
	none.value = 0;

	struct weapons fist;
	fist.name = "Fist";
	fist.attack = 1;
	fist.element = "none";
	fist.type = "unarmed";
	fist.bonus = "none, it's literally just your hand";
	fist.value = 0;
	player.weapon = fist;

	wearables thinShorts;
	thinShorts.def = 1;
	thinShorts.name = "Thin Shorts";
	thinShorts.type = "Legs";
	thinShorts.value = 5;
	thinShorts.bonus = "Makes you feel a little bare...";
	player.legs = thinShorts;

	player.head = none;
	player.chest = none;
	player.feet = none;

}

void openInventory() {
	system("cls");
	t(" Your Inventory\t\t\t\t\t\t\t\tPress ESC to exit");
	s();
	t("\t\t1: STATS\t2: ARMOR\t3: WEAPON\t4: ITEMS");
	c = '0';
	while (c != 27)
	{
		c = _getch();
		system("cls");
		switch (c) {
		case '1':
			t(" Your Inventory\t\t\t\t\t\t\t\tPress ESC to exit");
			s();
			t("\t\t1: STATS\t2: ARMOR\t3: WEAPON\t4: ITEMS");
			s(2);
			t("\t\tStats: ");
			t("\t\t\tRaw Character Stats: ");
			ti("\t\t\t\tHealth: ", player.health);
			ti("\t\t\t\tDefense: ",player.defense);
			ti("\t\t\t\tAttack: ",player.attack);
			s();
			t("\t\t\tGear Factored Stats:");
			ti("\t\t\t\tHealth: ", player.health);
			ti("\t\t\t\tDefense: ", player.defense + player.head.def + player.chest.def + player.legs.def + player.feet.def);
			ti("\t\t\t\tAttack: ", player.attack + player.weapon.attack);
			s();
			ti("\t\t\tGold: ",player.money);
			break;

		case '2':
			 t(" Your Inventory\t\t\t\t\t\t\t\tPress ESC to exit");
			s();
			 t("\t\t1: STATS\t2: ARMOR\t3: WEAPON\t4: ITEMS");
			s(2);
			 t("\t\tArmor: ");
			 t("\t\t\tHead: " + player.head.name);
			ti("\t\t\t\tDef: ", player.head.def);
			 t("\t\t\t\tBonus: " + player.head.bonus);
			 s();
			 t("\t\t\tChest: " + player.chest.name);
			ti("\t\t\t\tDef: ", player.chest.def);
			 t("\t\t\t\tBonus: " + player.chest.bonus);
			 s();
			 t("\t\t\tLegs: " + player.legs.name);
			ti("\t\t\t\tDef: ", player.legs.def);
			 t("\t\t\t\tBonus: " + player.legs.bonus);
			 s();
			 t("\t\t\tFeet: " + player.feet.name);
			ti("\t\t\t\tDef: ", player.feet.def);
			 t("\t\t\t\tBonus: " + player.feet.bonus);
			break;

		case '3':
			t(" Your Inventory\t\t\t\t\t\t\t\tPress ESC to exit");
			s();
			t("\t\t1: STATS\t2: ARMOR\t3: WEAPON\t4: ITEMS");
			s(2);
			t("\t\tWeapon:");
			t("\t\t\tName: " + player.weapon.name);
			t("\t\t\tType: " + player.weapon.type);
			ti("\t\t\tAtk: ", player.weapon.attack);
			t("\t\t\tElement: " + player.weapon.element);
			t("\t\t\tBonus: " + player.weapon.bonus);
			break;

		case '4':
			t(" Your Inventory\t\t\t\t\t\t\t\tPress ESC to exit");
			s();
			t("\t\t1: STATS\t2: ARMOR\t3: WEAPON\t4: ITEMS");
			break;

		case 27:
			system("cls");
			break;
		default:
			t(" Your Inventory\t\t\t\t\t\t\t\tPress ESC to exit");
			s();
			t("\t\t1: STATS\t2: ARMOR\t3: WEAPON\t4: ITEMS");
			break;
		}
	}
}

void inspectEnemy(enemy e) {
	c = '0';
	system("cls");
	t(" Inpect Enemy\t\t\t\t\t\t\t\tPress ESC to exit");
	s();
	t("\t\t\tName: " + e.name);
	ti("\t\t\tAttack: ", e.attack);
	ti("\t\t\tHelath: ", e.health);
	ti("\t\t\tDefense: ", e.defense);
	while (c != 27) {
		c = _getch();
		system("cls");
		t(" Inpect Enemy\t\t\t\t\t\t\t\tPress ESC to exit");
		s();
		t("\t\t\tName: " + e.name);
		ti("\t\t\tAttack: ", e.attack);
		ti("\t\t\tHelath: ", e.health);
		ti("\t\t\tDefense: ", e.defense);
	}

	system("cls");
}