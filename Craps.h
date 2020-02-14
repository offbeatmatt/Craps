//
// Created by 16038 on 2/14/2020.
//

#ifndef CRAPS_CRAPS_H
#define CRAPS_CRAPS_H

#include <string>

class Die {
private:
    int numSides;
    int increment;
    int currentValue;
    std::string color;
    bool isSymbols;
    std::string material;
    int initialValue;
public: //Put setters & getters, roll
    Die(int startingNumberofSides, int startingIncrement,
            int startingStartingValue, std::string startingColor, bool isSymbols=false, std::string material = "Bone");
    int roll();
    void setNumSides (int newNewSides);
    int getNumSides ();
    void setIncrement (int newIncrement);
    int getIncrement ();
    void setColor (std::string newNewColor);
    std::string getColor ();
    void setIsSymbol (bool newIsSymbol);
    bool isSymbol ();
    void setMaterial (std::string newMaterial);
    std::string getMaterial();
};
#endif //CRAPS_CRAPS_H
