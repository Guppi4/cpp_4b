
   
#include <iostream>
#include <stdexcept>
#include <vector>
#include "Ambassador.hpp"
using namespace coup;
using namespace std;



    Ambassador::~Ambassador(){}
    void Ambassador::transfer( Player &from,Player &to){
        from.bank+=-1;
        to.bank+=1;
        this->topCommand="transfer";   
        _g->turn2();
    }
    void Ambassador::block(const Player &p){}
