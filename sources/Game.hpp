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
        string removed_player;
        vector<string> player;
        Game();
        ~Game();
        void push_to_game(const string &s);
        string turn();
        void turn2();
        vector<string> players() const;
         string winner() const;
         void removePlayer(Player &p);
    };
}