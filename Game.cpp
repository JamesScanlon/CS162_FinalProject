/*********************************************************************
 ** Program name: FinalProject
 ** Author: James Scanlon
 ** Date: March 19, 2019
 ** Description: Implementation of the game class.
 *********************************************************************/

#include "Game.hpp"
#include "Menu.hpp"
#include "Player.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;
using std::setw;



Game::Game()
{
    generateBoard();
    stepsLeft = 30;
    user = new Player;
    hasWon = false;
    hasLost = false;
    vector<string> choicesMenu = {"Move", "Check Backpack", "Check Map", "Check Objective", "Check Pokemon", "Quit Game"};
    optionsMenu = new Menu("Options: ", choicesMenu);
    vector<string> possibleMoves;
    moveMenu = new Menu("Choose a direction to move!", possibleMoves);
    cout << "Hello! Welcome to the World of Pokemon! Your goal is to get a pokemon, beat the two gym leaders, and return home to your mom!" << endl;
    beginGame();
}


void Game::beginGame()
{
    int userChoice = 0;
    playerLocation = mom;
    
    while (hasWon != true && hasLost != true && userChoice != 6)        // gameOver conditions
    {
        userChoice = optionsMenu->showMenu();
        switch (userChoice)                     // selection menu
        {
            case 1:
                makeMove();
                break;
            case 2:
                checkBackpack();
                break;
            case 3:
                printBoard();
                break;
            case 4:
                printObjective();
                break;
            case 5:
                checkPokemon();
                break;
        }
        if (stepsLeft == 0)
        {
            hasLost = true;
        }
        else if (user->getObjective() == 6)
        {
            hasWon = true;
        }
    }
    gameOver();
}

void Game::printObjective()
{
    cout << endl;
    cout << "Current Objective: " << endl;          // helps user navigate the game's goals
    switch(user->getObjective())
    {
        case 1:
            cout << "Buy a pokeball from the store!" << endl;
            break;
        case 2:
            cout << "Get a pokemon from Professor Oak!" << endl;
            break;
        case 3:
            cout << "Go defeat Brock to get the Boulder Badge" << endl;
            break;
        case 4:
            cout << "Go defeat Misty to get the Cascade Badge!" << endl;
            break;
        case 5:
            cout << "Return to your mom's house to win the game!" << endl;
            
    }
    cout << "You have " << stepsLeft << " steps left before you lose the game." << endl;
}

void Game::checkPokemon()
{
    if (user->getObjective() > 2)       // check status of the pokemon
    {
        cout << "Level " << user->getBulbasaur()->getLevel() << " " << user->getBulbasaur()->getName() << " " << user->getBulbasaur()->getStrength() << " / " << user->getBulbasaur()->getMaxStrength() << " HP" << endl;
    }
    else
    {
        cout << "You don't have your own pokemon yet! Check your objective!" << endl;
    }

}

void Game::generateBoard()
{
    // initializing spaces
    grass = new Grass(user);
    road = new Road(user);
    cave = new Cave(user);
    pokeCenter = new PokeCenter(user);
    pokeStore = new PokeStore(user);
    oak = new Oak(user);
    brock = new Brock(user);
    mom = new Mom(user);
    misty = new Misty(user);
    
    // connecting spaces
    // bottom row
    mom->setTop(grass);
    mom->setRight(road);
    
    road->setLeft(mom);
    road->setTop(pokeStore);
    road->setRight(oak);
    
    oak->setLeft(road);
    oak->setTop(pokeCenter);
    
    // middle row
    grass->setTop(brock);
    grass->setRight(pokeStore);
    grass->setBottom(mom);
    
    pokeStore->setTop(cave);
    pokeStore->setLeft(grass);
    pokeStore->setRight(pokeCenter);
    pokeStore->setBottom(road);
    
    pokeCenter->setTop(misty);
    pokeCenter->setLeft(pokeStore);
    pokeCenter->setBottom(oak);
    
    
    // top row
    brock->setRight(cave);
    brock->setBottom(grass);
    
    cave->setLeft(brock);
    cave->setRight(misty);
    cave->setBottom(pokeStore);
    
    misty->setLeft(cave);
    misty->setBottom(pokeCenter);
    
}

void Game::makeMove()
{
    vector<string> movesVector;
    vector<Space*> spacesVector;
    
    if (playerLocation->getTop() != nullptr)                        // create valid move options for player by checking if they have pointers
    {
        movesVector.push_back("Up");
        spacesVector.push_back(playerLocation->getTop());
    }
    
    if (playerLocation->getBottom() != nullptr)
    {
        movesVector.push_back("Down");
        spacesVector.push_back(playerLocation->getBottom());
    }
    
    if (playerLocation->getRight() != nullptr)
    {
        movesVector.push_back("Right");
        spacesVector.push_back(playerLocation->getRight());
    }
    
    if (playerLocation->getLeft() != nullptr)
    {
        movesVector.push_back("Left");
        spacesVector.push_back(playerLocation->getLeft());
    }
    
    movesVector.push_back("Go back to menu");
    moveMenu->setMenuChoices(movesVector);
    
    int userChoice = moveMenu->showMenu();
    if (userChoice != movesVector.size())
    {
        spacesVector.at(userChoice - 1)->enter(user);
        playerLocation = spacesVector.at(userChoice - 1);
        stepsLeft -= 1;
    }
    

}

void Game::checkBackpack()
{
    switch (user->getObjective())                       // user inventory
    {
        case 1:
            cout << "Your backpack is empty." << endl;
            break;
        case 2:
            cout << "You have: 1 poke ball." << endl;
            break;
        case 3:
            cout << "Your backpack is empty." << endl;
            break;
        case 4:
            cout << "You have: 1 Boulder badge" << endl;
            break;
        case 5:
            cout << "You have: 1 Boulder badge, 1 Cascade badge" << endl;
            break;
            
    }
}


void Game::printBoard()
{
    const int columns = 24;
    Space* begin = brock;
    Space* newRow = begin;
    Space* newColumn;
    
    cout << "______________________________________________________________________________" << endl;       // outputs a map by iterating through spaces
    while (newRow != nullptr)
    {
        newColumn = newRow;
        while (newColumn != nullptr)
        {
            string locationName;
            if (playerLocation == newColumn)
                locationName = newColumn->getType() + "@";
            else
            {
                locationName = newColumn->getType();
            }
            cout << '|' << left << " " << setw(columns) << locationName;
            newColumn = newColumn->getRight();
            
        }
        cout << '|' << endl;
        newRow = newRow->getBottom();
    }
    cout << "------------------------------------------------------------------------------" << endl;
    cout << "You are currently at the " << playerLocation->getType() << "." << endl;
    
    
}

void Game::gameOver()                       // end of game
{
    if (hasLost == true)
    {
        cout << "Aw! You have ran out of steps! Maybe next time." << endl;
    }
    else if (hasWon == true)
    {
        cout << "Congrats! Your mom is so proud of you! Isn't that what really matters?" << endl;
    }
    cout << "*********************  Thanks for playing! *********************" << endl;
}

Game::~Game()           // free memory
{
    delete user;
    delete optionsMenu;
    delete moveMenu;
}
