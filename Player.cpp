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
    // g.player.push_back(n);
}
Player::~Player() {}
int coup::Player::coins()
{

    return 1;
}
void coup::Player::income()
{
}

void coup::Player::foreign_aid() {}
