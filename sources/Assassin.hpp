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
        bool coup7=false;
        string clas;
        Assassin(Game &g,string name): Player(g,name){
             clas="Assassin";
            coup7=false;
        };
        ~Assassin();
        void coup( Player &p);
        string role()const;
    };
}