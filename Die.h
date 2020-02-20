//
// Created by 16038 on 2/14/2020.
//

#ifndef CRAPS_DIE_H
#define CRAPS_DIE_H

#include <string>

class Die {
protected:
    int numSides;
    int increment;
    int currentValue;
    std::string color;
    std::string material;
    int initialValue;
    bool isSymbols;
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
    bool getIsSymbol ();
    void setMaterial (std::string newMaterial);
    std::string getMaterial();
};
#endif //CRAPS_DIE_H
