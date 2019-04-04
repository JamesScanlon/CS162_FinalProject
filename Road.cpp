/*********************************************************************
 ** Program name: FinalProject
 ** Author: James Scanlon
 ** Date: March 19, 2019
 ** Description: Implementation of the Road class.  Derived class of the Space class.
 *********************************************************************/
#include "Road.hpp"
#include <vector>
#include <string>
using namespace std;

Road::Road(Player* user) : Space("Road", user)
{

}

void Road::enter(Player* user)      // generic space
{
    cout << "You are now on a road! It is protected so there are no pokemon here. " << endl;
}

Road::~Road()
{
    
}
