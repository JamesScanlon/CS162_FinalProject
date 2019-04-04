/*********************************************************************
 ** Program name: FinalProject
 ** Author: James Scanlon
 ** Date: March 19, 2019
 ** Description: Interface of the PokeStore class.  Derived class of the Space class.
 *********************************************************************/


#ifndef PokeStore_hpp
#define PokeStore_hpp

#include <stdio.h>
#include "Space.hpp"

class PokeStore : public Space
{
public:
    PokeStore(Player* user);
    ~PokeStore();
    void enter(Player* user);
    
};
#endif /* PokeStore_hpp */
