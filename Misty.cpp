/*********************************************************************
 ** Program name: FinalProject
 ** Author: James Scanlon
 ** Date: March 19, 2019
 ** Description: Implementation of the Brock class.  Derived class of the Space class.
 *********************************************************************/

#include "Misty.hpp"
#include "Player.hpp"

// constructor

Misty::Misty(Player* user) : Space("Misty's Gym", user)
{
    vector<string> menuItems = {"Talk to Misty", "Leave"};
    moveMenu->setPromptText("You are at Misty's Gym! What would you like to do?");
    moveMenu->setMenuChoices(menuItems);
}

void Misty::enter(Player* user)
{
    int userChoice = moveMenu->showMenu();
    while (userChoice == 1)
    {
        switch (user->getObjective()){
            case 1:
                cout << "Misty: You seem too young to battle someone of my strength." << endl;
                break;
            case 2:
                cout << "Misty: Great! You have a poke ball.  It would be more useful with a pokemon in it." << endl;
                user->setObjective(3);
                break;
            case 3:
                cout << "Misty: You don't have enough badges to challenge me yet." << endl;
                break;
            case 4:
                cout << "Misty: you'd better not take me too lightly. My Water-type Pokémon are tough!" << endl;
                cout << "########################################" << endl;
                if (user->getBulbasaur()->getSolarBeam())                           // needs solarbeam to win
                {
                    cout << "Your " << user->getBulbasaur()->getName() << " used Solarbeam! It's super very effective! Misty's Starmie has fainted!" << endl;
                    cout << "Misty: Congratulations! Here is the Cascade badge!" << endl;
                    cout << "* You have obtained the Cascade badge! * " << endl;
                    user->setObjective(5);
                }
                else                                                            // else loses
                {
                    cout << "Your " << user->getBulbasaur()->getName() << " used razor leaf! It's super effective, but Misty's Starmie survived due to its higher level!  Misty's Starmie used Ice Beam! It's super effective! Your " << user->getBulbasaur()->getName() << " has been defeated!" << endl;
                    user->getBulbasaur()->makeFaint();
                }
                break;
            case 5:
                cout << "Misty: Your mom is going to be SO proud of you!" << endl;
        }
        userChoice = moveMenu->showMenu();
    }
    cout << "Misty waves goodbye!" << endl;
    
    
}


// destructor
Misty::~Misty()
{
    
}
