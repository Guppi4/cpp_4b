#include <iostream>
#include <stdexcept>
#include <vector>
#include "Captain.hpp"
using namespace coup;
using namespace std;



    coup::Captain::~Captain(){}
    void coup::Captain::steal(Player &p){
         if (p.coins() < 2){
             throw std::runtime_error(" money");
        }
        if (this->topCommand != "block"){
            p.bank+=-2;
            this->bank+=-2;            
             _g->turn2();
        }
    }
    void coup::Captain::block(Player &p){}
   string Captain::role()const {
    return "Captain";
}