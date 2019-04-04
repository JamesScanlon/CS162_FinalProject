/*********************************************************************
 ** Program name: FinalProject
 ** Author: James Scanlon
 ** Date: March 19, 2019
 ** Description: Interface of the Oak class.  Derived class of the Space class.
 *********************************************************************/

#include "Oak.hpp"
#include "Player.hpp"
// constructor

Oak::Oak(Player* user) : Space("Professor Oak's Lab", user)
{
    vector<string> menuItems = {"Talk to Professor Oak", "Leave"};
    moveMenu->setPromptText("You are in Professor Oak's Lab! What would you like to do?");
    moveMenu->setMenuChoices(menuItems);
}

void Oak::enter(Player* user)
{
    int userChoice = moveMenu->showMenu();
    while (userChoice == 1)
    {
        switch (user->getObjective())
        {
            case 1:
                cout << "Professor Oak: You need to go to the PokeStore and buy a poke ball so that I can give you your pokemon." << endl;
                break;
            case 2:
                cout << "Professor Oak: Great! You have a poke ball! Here is your first pokemon! A Bulbasaur!" << endl;
                user->setObjective(3);
                break;
            case 3:
                cout << "Professor Oak: You must now go and defeat Brock! Be sure to train your pokemon." << endl;
                break;
            case 4:
                cout << "Professor Oak: You must now go and defeat Misty! Be sure to train your pokemon." << endl;
                break;
        }
        userChoice = moveMenu->showMenu();
    }
    cout << "Professor Oak bids you farewell!" << endl;
                 
                 
}


// destructor
Oak::~Oak()
{
    
}
