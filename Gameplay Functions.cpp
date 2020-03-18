#include <iostream>
#include <random>
#include <string>

#include "Die.h"

void playGame() {
    bool firstRoll = true;
    int rollValue = 0;
    Die die1 (6, 1, 1, "red", false, "Plastic");
    Die die2 (6, 1, 1, "green", false, "Plastic");
    rollValue = die1.roll() + die2.roll();
    if(firstRoll) {
        playFirstRoll(rollValue);
    }
    else {
        playSecondRoll(rollValue);
    }
    firstRoll = true;
}
void playFirstRoll(int rollValue){
    std::cout << rollValue << "\n";
}
void playSecondRoll(int rollValue){
    std::cout << rollValue << "\n";
}

