#include <iostream>
#include "Die.h"

int main() {

    Die dieTest(6, 10,
                10, "red", false, "Bone");

    std::cout << dieTest.roll() << " " << dieTest.roll() << " " << dieTest.roll() << " " << dieTest.roll() << " "
              << dieTest.roll() << std::endl;
    dieTest.setColor("blue");
    std::cout << dieTest.getColor() << std::endl;
    dieTest.setCurrentValue(30);
    std::cout << dieTest.getCurrentValue() << std::endl;
    dieTest.setIncrement(5);
    std::cout << dieTest.getIncrement() << std::endl;
    dieTest.setIsSymbol(true);
    std::cout << dieTest.getIsSymbol() << std::endl;
    dieTest.setLowestNumOnDie(0);
    std::cout << dieTest.getLowestNumOnDie() << std::endl;
    dieTest.setMaterial("Wood");
    std::cout << dieTest.getMaterial() << std::endl;
    dieTest.setNumSides(20);
    std::cout << dieTest.getNumSides() << std::endl;

    return 0;
}