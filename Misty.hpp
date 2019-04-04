/*********************************************************************
 ** Program name: FinalProject
 ** Author: James Scanlon
 ** Date: March 19, 2019
 ** Description: Interface of the Misty class.  Derived class of the Space class.
 *********************************************************************/

#ifndef Misty_hpp
#define Misty_hpp

#include <stdio.h>
#include "Player.hpp"
#include "Space.hpp"

class Misty : public Space
{
public:
    Misty(Player* user);
    ~Misty();
    void enter(Player* user);
};
#endif /* Misty_hpp */
