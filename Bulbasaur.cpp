/*********************************************************************
 ** Program name: FinalProject
 ** Author: James Scanlon
 ** Date: March 19, 2019
 ** Description: Interface of the Bulbasaur class.  Derived from Pokemon class.
 *********************************************************************/

#include "Bulbasaur.hpp"
#include <iostream>
#include <string>
Bulbasaur::Bulbasaur() : Pokemon::Pokemon()
{
    attackValue = 6;
    defenseValue = 6;
    armor = 0;
    strength = 12;
    maxStrength = 12;
    attackDice = 2;
    defendDice = 2;
    level = 5;                  // initialized level
    setName("Bulbasaur");
    hasFainted = false;
    hasRazorLeaf = false;
    hasSolarBeam = false;
}

void Bulbasaur::increaseLevel()
{
    if (!hasFainted)
    {
        trainingDamage();
    }
    if (!hasFainted)
    {
        if (level < 15)             // Bulbasaur evolves at 16; implementing in further development
        {
            attackValue += 1;
            defenseValue += 1;
            maxStrength += 1;
            level += 1;
            if (level == 10)
            {
                cout << "***** Bulbasaur learned Razor Leaf! This should be enough to defeat Brock! *****" << endl;
                hasRazorLeaf = true;
            }
        }
        else if (level == 15)
        {
            attackValue *= 1.5;
            defenseValue *= 1.5;
            maxStrength *= 1.5;
            level += 1;
            
            cout << "***** Your Bulbasaur has evolved into an Ivysaur! *****" << endl;
            setName("Ivysaur");
            cout << "***** Ivysaur learned Solarbeam! This should be enough to defeat Misty! *****" << endl;
            hasSolarBeam = true;
        }
        else if (level == 24)
        {
            std::cout << "Ivysaur can't level up any more!" << endl;
        }
    }
    
}


void Bulbasaur::trainingDamage()
{
    strength -= 2;
    if (strength <= 0)
    {
        strength = 0;
        hasFainted = true;
        cout << getName() << " has fainted! Take him to the pokeCenter to heal!" << endl;
    }
}

void Bulbasaur::healDamage()
{
    strength = maxStrength;
    hasFainted = false;
}

void Bulbasaur::makeFaint()
{
    strength = 0;
    trainingDamage();
}

// get functions

int Bulbasaur::getMaxStrength()
{
    return maxStrength;
}

bool Bulbasaur::getRazorLeaf()
{
    return hasRazorLeaf;
}

bool Bulbasaur::getSolarBeam()
{
    return hasSolarBeam;
}

bool Bulbasaur::getHasFainted()
{
    return hasFainted;
}


Bulbasaur::~Bulbasaur()
{
    
}
