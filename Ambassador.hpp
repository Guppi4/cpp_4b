#pragma once
#include "Player.hpp"
#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;
namespace coup
{
    class Ambassador : public Player
    {
    public:
        
        Ambassador(Game &g,string n): Player(g,n){}
        ~Ambassador();
        void transfer(const Player &from,const Player &to);
        void block(const Player &p);
    };
}