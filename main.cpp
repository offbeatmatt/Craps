#include <iostream>
#include <random>
#include <string>

#include "Die.h"

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












