
   
#include <iostream>
#include <stdexcept>
#include <vector>
#include "Ambassador.hpp"
using namespace coup;
using namespace std;



    Ambassador::~Ambassador(){}
    void Ambassador::transfer( Player &from,Player &to){
       if(from.bank==0){
           throw std::runtime_error("noott turn");
       }
       
        if (this->_n != this->_g->turn())
    {
        throw std::runtime_error("noopt turn");
    }  
        from.bank+=-1;
        to.bank+=1;
        this->topCommand="transfer";   
       this->_g->turn2(this->_n);
    }
    void Ambassador::block( Player &p){
        for (Player *player : p._g->objekt_players)
        {
            if (player->_n== p.couplast)
            {
             player->bank+=2;
               p.bank+=-2;
              // cout <<_g->index;
                // this->_g->turn2(this->_n);
               
             //  cout <<_g->index;
               break;
                // push to array of string avtive players
            }
        }
    }
    string Ambassador::role()const {
    return "Ambassador";
}