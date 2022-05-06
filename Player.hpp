#pragma once
#include <iostream>
#include <vector>
#include "Game.hpp"

using namespace coup;

using namespace std;

namespace coup
{
    class Game;
    class Player
    {
    public:
        string _n;
        
        string topCommand;
        int bank;
        Game *_g;
        
        Player(Game& g, string n);
        
        ~Player();
        int coins();
        void income();
        void foreign_aid();
        string getName();
        void coup(Player & p);
    };
}