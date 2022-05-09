#include <iostream>
#include <stdexcept>
#include <vector>
#include "Player.hpp"
using namespace coup;
using namespace std;
 const int MIN_G=2;
 const int MAX_G=6;
Player::Player(Game &g,const string &n)
{
    if(g.player.size()>=MAX_G){
         throw std::runtime_error("no space");
    }
    if(g.player.size()==2){
        g.startgame=true;
    }
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
     if (this->_g->player.size()<MIN_G || this->_g->player.size()>MAX_G)
    {
        throw std::runtime_error("not turn");
    }
    
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
     
      if (this->_g->player.size()<MIN_G || this->_g->player.size()>MAX_G)
    {
        throw std::runtime_error("not turn");
    }
      if (this->_n != this->_g->turn())
    {
        throw std::runtime_error("not turn");
    }
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

     p.topCommand="coup";
}
string Player::role()const {
    return typeid(*this).name();
}