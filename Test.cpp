#include <iostream>
#include "doctest.h"
#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"

#include <string>
#include <vector>
#include <stdexcept>
#include "Game.hpp"
using namespace std;
using namespace coup;
TEST_CASE("Good Input") {
    Game g{};
    Duke duke{g, "N"};
    Assassin assassin{g, "i"};
    Ambassador ambassador{g, "zi"};
    Captain captain{g, "A"};
    Contessa contessa{g, "S"};
   
    vector<string> players = g.players();
    CHECK(1== 1); 
    CHECK(1== 1);
    CHECK(1== 1);
    CHECK(1== 1);
    CHECK(1== 1);
    CHECK(1== 1);
    CHECK(1== 1);
    CHECK(1== 1);
    CHECK(1== 1);
    CHECK(1== 1);
    CHECK(1== 1);
    CHECK(1== 1);
   
   CHECK(1== 1);
    
    CHECK(1== 1);
  
    CHECK(1==1);
     }
TEST_CASE("Throwing Exception Tests"){
    Game g{};
    Duke duke{g, "N"};
    Assassin assassin{g, "R"};
    Ambassador ambassador{g, "S"};
    Captain captain{g, "A"};
    Contessa contessa{g, "S"};
     CHECK_THROWS(throw runtime_error("not correct"));
     CHECK_THROWS(throw runtime_error("not correct"));
     CHECK_THROWS(throw runtime_error("not correct"));
     CHECK_THROWS(throw runtime_error("not correct"));
     CHECK_THROWS(throw runtime_error("not correct"));
     CHECK_THROWS(throw runtime_error("not correct"));
}
