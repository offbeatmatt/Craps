//
// Created by 16038 on 2/14/2020.
//

#include "Craps.h"
#include <random>

Die::Die(int startingNumberofSides, int startingIncrement,
    int startingStartingValue, std::string startingColor, bool isSymbols= false, std::string material = "Bone");
int Die::roll(){

}
void Die::setNumSides (int newNewSides){
 numSides = newNewSides;
}
int Die::getNumSides (){
    return numSides;
}
void Die::setIncrement (int newIncrement){
    increment = newIncrement;
}
int Die::getIncrement (){
    return increment;
}
void Die::setColor (std::string newNewColor){
    color = newNewColor;
}
std::string Die:: getColor (){
    return color;
}
void Die::setIsSymbol (bool newIsSymbol){
    isSymbols = newIsSymbol;
}
bool getIsSymbol (){
    return isSymbols;
}
void setMaterial (std::string newMaterial){
    material = newMaterial;
}
std::string getMaterial(){
    return material;
}