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
    int couphh = 7;
    public:
        string _n;
        string clas1;
        string topCommand;
        int bank;
        Game *_g;
       
        bool final_game=false;
        Player(Game& g, const string &n);
        
        ~Player();
        int coins() const;
        void income();
        void foreign_aid();
        string getName() const;
        void coup(Player & p) ;
        string role()const ;
    };
}