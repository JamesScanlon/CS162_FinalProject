/*********************************************************************
 ** Program name: FinalProject
 ** Author: James Scanlon
 ** Date: March 19, 2019
 ** Description: Interface of the game class.
 *********************************************************************/

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>
#include "Menu.hpp"
#include "Player.hpp"
#include "Backpack.hpp"
#include "Bulbasaur.hpp"
#include "Space.hpp"
#include "Mom.hpp"
#include "Grass.hpp"
#include "Road.hpp"
#include "Cave.hpp"
#include "PokeCenter.hpp"
#include "Oak.hpp"
#include "Brock.hpp"
#include "Mom.hpp"
#include "Misty.hpp"
#include "PokeStore.hpp"
class Game
{
    int stepsLeft;
    int height;
    int width;
    bool hasWon;
    bool hasLost;
    Player* user;
    Space* grass;
    Space* road;
    Space* cave;
    Space* pokeCenter;
    Space* pokeStore;
    Space* oak;
    Space* brock;
    Space* mom;
    Space* misty;
    Space* playerLocation;
    Menu *optionsMenu;
    Menu *moveMenu;
    
    void beginGame();
    void gameOver();
    void makeMove();
    
public:
    // constructor
    Game();
    
    void generateBoard();
    void printBoard();
    void printObjective();
    void checkPokemon();
    void checkBackpack();
    // destructor
    ~Game();
};

#endif /* Game_hpp */
