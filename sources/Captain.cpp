#include <iostream>
#include <stdexcept>
#include <vector>
#include "Captain.hpp"
using namespace coup;
using namespace std;



    coup::Captain::~Captain(){}
    void coup::Captain::steal(Player &p){
          if (this->_n != this->_g->turn())
    {
        throw std::runtime_error("not turn");
    }
        this->couplast=p._n;
         if (p.coins() ==1){
             p.bank-=1;
            this->bank+=1;  
            this->_g->turn2(this->_n);
           return;
        }
        
        if (this->topCommand != "block"){
            p.bank+=-2;
            this->bank+=2;            
             this->_g->turn2(this->_n);
            return;
        }
      
    }
    void coup::Captain::block(Player &p){
           
            if (p.role() != "Captain" || p.topCommand != "steal"){
            throw std::runtime_error("not block");
        }
           if (this->_n != this->_g->turn())
    {
        throw std::runtime_error("not turn");
    }
    
    }
   string Captain::role()const {
    return "Captain";
}