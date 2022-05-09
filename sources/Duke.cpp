#include <iostream>
#include <stdexcept>
#include <vector>
#include "Duke.hpp"
using namespace coup;
using namespace std;


coup::Duke::~Duke() {}
void coup::Duke::tax() {
      if (this->_n != this->_g->turn())
    {
        throw std::runtime_error("noot turn");
    }
     this->bank += 3;
    this->_g->turn2(this->_n);
}
void coup::Duke::block( Player &p) {
    this->topCommand="block";
    p.bank+=-2;
  this->_g->turn2(this->_n);
}
    string Duke::role()const {
    return "Duke";
}