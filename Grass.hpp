/*********************************************************************
 ** Program name: FinalProject
 ** Author: James Scanlon
 ** Date: March 19, 2019
 ** Description: Interface of the Grass class.  Derived class of the Space class.
 *********************************************************************/
#ifndef Grass_hpp
#define Grass_hpp

#include <stdio.h>
#include "Space.hpp"

class Grass : public Space
{
public:
    Grass(Player* user);
    ~Grass();
    void enter(Player* user);
    
};
#endif /* Grass_hpp */
