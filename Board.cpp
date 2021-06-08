#include "Board.h"

Board :: Board(){}

void Board :: addSign(string sign, int row, int col){
  c[row][col]=sign;
}