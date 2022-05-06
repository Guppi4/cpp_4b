#pragma once
#include "Player.hpp"
#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;
namespace coup
{
    class Assassin : public Player
    {
    public:
       
        Assassin(Game &g,string name): Player(g,name){};
        ~Assassin();
        void coup( Player &p);
    };
}