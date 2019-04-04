/*********************************************************************
 ** Program name: FinalProject
 ** Author: James Scanlon
 ** Date: March 19, 2019
 ** Description: Interface of the Road class.  Derived class of the Space class.
 *********************************************************************/
#ifndef Road_hpp
#define Road_hpp

#include <stdio.h>
#include "Space.hpp"

class Road : public Space
{
public:
    Road(Player* user);
    ~Road();
    void enter(Player* user);
    
};

#endif /* Road_hpp */
