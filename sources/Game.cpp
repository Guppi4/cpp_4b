#include <iostream>
#include <stdexcept>
#include <vector>
#include "Game.hpp"
#include "Player.hpp"
#include <bits/stdc++.h>

using namespace coup;
using namespace std;

Game::Game()
{
    index = 0;
}
Game::~Game() {}
string Game::turn()
{
    
    string top = this->players()[this->index];

    return top;
}

vector<string> Game::players() const
{
    vector<string> players;//active players

    for (Player *player : this->objekt_players)
    {
        if (player->final_game == true)
        {

            players.push_back(player->getName()); // push to array of string avtive players
        }
    }

    return players;
}
void Game::turn2()
{
   if(this->players().size()-1==index){
     index=index-(this->players().size()-1);
   }
   else{
   ++index;
   }
}
string Game::winner() const
{
    if (this->startgame == false)
    {
        throw std::runtime_error("not winner");
    }
    
    return this->players().at(0);
}
void coup::Game::push_to_game(const string &s)
{

    this->player.push_back(s);
    // cout << this->player.back();
}
void Game::removePlayer(Player &p)
{
    //this->removed_player = p.getName();
    this->player.erase(remove(this->player.begin(), this->player.end(), p.getName()), this->player.end());
    // cout <<p.getName() << "piska";
    // new_end = remove(this->player.begin(),this->player.end(), p.getName());
}
