/*********************************************************************
 ** Program name: FinalProject
 ** Author: James Scanlon
 ** Date: March 19, 2019
 ** Description: Interface of the Mom class.  Derived class of the Space class.
 *********************************************************************/
#include "Mom.hpp"
#include "Player.hpp"
// constructor

Mom::Mom(Player* user) : Space("Mom's house", user)
{
    vector<string> menuItems = {"Talk to your mom", "Leave"};
    moveMenu->setPromptText("You're at your mom's house! What would you like to do?");
    moveMenu->setMenuChoices(menuItems);
}

void Mom::enter(Player* user)
{
    int userChoice = moveMenu->showMenu();
    if (userChoice == 1)
    {
        switch (user->getObjective())
        {
            case 1:
                cout << "Mom: Good luck with buying a poke ball!" << endl;
                break;
            case 2:
                cout << "Mom: Shouldn't you be meeting Professor Oak?" << endl;
                break;
            case 3:
                cout << "Mom: Good luck defeating Brock!" << endl;
                break;
            case 4:
                cout << "Mom: Good luck defeating Misty!" << endl;
                break;
            case 5:
                cout << "Mom: Wow! I'm so proud of you!" << endl;
                user->setObjective(6);
                break;
        }
        
    }
    cout << "Your mom wishes you good luck!" << endl;
    
    
}


// destructor
Mom::~Mom()
{
    
}
