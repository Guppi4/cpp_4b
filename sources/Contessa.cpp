#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>
#include "Contessa.hpp"
using namespace coup;
using namespace std;
#include "Assassin.hpp"
coup::Contessa::~Contessa() {}
void coup::Contessa::block(Player &p)
{
 Assassin* child = dynamic_cast< Assassin*>(&p);
   string s=child->role();
   //cout<<s;
    if (s== "Assassin" && child->coup7==true)
    {
        throw runtime_error("no");
    }
    if (p.topCommand == "foreign_aid")
    {
        throw runtime_error("no");
    }
    if (p.topCommand == "coup")
    {
       //cout<<p.role();
       //
        for (Player *player : p._g->objekt_players)
        {
            if (player->_n== p.couplast)
            {
             player->final_game=true;
              // cout <<_g->index;
                // this->_g->turn2(this->_n);
               
             //  cout <<_g->index;
              // break;
                // push to array of string avtive players
            }
        }
      if(this->_g->lastcommand=="tax"){
          ++ this->_g->index;
      }
    }
    // cout<< p.getName();
  
}
 string Contessa::role() const
{
    return "Contessa";
}