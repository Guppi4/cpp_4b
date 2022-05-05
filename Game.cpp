#include <iostream>
#include <stdexcept>
#include <vector>
#include "Game.hpp"
using namespace coup;
using namespace std;


    Game::Game() {}
    Game::~Game() {}
    string Game::turn()
    {
        return "this";
    }
   
    vector<string> Game::players()
    {
         vector<string> v;
        return v;
    }
    
    string Game::winner()
    {
        return "winner";
    }