/*********************************************************************
 ** Program name: FinalProject
 ** Author: James Scanlon
 ** Date: March 19, 2019
 ** Description: Interface of the Space class.
 *********************************************************************/

#ifndef Space_hpp
#define Space_hpp

#include <stdio.h>
#include "Pokemon.hpp"
#include "Player.hpp"
#include "Menu.hpp"
#include <string>
using namespace std;
#
class Space
{
    
    protected:
        // Pointers to adjacent spaces
        string type;
        Space *top;
        Space *right;
        Space *left;
        Space *bottom;
        Player *user;
        Menu * moveMenu;
        //std::string spaceName;
    public:
        Space(string spaceValue = "blank", Player* user = nullptr);
    

        //std::string getSpaceName();
        // virtual functions, two pure virtual
        virtual void enter(Player *play) = 0;
        // get functions
        Space* getTop();
        Space* getRight();
        Space* getLeft();
        Space* getBottom();
        Player* getUser();
        string getType();
    
        // set functions
        void setTop(Space *space);
        void setRight(Space *space);
        void setLeft(Space *space);
        void setBottom(Space *space);
        void setType(string spaceType);
        void setUser(Player* user);
    
    
        // destructor
        virtual ~Space();

    
};

#endif /* Space_hpp */
