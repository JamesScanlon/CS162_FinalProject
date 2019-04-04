/*********************************************************************
 ** Program name: FinalProject
 ** Author: James Scanlon
 ** Date: March 19, 2019
 ** Description: Interface of the Pokemon class.
 *********************************************************************/

#ifndef Pokemon_hpp
#define Pokemon_hpp
#include <stdio.h>
#include <string>
using namespace std;

class Pokemon
{
    
protected:
    int attackValue;
    int defenseValue;
    int attackDice;
    int defendDice;
    int armor;
    int strength;
    int level;
    string type;
    string name;
    int currentAttack;
    int currentDefend;
    bool specialMessage;

    
public:
    // default constructor
    Pokemon();
    
    // virtual parent functions
    virtual void increaseLevel() = 0;
    virtual int getMaxStrength(){return 0;};
    virtual void trainingDamage() = 0;
    virtual void healDamage() = 0;
    
    // get functions
    int getLevel();
    int getStrength();
    int getCurrentAttack();
    int getCurrentDefend();
    int getArmor();
    string getType();
    bool getSpecialMessage();
    string getName();
    
    // set functions
    void setName(string inputName);
    void setLevel(int level);
    
    // destructor
    virtual ~Pokemon();

};
#endif /* Pokemon_hpp */
