#include <iostream>
#include <stdexcept>
#include <vector>
#include "Player.hpp"
using namespace coup;
using namespace std;

Player::Player(Game const& g, string const& n) {
_n=n;
_g=g;
//g.player.push_back(n);
}
Player::~Player() {}
 int coup::Player::coins() { 
    
     return 1; 
     }
void coup::Player::income() {
    
}

void coup::Player::foreign_aid() {}
