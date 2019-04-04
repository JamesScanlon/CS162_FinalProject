/*********************************************************************
 ** Program name: FinalProject
 ** Author: James Scanlon
 ** Date: March 19, 2019
 ** Description: Interface of the Bulbasaur class.  Derived from Pokemon class.
 *********************************************************************/

#ifndef Bulbasaur_hpp
#define Bulbasaur_hpp

#include <stdio.h>
#include "Pokemon.hpp"
class Bulbasaur : public Pokemon
{
private:
    int maxStrength;
    bool hasFainted;
    bool hasRazorLeaf;
    bool hasSolarBeam;
public:
    Bulbasaur();
    void increaseLevel();
    void trainingDamage();
    void healDamage();
    void makeFaint();
    //get functions
    bool getRazorLeaf();
    bool getSolarBeam();
    int getMaxStrength();
    bool getHasFainted();
    ~Bulbasaur();
    
};
#endif /* Bulbasaur_hpp */
