#ifndef CUBEBOARD_H
#define CUBEBOARD_H
#include "Board.h"

class Cubeboard{
  public:
    //atributes
    Board board_one;
    Board board_two;
    Board board_three;

    //constructor
    Cubeboard();

    //methods
    bool isAvailable(int chosenBoard, int row, int col);
    void MakeMove(int chosenBoard,string sign, int row, int col);
    void SeeCubeBoard();
    string isWinner();
};
#endif