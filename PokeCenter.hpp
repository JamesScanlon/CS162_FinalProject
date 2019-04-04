/*********************************************************************
 ** Program name: FinalProject
 ** Author: James Scanlon
 ** Date: March 19, 2019
 ** Description: Interface of the PokeCenter class.  Derived class of the Space class.
 *********************************************************************/
#ifndef PokeCenter_hpp
#define PokeCenter_hpp

#include <stdio.h>
#include "Player.hpp"
#include "Space.hpp"

class PokeCenter : public Space
{
public:
    PokeCenter(Player* user);
    ~PokeCenter();
    void enter(Player *user);
    
};
#endif /* PokeCenter_hpp */
