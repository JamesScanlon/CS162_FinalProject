/*********************************************************************
 ** Program name: FinalProject
 ** Author: James Scanlon
 ** Date: March 19, 2019
 ** Description: Interface of the Party class.
 *********************************************************************/

#ifndef Party_hpp
#define Party_hpp
#include <stdio.h>
#include "Pokemon.hpp"

class Party{
private:
protected:
    struct pokemonNode
    {
        friend class Party;
        Pokemon *pokemon;
        pokemonNode* next;
        pokemonNode* prev;
        pokemonNode(Pokemon* pokemonInput, pokemonNode* prevInput = NULL, pokemonNode* nextInput = NULL){
            pokemon = pokemonInput;
            next = nextInput;
            prev = prevInput;
        }
    };
    pokemonNode* head;
    pokemonNode* tail;
public:
    // constructor
    Party();
    
    // functions
    bool isEmpty();
    void addBack(Pokemon* characterInput);
    Pokemon* getFront();
    void pokemonToBack();
    void removeFront();
    void reversePrint();
    
    // destructer
    ~Party();
    
};
#endif /* Party_hpp */
