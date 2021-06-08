#include "Player.h"

Player :: Player(std::string _sign, std::string _name){
  sign= _sign;
  name = _name;
}

Player :: Player(){}

std::string Player :: getSign(){
  return sign;
}

std::string Player :: getName(){
  return name;
}