#include <iostream>
#include <stdexcept>
#include <vector>
#include "Player.hpp"
using namespace coup;
using namespace std;

Player::Player(Game  &g, string  n)
{
    this->_g = &g;
    this->_n = n;
    this->_g->push_to_game(n);
   // cout
    this->topCommand = "";
    this->bank=0;
    // g.player.push_back(n);
}
Player::~Player() {}
int coup::Player::coins()
{

    return this->bank;
}
void coup::Player::income()
{

 //cout << this->_n <<"_" <<this->_g->turn() <<"\n" ;
if (this->_n != this->_g->turn()){
     throw std::runtime_error("not turn");
  }      
this->topCommand="income";
++this->bank;
_g->turn2();
}

void coup::Player::foreign_aid() {}
