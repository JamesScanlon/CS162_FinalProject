/*********************************************************************
 ** Program name: FinalProject
 ** Author: James Scanlon
 ** Date: March 19, 2019
 ** Description: Interface of the Backpack class.
 *********************************************************************/

#ifndef Backpack_hpp
#define Backpack_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include "Items.hpp"

using namespace std;

class Backpack
{
private:
    Items* head;
    Items* tail;
    void setHead(Items* item);
    void setTail(Items* item);
    Items* getHead();
    Items* getTail();
    void clearBackpack();
    
public:
    // constructor
    Backpack();
    
    // functions
    void printBackpack();
    void printItem(Items* item);
    void addItem(string itemName, int amount);
    
    // destructor
    ~Backpack();
};
#endif /* Backpack_hpp */
