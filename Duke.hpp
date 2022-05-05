#pragma once
#include "Player.hpp"
#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;
namespace coup
{
    class Duke : public Player
    {
    public:
        
        Duke(Game &g,string name) : Player(g,name){}
        ~Duke();
        void block(const Player &p);
        void tax();
        
    };
}