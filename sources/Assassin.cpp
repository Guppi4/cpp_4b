#include <iostream>
#include <stdexcept>
#include <vector>
#include "Assassin.hpp"
using namespace coup;
using namespace std;

coup::Assassin::~Assassin() {}
void coup::Assassin::coup( Player &p) {
   if(this->bank<3){
            throw runtime_error("no money\n");
        }
     p.final_game=false;
    this->topCommand="coup";
    _g->turn2();
}
   string Assassin::role()const {
    return "Assassin";
}