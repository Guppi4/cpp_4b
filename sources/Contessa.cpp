#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>
#include "Contessa.hpp"
using namespace coup;
using namespace std;

coup::Contessa::~Contessa() {}
void coup::Contessa::block(Player &p)
{
    if (p.topCommand == "foreign_aid")
    {
        throw runtime_error("no");
    }
    if (p.topCommand == "coup")
    {
        for (Player *player : p._g->objekt_players)
        {
            if (player->_n== p.couplast)
            {
             player->final_game=true;
                // push to array of string avtive players
            }
        }
    }
    // cout<< p.getName();
    _g->turn2();
}
string Contessa::role() const
{
    return "Contessa";
}