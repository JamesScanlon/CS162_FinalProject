/*********************************************************************
 ** Program name: FinalProject
 ** Author: James Scanlon
 ** Date: March 19, 2019
 ** Description: Implementation of the Player class.
 *********************************************************************/
#include "Player.hpp"
#include "Bulbasaur.hpp"
#include "Pokemon.hpp"

// constructor
Player::Player(int moneyValue, int objectiveValue)
{
    money = moneyValue;
    backpack = new Backpack();
    pokemon = new Bulbasaur();
    setObjective(1);
}

// get functions

Backpack* Player::getBackpack()
{
    return backpack;
}

Bulbasaur* Player::getBulbasaur()
{
    return pokemon;
}

int Player::getMoney()
{
    return money;
}

int Player::getObjective()
{
    return currentObjective;
}


// set functions

void Player::setObjective(int input)
{
    currentObjective = input;
}

void Player::subtractMoney(int newMoney)
{
    money -= newMoney;
}
// deconstructor
Player::~Player()
{
    delete backpack;
}
