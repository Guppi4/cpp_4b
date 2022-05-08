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
        string clas;
        Assassin(Game &g,string name): Player(g,name){
             clas="Assassin";
        };
        ~Assassin();
        void coup( Player &p);
        string role()const;
    };
}