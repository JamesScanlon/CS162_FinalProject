/*********************************************************************
 ** Program name: FinalProject
 ** Author: James Scanlon
 ** Date: March 19, 2019
 ** Description: Interface of the Menu class.
 *********************************************************************/
#ifndef Menu_hpp
#define Menu_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
using std::vector;
using std::string;

class Menu {
    
private:
    vector<string> menuChoices;
    string promptText;
    
public:
    Menu(vector<string> menuChoices);
    Menu(string promptText, vector<string> menuChoices);
    int showMenu();
    void setPromptText(string text);
    string getPromptText();
    void setMenuChoices(vector<string> menuChoices);
    ~Menu();
};
#endif /* Menu_hpp */
