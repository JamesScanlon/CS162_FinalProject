/*********************************************************************
 ** Program name: FinalProject
 ** Author: James Scanlon
 ** Date: March 19, 2019
 ** Description: Implementation of the PokeStore class.  Derived class of the Space class.
 *********************************************************************/


#include "PokeStore.hpp"
#include <vector>
#include <string>
using namespace std;

PokeStore::PokeStore(Player* user) : Space("PokeStore", user)
{
    vector<string> menuItems = {"Buy items", "Leave"};
    moveMenu->setPromptText("Shop Owner: Welcome to the PokeStore!: What would you like to do?");
    moveMenu->setMenuChoices(menuItems);
}

void PokeStore::enter(Player* user)
{
    int secondChoice = 0;
    int userChoice = moveMenu->showMenu();
    while (userChoice == 1)
    {
        vector<string> shopItems = {"Buy poke ball", "Leave"};
        Menu shopMenu("What would you like to do?", shopItems);
        
        secondChoice = shopMenu.showMenu();
        if (secondChoice != 2)                           // allows for additional items in the future
        {
            if (secondChoice == 1)
            {
                if (user->getMoney() >= 200)
                {
                    user->subtractMoney(200);           // update money
                    cout << "You have bought a pokeball! You now have $" << user->getMoney() << ". Go to Professor Oak so that he can give you your starter pokemon." << endl;
                    user->setObjective(2);
                }
                
                else
                {
                    cout << "You cannot afford another poke ball! Darn those student loans!" << endl;       // bad jokes
                }
            
            }
        }
        userChoice = 2;     // else leave
    }
    cout << "You leave the shop." << endl;
}



PokeStore::~PokeStore()
{
    
}
