#pragma once
#include <iostream>
#include <vector>
#include "Game.hpp"

using namespace coup;

using namespace std;

namespace coup
{
    class Player
    {
    public:
        string _n;
        int bank;
        Game _g;
        
        Player(Game const& g, string const& n);
        
        ~Player();
        static int coins();
        void income();
        void foreign_aid();
        
    };
}