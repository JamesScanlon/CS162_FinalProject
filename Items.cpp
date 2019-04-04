/*********************************************************************
 ** Program name: FinalProject
 ** Author: James Scanlon
 ** Date: March 19, 2019
 ** Description: Implementation of the Player class.
 *********************************************************************/

#include "Items.hpp"



// get functions
Items* Items::getNext()
{
    return this->next;
}

Items* Items::getPrev()
{
    return this->prev;
}
