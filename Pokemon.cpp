/*********************************************************************
 ** Program name: FinalProject
 ** Author: James Scanlon
 ** Date: March 19, 2019
 ** Description: Implementation of the Pokemon class.
 *********************************************************************/

#include "Pokemon.hpp"          // I intend to implement these into a program later on
// default constructor
Pokemon::Pokemon(){
    type = "none";
}

// get functions
int Pokemon::getStrength(){
    return strength;
}

int Pokemon::getCurrentAttack(){
    return currentAttack;
}

int Pokemon::getCurrentDefend(){
    return currentDefend;
}

int Pokemon::getArmor()
{
    return armor;
}
string Pokemon::getType(){
    return type;
}

bool Pokemon::getSpecialMessage()
{
    return specialMessage;
}

string Pokemon::getName()
{
    return name;
}

int Pokemon::getLevel()
{
    return level;
}

// Set functions
void Pokemon::setName(string input)
{
    name = input;
}

void Pokemon::setLevel(int levelInput)
{
    level = levelInput;
}

// destructor
Pokemon::~Pokemon(){
    
}
