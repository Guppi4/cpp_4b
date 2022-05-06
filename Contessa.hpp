#pragma once

#include <iostream>
#include <stdexcept>
#include <vector>
#include "Player.hpp"
using namespace std;
namespace coup
{
    class Contessa : public Player
    {
    public:
        
        Contessa(Game &g,string name): Player(g,name){}
        ~Contessa();
        void block(Player &p);
    };
}