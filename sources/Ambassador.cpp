
   
#include <iostream>
#include <stdexcept>
#include <vector>
#include "Ambassador.hpp"
using namespace coup;
using namespace std;



    Ambassador::~Ambassador(){}
    void Ambassador::transfer( Player &from,Player &to){
       if(from.bank==0){
           throw std::runtime_error("noot turn");
       }
       
        if (this->_n != this->_g->turn())
    {
        throw std::runtime_error("noot turn");
    }  
        from.bank+=-1;
        to.bank+=1;
        this->topCommand="transfer";   
       this->_g->turn2(this->_n);
    }
    void Ambassador::block(const Player &p){}
    string Ambassador::role()const {
    return "Ambassador";
}