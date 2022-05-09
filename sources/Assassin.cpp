#include <iostream>
#include <stdexcept>
#include <vector>
#include "Assassin.hpp"
#include "Player.hpp"

using namespace coup;
using namespace std;
const int MAX_7=7;
coup::Assassin::~Assassin() {}
void coup::Assassin::coup( Player &p) {
  

  
     int i=0;
    for (string s: p._g->players())
    {
        
        if (p._n == s)
        {
        break;
            
        }
       i++;
    }
   if(this->bank<3){
            throw runtime_error("no money\n");
        }
     if (this->bank >= MAX_7){
            Player::coup(p);
        return;
        }
     this->bank-=3;
     p.final_game=false;
    this->topCommand="coup";
    this->couplast=p._n;
    if(this->_g->index>i){
       --this->_g->index;
   }
    _g->turn2();
   
   
}

   string Assassin::role()const {
    return "Assassin";
}