#pragma once
#include <iostream>
#include <vector>
#include <stdexcept>


using namespace std;
namespace coup
{
    class Game
    {
    public:
        static vector<string> player;
        Game();
        ~Game();
       // static void push_to_game(string s);
        static string turn();
        static vector<string> players();
        static string winner();
    };
}