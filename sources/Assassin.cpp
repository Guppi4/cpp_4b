#include <iostream>
#include <stdexcept>
#include <vector>
#include "Assassin.hpp"
#include "Player.hpp"

using namespace coup;
using namespace std;
const int MAX_7=7;
const int MAX_3=3;
coup::Assassin::~Assassin() {}
void coup::Assassin::coup( Player &p) {
  
if (p.final_game==false)
    {
        throw std::runtime_error("no00t turn");
    }
  
    
   if(this->bank<MAX_3){
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
    
    this->_g->turn2(this->_n);
   
   
}

   string Assassin::role()const {
    return "Assassin";
}