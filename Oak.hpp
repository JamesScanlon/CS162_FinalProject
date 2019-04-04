/*********************************************************************
 ** Program name: FinalProject
 ** Author: James Scanlon
 ** Date: March 19, 2019
 ** Description: Interface of the Oak class.  Derived class of the Space class.
 *********************************************************************/
#ifndef Oak_hpp
#define Oak_hpp

#include <stdio.h>
#include "Space.hpp"
#include "Player.hpp"

class Oak : public Space
{
public:
    Oak(Player* user);
    ~Oak();
    void enter(Player* user);
    
};
#endif /* Oak_hpp */
