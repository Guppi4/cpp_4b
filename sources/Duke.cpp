#include <iostream>
#include <stdexcept>
#include <vector>
#include "Duke.hpp"
using namespace coup;
using namespace std;


coup::Duke::~Duke() {}
void coup::Duke::tax() {
     _g->turn2();
}
void coup::Duke::block( Player &p) {
    this->topCommand="block";
    p.bank+=-2;
}
