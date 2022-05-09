#include <iostream>
#include <vector>
#include <stdexcept>

#include "Contessa.hpp"
using namespace coup;
using namespace std;


    
    coup::Contessa::~Contessa(){}
    void coup::Contessa::block(Player &p){
        if(p.topCommand=="foreign_aid"){
             throw runtime_error("no");
        }
         if(p.topCommand=="coup"){
            p.final_game=true;
        }
         // cout<< p.getName();
         _g->turn2();
    }
     string Contessa::role()const {
    return "Contessa";
}