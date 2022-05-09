#include <iostream>
#include <stdexcept>
#include <vector>
#include "Player.hpp"
using namespace coup;
using namespace std;
 const int MIN_G=2;
 const int MAX_G=6;
const int CO1=6;
Player::Player(Game &g,const string &n)
{
   
    
    if(g.players().size()>=MAX_G){
         throw std::runtime_error("no space");
    }
    
    if(g.startgame==true){
         throw std::runtime_error("nol space");
    }
    
    this->final_game=true;
    this->_g = &g;
    this->_n = n;
    this->_g->objekt_players.push_back(this);
    // cout
    this->couplast="";
    this->topCommand = "";
    this->bank = 0;
    // g.player.push_back(n);
}
Player::~Player() {
    
}
int coup::Player::coins() const
{

    return this->bank;
}
void coup::Player::income()
{
   
     if (this->final_game==false)
    {
        throw std::runtime_error("not turn");
    }
   
     
     if (this->_g->players().size()<MIN_G || this->_g->players().size()>MAX_G)
    {
        throw std::runtime_error("not turn");
    }
   this->_g->startgame=true;
    // cout << this->_n <<"_" <<this->_g->turn() <<"\n" ;
    if (this->_n != this->_g->turn())
    {
        throw std::runtime_error("noot turn");
    }
    this->topCommand = "income";
    ++this->bank;
    _g->turn2();
}

void coup::Player::foreign_aid()
{
      if (this->final_game==false)
    {
        throw std::runtime_error("no00t turn");
    }
     
      if (this->_g->players().size()<MIN_G || this->_g->players().size()>MAX_G)
    {
        throw std::runtime_error("noaat turn");
    }
    if (this->_n != this->_g->turn())
    {
        throw std::runtime_error("noot turn");
    }  
    this->topCommand = "foreign_aid";
    this->bank += 2;
   _g->turn2();
}
string coup::Player::getName() const
{
    return _n;
}
void Player::coup(Player &p) 
{
   
    if (this->bank < CO1)
    {
        throw runtime_error("not player turn\n");
    }
     this->bank-=7;
     p.final_game=false;
     _g->turn2();
     p.topCommand="coup";
     this->topCommand="coup"; 
     this->couplast=p._n;
}
string Player::role()const {
    return typeid(*this).name();
}