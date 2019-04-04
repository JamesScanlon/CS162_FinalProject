/*********************************************************************
 ** Program name: FinalProject
 ** Author: James Scanlon
 ** Date: March 19, 2019
 ** Description: Interface of the Items class.
 *********************************************************************/

#ifndef Items_hpp
#define Items_hpp

#include <stdio.h>
#include <string>
class Items
{
    
private:
    int count;
    std::string itemName;
    Items* next;
    Items* prev;
    
public:
    // constructor
    Items(std::string itemName, int count = 0, Items *next = nullptr, Items *prev = nullptr);
    Items* getNext();
    Items* getPrev();
};


#endif /* Items_hpp */
