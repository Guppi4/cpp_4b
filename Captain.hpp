#pragma once
#include "Player.hpp"
#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;
namespace coup
{
    class Captain : public Player
    {
    public:
      
        Captain(Game g,string name): Player(g,name){};
        ~Captain();
        void steal(const Player &p);
        void block(const Player &p);
    };
}