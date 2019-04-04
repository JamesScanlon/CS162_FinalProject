/*********************************************************************
 ** Program name: FinalProject
 ** Author: James Scanlon
 ** Date: March 19, 2019
 ** Description: Interface of the Player class.
 *********************************************************************/
#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
#include "Backpack.hpp"
#include "Bulbasaur.hpp"
#include "Pokemon.hpp"
#include <iostream>
#include <vector>
class Player
{
private:
    int money;
    int currentObjective;
    Backpack* backpack;
    Bulbasaur* pokemon;

public:
    // Constructor
    Player(int startingMoney = 200, int startObjective = 1);
    
    // Get functions
    Backpack* getBackpack();
    Bulbasaur* getBulbasaur();
    int getMoney();
    int getObjective();
    // Set functions
    void subtractMoney(int value);
    void setObjective(int objective);
    // Destructor
    ~Player();
};

#endif /* Player_hpp */
