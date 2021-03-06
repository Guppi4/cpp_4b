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
        
        string clas="Ambassador";
        Ambassador(Game &g,string n): Player(g,n){}
        ~Ambassador();
        void transfer( Player &from,Player &to);
        void block( Player &p);
        string role()const;
        

    };
}