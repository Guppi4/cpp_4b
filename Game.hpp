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
        vector<string> player;
        Game();
        ~Game();
        void push_to_game(string s);
        string turn();
        vector<string> players();
         string winner();
    };
}