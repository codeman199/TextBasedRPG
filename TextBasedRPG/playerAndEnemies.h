#include <string>

class wearables {
    public:
        std::string name;
        int def;
        std::string type;
        std::string bonus;
        int value;
};

class consumables {
    public:
        std::string name;
        int value;
        std::string effect;
        int potency;
};

class weapons {
    public:
        std::string name;
        int attack;
        std::string type;
        std::string element;
        std::string bonus;
        int value;
};

class playerCharacter {
    public:
        int attack;
        int health;
        int defense;
        int money;
        weapons weapon;
        consumables items[10];
        wearables chest;
        wearables legs;
        wearables ring1;
        wearables ring2;
        wearables head;
        wearables feet;
};

void openInventory();
void startingInventory();

class enemy {
    public:
        std::string name;
        int attack;
        int health;
        int defense;
        int gold;
        wearables loot;
        weapons drops;
};

enemy createEnemy(enemy ret, std::string name, int attack, int health, int defense, int gold);
enemy createEnemy(enemy ret, std::string name, int attack, int health, int defense, wearables loot, int gold);
enemy createEnemy(enemy ret, std::string name, int attack, int health, int defense, wearables loot, weapons drops, int gold);
enemy createEnemy(enemy ret, std::string name, int attack, int health, int defense, weapons drops, int gold);
void inspectEnemy(enemy e);