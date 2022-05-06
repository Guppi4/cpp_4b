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
    _g->removePlayer(p);
    this->topCommand="coup";
    
}
