/*********************************************************************
 ** Program name: FinalProject
 ** Author: James Scanlon
 ** Date: March 19, 2019
 ** Description: Interface of the Brock class.  Derived class of the Space class.
 *********************************************************************/

#ifndef Brock_hpp
#define Brock_hpp

#include <stdio.h>
#include "Space.hpp"
#include "Player.hpp"

class Brock : public Space
{
public:
    Brock(Player* user);
    ~Brock();
    void enter(Player* user);
};
#endif /* Brock_hpp */
