/*********************************************************************
 ** Program name: FinalProject
 ** Author: James Scanlon
 ** Date: March 19, 2019
 ** Description: Implementation of the PokeCenter class.  Derived class of the Space class.
 *********************************************************************/

#include "PokeCenter.hpp"
#include "Player.hpp"
// constructor

PokeCenter::PokeCenter(Player* user) : Space("PokeCenter", user)
{
    vector<string> menuItems = {"Heal your pokemon", "Leave"};
    moveMenu->setPromptText("Nurse Joy: Welcome to the PokeCenter! What would you like to do?");
    moveMenu->setMenuChoices(menuItems);
}

void PokeCenter::enter(Player* user)
{
    int userChoice = moveMenu->showMenu();
    while (userChoice == 1)
    {
        if (user->getObjective() > 2 )                  // heals pokemon back to full health
        {
            user->getBulbasaur()->healDamage();
            cout << "Nurse Joy: We have healed your " << user->getBulbasaur()->getName() << " back to full health!" << endl;
        }
        else
        {
            cout << "Nurse Joy: You don't have any pokemon to heal yet." << endl;
        }
        userChoice = moveMenu->showMenu();
    }
    cout << "Nurse Joy waves as you leave!" << endl;
    
    
}

PokeCenter::~PokeCenter()
{
    
}
