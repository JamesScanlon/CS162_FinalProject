/*********************************************************************
 ** Program name: FinalProject
 ** Author: James Scanlon
 ** Date: March 19, 2019
 ** Description: Implementation of the Space class.
 *********************************************************************/


#include "Space.hpp"
#include <string>
#include <iostream>
#include <string>
#include <vector>


using namespace std;

Space::Space(string spaceName, Player* user)
{
    setUser(user);          // sets player based on construction
    
    setType(spaceName);         // sets name of space
    
    top = nullptr;          // initializes null values; will be updated for child classes
    right = nullptr;
    left = nullptr;
    bottom = nullptr;
    vector<string> choices;
    moveMenu = new Menu(choices);
}

// get functions

string Space::getType()
{
    return type;
}

Space* Space::getTop()
{
    return top;
}


Space* Space::getRight()
{
    return right;
}

Space* Space::getLeft()
{
    return left;
}

Space* Space::getBottom()
{
    return bottom;
}

Player* Space::getUser()
{
    return this->user;
}

// set functions

void Space::setType(string spaceType)
{
    this->type = spaceType;
}

void Space::setTop(Space* space)
{
    top = space;
}

void Space::setRight(Space* space)
{
    right = space;
}

void Space::setLeft(Space* space)
{
    left = space;
}

void Space::setBottom(Space* space)
{
    bottom = space;
}

void Space::setUser(Player* userInput)
{
    this->user = userInput;
}

// destructor

Space::~Space()
{
    delete moveMenu;
}
