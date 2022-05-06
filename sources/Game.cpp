#include <iostream>
#include <stdexcept>
#include <vector>
#include "Game.hpp"
#include "Player.hpp"
#include<bits/stdc++.h>

using namespace coup;
using namespace std;


    Game::Game() {}
    Game::~Game() {}
    string Game::turn()
    {
        string top=this->player[0];
        
        return top;
    }
   
    vector<string> Game::players () const
    {
         //cout <<this->player.at(0);
         vector<string> v=this->player;
     
        return  v;
    }
    void Game::turn2()
    {
         string name = this->player.at(0);
         player.erase(player.begin());
         this->player.push_back(name);
        
       
    }
     string Game::winner() const
    {
        
        return this->player.at(0);
    }
   void coup::Game::push_to_game(const string &s){
      
       this->player.push_back(s); 
       // cout << this->player.back();
    }
      void Game::removePlayer(Player &p) {
      this->removed_player=p.getName();
      this->player.erase(remove(this->player.begin(),this->player.end(),p.getName()),this->player.end());
      //cout <<p.getName() << "piska";
      //new_end = remove(this->player.begin(),this->player.end(), p.getName());
      
    }
   
    