#include <iostream>
#include "Die.h"
int main() {

    Die die1 (6, 10,
              10, "red", false, "Bone");
    std::cout << die1.roll() << " " <<die1.roll() << " " <<die1.roll() << " " <<die1.roll() << " " <<die1.roll() << std::endl;
    die1.setColor("blue");
    std::cout << die1.getColor() << std::endl;
    die1.setCurrentValue(30);
    std::cout << die1.getCurrentValue() << std::endl;
    die1.setIncrement(5);
    std::cout << die1.getIncrement() << std::endl;
    die1.setIsSymbol(true);
    std::cout << die1.getIsSymbol() << std::endl;
    die1.setLowestNumOnDie(0);
    std::cout << die1.getLowestNumOnDie() << std::endl;
    die1.setMaterial("Wood");
    std::cout << die1.getMaterial() << std::endl;
    die1.setNumSides(20);
    std::cout << die1.getNumSides() << std::endl;


    void playGame();
    void playFirstRoll(int rollValue);
    void playSecondRoll(int rollValue);
    ​
    int main() {
        std::string userInput = "";
        std::cout << "Roll (r), Bet(b), Quit(e): ";
        std::cin >> userInput;
        ​
        while(userInput != "e") {
            playGame();
            std::cout << "Roll (r), Bet(b), Quit(e): ";
            std::cin >> userInput;
        }
        return 0;
    }
    ​
    void playGame() {
        bool firstRoll = true;
        ​
        int rollValue = 0;
        Die die1, die2;
        rollValue = die1.roll() + die2.roll();
        ​
        if(firstRoll) {
            playFirstRoll(rollValue);
        } else {
            playSecondRoll(rollValue);
        }
        firstRoll = true;
    }
    ​
    void playFirstRoll(int rollValue){
        std::cout << rollValue << "\n";
    };
    ​
    void playSecondRoll(int rollValue){
        std::cout << rollValue << "\n";
    };
    Collapse











    return 0;
}
