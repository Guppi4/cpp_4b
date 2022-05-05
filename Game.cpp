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
        string top=this->player.at(0);
        return top;
    }
   
    vector<string> Game::players()
    {
         //cout <<this->player.at(0);
         vector<string> v=this->player;
     
        return  v;
    }
    
    string Game::winner()
    {
        return "winner";
    }
   void coup::Game::push_to_game(string s){
      
       this->player.push_back(s); 
       // cout << this->player.back();
    }