#include <iostream>
#include <stdexcept>
#include <vector>
#include "Player.hpp"
using namespace coup;
using namespace std;
 
Player::Player(Game &g,const string &n)
{
    
    this->_g = &g;
    this->_n = n;
    this->_g->push_to_game(n);
    // cout
    this->topCommand = "";
    this->bank = 0;
    // g.player.push_back(n);
}
Player::~Player() {}
int coup::Player::coins() const
{

    return this->bank;
}
void coup::Player::income()
{

    // cout << this->_n <<"_" <<this->_g->turn() <<"\n" ;
    if (this->_n != this->_g->turn())
    {
        throw std::runtime_error("not turn");
    }
    this->topCommand = "income";
    ++this->bank;
    _g->turn2();
}

void coup::Player::foreign_aid()
{
    this->topCommand = "foreign_aid";
    this->bank += 2;
    _g->turn2();
}
string coup::Player::getName() const
{
    return _n;
}
void Player::coup(Player &p) const
{
   
    if (this->bank < couphh)
    {
        throw runtime_error("not player turn\n");
    }

    _g->removePlayer(p);

   ///game->nextTurn();
}
string Player::role()const {
    return typeid(*this).name();
}