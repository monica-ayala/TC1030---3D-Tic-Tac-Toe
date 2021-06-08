#include <iostream>
#include <cstdlib>
using namespace std;
#include "Board.h"
#include "Cubeboard.h"
#include "Player.h"

class Game{
  public: 

  //atributes:
  Player One, Two;
  string name, name2;
  Cubeboard cube;

  //constructor:

  Game();

  //methods:
  void menu();
  void player_one();
  void player_two();
  int validValue(int,string);
};