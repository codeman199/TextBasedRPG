#include "main.h"
#include "playerAndEnemies.h"
#include "chapter1.h"

void chapter1() {
    t("Chapter 1");
    s(2);
    tp("You're an adventurer who has just exited retirement for one final quest.");
    tp("Well, that's one way of putting it.");
    tp("You've just woken up in a cold room, alone, with nothing but a pair of thin pants around your waist.");
    t("Your head is pounding, you feel as though you should rest a moment.");
    choice1a();
    tp("You get up and look around.");
    t("There's a door ahead of you, otherwise there doesn't seem to be much else in the room.");
    choice1b();
    tp("You proceed to the door.");
    tp("You swing the door open and are met face to face with a goblin.");
    tp("\"What the hell!?\" The goblin shouts in a grumble.");
    t("He raises his fists to fight!");
    fight1();
}

void choice1a() {
    t("r: rest | u: get up");
    s();
    c = _getch();
    switch (c) {
    case 'r':
        tp("You rest for a moment to get your berrings.");
        tp("You're glad you did, and then decide to get up.");
        break;

    case 'u':
        tp("You try to force yourself to get up.");
        tp("That didn't feel right.");
        player.health -= 1;
        tp("You took 1 damage.");
        break;

    default :
        choice1a();
        break;
    }

}

void choice1b() {
    t("l: look around | g: go to door");
    s();
    c = _getch();
    switch (c) {
    case 'l':
        tp("You look around the damp room for a moment.");
        tp("You found some gold coins on the floor.");
        tp("+5 gold!");
        player.money += 5;
        break;

    case 'g':
        tp("You feel like you should leave.");
        break;

    default:
        choice1b();
        break;
    }
}

void fight1() {
    enemy goblin;
    goblin = createEnemy(goblin, "Mad Goblin", 1, 4, 0, 5);
    c = '0';
    t("c: Check Inventory | i: Inspect Goblin | f: Begin Fight!");
    while (c != 'f') {
        c = _getch();
        switch (c) {
            case 'c':
                openInventory();
                t("c: Check Inventory | i: Inspect Goblin | f: Begin Fight!");
                break;

            case 'i':
                inspectEnemy(goblin);
                t("c: Check Inventory | i: Inspect Goblin | f: Begin Fight!");
                break;

            case 'f':
                //fight(goblin1);
    char asciiGoblin[1000] = ""
"            _.----._     _.---.\n"
"         .-'        `-.-'      `.\n"
"       .'                 .:''':.`.\n"
"     .'        .:'''':. .' .----.  `.\n"
"    . - . / .' .----.    /  .-. \   `.\n"
"   n / . - . / . - . \\   \\ ' O ' | \\\n"
"||        `.   | ' O '/    \ `-' /     |\n"
"       || (\\   \\ `-'/      `-.__     / `.\n"
" \\`-'        )   .-'  --         )        `.\n"
"   `-'     _.'   (_. - '    _/\\    \\\n"
"     `.       /\_ `-.____..-'     .-' _/    /\n"
"       `.     \\_ `-._         _. - '_.-'   .'\n"
"         `- - .._ `-._ `-.__.. - '_.-'     .'\n"
"       . - '     `-._ `--.__..-'  _.----'`.\n"
"      /            `---.......-' _     \\ \\\n"
"     /                          ( `-._.-` )\n"
"    /  /     _                  . - _. - '\n"
"   (`-._. - ' )                (_   .'    \\\n"
"    `-._      -.               (_.-'       |\n"
"        `.     _)                   __..-- - '\n"
"         | `-._) ''...__ . - .__...'''__..---'\n"
"        \      '''...__((=))__...'''      /\n"
"        |              `-'             .'\n"
"         \                             /\n";

    printf(asciiGoblin);
                break;
        }
    }
}