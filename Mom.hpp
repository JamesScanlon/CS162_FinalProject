/*********************************************************************
 ** Program name: FinalProject
 ** Author: James Scanlon
 ** Date: March 19, 2019
 ** Description: Interface of the Mom class.  Derived class of the Space class.
 *********************************************************************/

#ifndef Mom_hpp
#define Mom_hpp

#include <stdio.h>
#include "Player.hpp"
#include "Space.hpp"

class Mom : public Space
{
public:
    Mom(Player* user);
    ~Mom();
    void enter(Player* user);
    
};
#endif /* Mom_hpp */
