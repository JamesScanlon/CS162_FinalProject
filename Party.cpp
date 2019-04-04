/*********************************************************************
 ** Program name: FinalProject
 ** Author: James Scanlon
 ** Date: March 19, 2019
 ** Description: Implementation of the Party class.
 *********************************************************************/

#include "Party.hpp"

#include <iostream>
using namespace std;
// Constructor
Party::Party()
{
    head = new pokemonNode(NULL);
    tail = head;
    
}


bool Party::isEmpty()
{
    return head == NULL;
}


void Party::addBack(Pokemon* pokemonInput)
{
    if (head->pokemon == NULL)                                  //  empty case
    {
        head->pokemon = pokemonInput;
        tail = head;
    }
    else                                        // case for > 1 node
    {
        pokemonNode* newNode = head;
        while (newNode->next != NULL)
        {
            newNode = newNode->next;
        }
        newNode->next = new pokemonNode(pokemonInput, newNode);
        
        tail = newNode->next;
    }
}


Pokemon* Party::getFront()
{
    return this->head->pokemon;
}


void Party::removeFront()
{
    if (isEmpty())                      // empty check
    {
        return;
    }
    
    pokemonNode *deleteNode = head;
    head = deleteNode->next;
    if (isEmpty())
    {
        tail = head;
    }
    
    if (head)
    {
        head->prev = NULL;
        if (head == tail)
        {
            tail->next = NULL;
        }
    }
    delete deleteNode;
}

void Party::pokemonToBack()             // used for winning fighters
{
    if (!head)
        return;
    this->addBack(head->pokemon);
    this->removeFront();
}

void Party::reversePrint()              // used for printing losers
{
    pokemonNode* temp = tail;
    while (temp->prev != NULL)
    {
        std::cout << temp->pokemon->getName() << " " << "(" << temp->pokemon->getType() << ")" << endl;
        temp = temp->prev;
    }
    std::cout << temp->pokemon->getName() << " " << "(" << temp->pokemon->getType() << ")" << endl;
    
}

// Deconstructor
Party::~Party()
{
    while (!isEmpty())                      // iterate through and remove values until isEmpty
    {
        removeFront();
    }
}
