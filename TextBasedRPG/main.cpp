#include "playerAndEnemies.h"
#include "main.h"
#include "chapter1.h"

char c;

int main()
{
    initializeGame();
    gameStart();
    tutorial();
    chapter1();
}

//Waits a provided number of seconds
void d(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}

//Waits for user to press space to proceed
void p() {
    c = '0';
    while (c != ' ') {
        c = _getch();
    }
}

//Writes provided text follow by a new line
void t(std::string text) {
    std::cout << text + "\n";
}

void ti(std::string text, int i) {
    std::cout << text + std::to_string(i) + "\n";
}

//Writes provided text and then waits for space to proceed
void tp(std::string text) {
    t(text);
    p();
}

//Creates a single new line
void s() {
    std::cout << "\n";
}

//Creates a chosen number of new lines
void s(int count) {
    for (int i = 0; i < count; i++)
    {
        std::cout << "\n";
    }
}

void initializeGame()
{
    player.attack = 0;
    player.defense = 0;
    player.health = 20;
    player.money = 0;
    startingInventory();
}

void gameStart() {
    t("Welcome to ?????");
    tp("Press SPACE to begin.");
    s(2);
    t("PREPARING ADVENTURE");
    d(1);
    system("cls");
}

void tutorial() {
    t("TUTORIAL");
    s(2);
    t("????? is a ASCII based, choose your own adventure RPG.");
    tp("As text appears on the screen, you must proceed by pressing SPACE. Try it now!");
    tp("Good!");
    s();
    tp("Remember that in this adventure a single choice can change the outcome of the entire story!");
    tp("When you are given a choice you will see a menu.");
    s();
    t("You will need to press the corresponding key to make your desired choice. Try it now!");
    s();
    t("SPACE: proceed forward | w: do nothing");

    tutorialChoice();

    tp("Good!");
    s();
    tp("You have completed the tutorial, your adventure awaits.");
    s();
    t("continuing...");
    d(1);
    system("cls");
}

void tutorialChoice() {
    p();
}