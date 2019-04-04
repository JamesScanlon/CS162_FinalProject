/*********************************************************************
 ** Program name: FinalProject
 ** Author: James Scanlon
 ** Date: March 19, 2019
 ** Description: Interface of the Cave class.  Derived class of the Space class.
 *********************************************************************/

#ifndef Cave_hpp
#define Cave_hpp

#include <stdio.h>
#include "Space.hpp"
#include "Player.hpp"

class Cave : public Space
{
public:
    Cave(Player* user);
    ~Cave();
    void enter(Player* user);
    
};
#endif /* Cave_hpp */
