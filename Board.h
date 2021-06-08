#ifndef BOARD_H
#define BOARD_H
#include <iostream>
using namespace std;

class Board {
  public:
    //atributes
    string c[3][3]={{".",".","."},{".",".","."},{".",".","."}};
    //constructor
    Board();

    //methods
    void addSign(string sign, int row, int col);
};
#endif
