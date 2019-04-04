/*********************************************************************
 ** Program name: FinalProject
 ** Author: James Scanlon
 ** Date: March 19, 2019
 ** Description: Implementation of the Brock class.  Derived class of the Space class.
 *********************************************************************/

#include "Brock.hpp"
#include "Player.hpp"
// constructor

Brock::Brock(Player* user) : Space("Brock's Gym", user)
{
    vector<string> menuItems = {"Talk to Brock", "Leave"};
    moveMenu->setPromptText("You are at Brock's Gym! What would you like to do?");
    moveMenu->setMenuChoices(menuItems);
}

void Brock::enter(Player* user)
{
    int userChoice = moveMenu->showMenu();
    while (userChoice == 1)
    {
        switch (user->getObjective()){
            case 1:
                cout << "Brock: You seem too young to battle someone of my strength." << endl;
                break;
            case 2:
                cout << "Brock: Great! You have a poke ball.  It would be more useful with a pokemon in it." << endl;
                user->setObjective(3);
                break;
            case 3:
                cout << "Brock: My rock-hard willpower is evident in even my Pokémon! Let's battle!" << endl;
                cout << "########################################" << endl;
                if (user->getBulbasaur()->getRazorLeaf())               // needs razor leaf to win
                {
                    cout << "Your " << user->getBulbasaur()->getName() << " used razor leaf! It's super effective!  You have defeated Brock's Onyx!" << endl;
                    cout << "Brock: Congratulations! Here is the Boulder badge" << endl;
                    cout << "* You have obtained the Boulder badge! * " << endl;
                    user->setObjective(4);
                }
                else                            // fail condition
                {
                    cout << "Your " << user->getBulbasaur()->getName() << " used tackle! It's not very effective! Brock's Onyx uses rock slide and defeats your " << user->getBulbasaur()->getName() << "!" << endl;
                    user->getBulbasaur()->makeFaint();
                }
                break;
            case 4:
                cout << "Brock: The next gym leader is Misty. She uses water type pokemon." << endl;
                break;
            case 5:
                cout << "Brock: Your mom is going to be SO proud of you! Please say hi to her for me." << endl;
        }
        userChoice = moveMenu->showMenu();
    }
    cout << "Brock waves goodbye!" << endl;
    
    
}


// destructor
Brock::~Brock()
{
    
}
