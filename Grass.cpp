/*********************************************************************
 ** Program name: FinalProject
 ** Author: James Scanlon
 ** Date: March 19, 2019
 ** Description: Implementation of the Grass class.  Derived class of the Space class.
 *********************************************************************/

#include "Grass.hpp"
#include "Player.hpp"
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

Grass::Grass(Player* user) : Space("Grass", user)
{
    vector<string> menuItems = {"Train your pokemon", "Skip fighting pokemon"};
    moveMenu->setPromptText("You are in some grass! What would you like to do?");
    moveMenu->setMenuChoices(menuItems);
    
}

void Grass::enter(Player* user)
{
    
    int userChoice = moveMenu->showMenu();
    while (userChoice == 1)
    {
        if ((user->getObjective()) > 2)    // makes sure user has pokemon
        {
            string pokemonString;
            if ((rand() % 2 + 1) == 1)
            {
                pokemonString = "Rattata";
            }
            else
            {
                pokemonString = "Pidgey";
            }
            if (user->getBulbasaur()->getHasFainted())          // faint check pre-training
            {
                cout << "Your " << user->getBulbasaur()->getName() << " is fainted! Take it to a pokemonCenter!" << endl;
            }
            user->getBulbasaur()->increaseLevel();
            if (!user->getBulbasaur()->getHasFainted())         // faint check post-training
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
    cout << "You leave the grass." << endl;
}



Grass::~Grass()
{
    
}
