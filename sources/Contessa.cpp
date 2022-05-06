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
            _g->player.insert(_g->player.begin(), _g->removed_player);
        }
         // cout<< p.getName();
        
    }
