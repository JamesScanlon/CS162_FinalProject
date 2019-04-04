/*********************************************************************
 ** Program name: FinalProject
 ** Author: James Scanlon
 ** Date: March 19, 2019
 ** Description: Implementation of the Backpack class.
 *********************************************************************/

#include "Backpack.hpp"


// constructor

Backpack::Backpack()
{
    head = nullptr;
    tail = nullptr;
    
}


// get functions
Items* Backpack::getHead()
{
    return head;
}

Items* Backpack::getTail()
{
    return tail;
}



// destructor
Backpack::~Backpack()
{
    Items* temp = getHead();
    
    while (temp != nullptr)
    {
        Items* deleted = temp;
        temp = temp->getNext();
        delete deleted;
    }
}
