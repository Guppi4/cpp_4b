#pragma once
#include <iostream>
#include <vector>
#include <stdexcept>


using namespace std;
namespace coup
{
    class Player;
    class Game
    {
    public:
        string q;
        vector<string> player;
        Game();
        ~Game();
        void push_to_game(string s);
        string turn();
        void turn2();
        vector<string> players();
         string winner();
    };
}