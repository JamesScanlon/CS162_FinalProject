/*********************************************************************
 ** Program name: FinalProject
 ** Author: James Scanlon
 ** Date: March 19, 2019
 ** Description: Implementation of the Cave class.  Derived class of the Space class.
 *********************************************************************/
#include "Cave.hpp"
#include "Player.hpp"
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

Cave::Cave(Player* user) : Space("Cave", user)
{
    vector<string> menuItems = {"Train your pokemon", "Skip fighting pokemon"};
    moveMenu->setPromptText("You are in a cave! What would you like to do?");
    moveMenu->setMenuChoices(menuItems);
}

void Cave::enter(Player* user)
{
    int userChoice = moveMenu->showMenu();
    while (userChoice == 1)
    {
        if ((user->getObjective()) > 2)    // makes sure user has pokemon
        {
            string pokemonString;
            if ((rand() % 2 + 1) == 1)     // random pokemon to be found in cave
            {
                pokemonString = "Zubat";
            }
            else if ((rand() % 2 + 1) == 2)
            {
                pokemonString = "Geodude";
            }
            else
            {
                pokemonString = "Clefairy";
            }

            if (user->getBulbasaur()->getHasFainted())      // faint check pre-training
            {
                cout << "Your " << user->getBulbasaur()->getName() << " is fainted! Take it to a pokemonCenter!" << endl;
            }
            user->getBulbasaur()->increaseLevel();
            if (!user->getBulbasaur()->getHasFainted())     // faint check post-training
            {
                cout << "Your " << user->getBulbasaur()->getName() <<  " has defeated a " << pokemonString << "! It is now level " << user->getBulbasaur()->getLevel() << "! " << endl;
                cout << "Your " << user->getBulbasaur()->getName() << "'s current HP is " << user->getBulbasaur()->getStrength() << " / " << user->getBulbasaur()->getMaxStrength() << endl;
            }
            
        }
        
        else
        {
            cout << "You don't have your own pokemon yet! Check your objective!" << endl;
            
        }
        
        userChoice = moveMenu->showMenu();
        
    }
    cout << "You leave the cave." << endl;
}



Cave::~Cave()
{
    
}
