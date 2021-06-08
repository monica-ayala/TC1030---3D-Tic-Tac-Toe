#include "Cubeboard.h"
#include <iostream>

Cubeboard :: Cubeboard(){}

bool Cubeboard :: isAvailable(int chosenBoard, int row, int col){
  switch (chosenBoard) {
    case 1:
      if(board_one.c[row][col]=="."){return true;}
      else{return false;}
      break;
    case 2:
      if(board_two.c[row][col]=="."){return true;}
      else{return false;}
      break;
    case 3:
      if(board_three.c[row][col]=="."){return true;}
      else{return false;}
      break;
  }
  return false;
}

void Cubeboard :: MakeMove(int chosenBoard,string sign, int row, int col){
  switch (chosenBoard) {
    case 1:
      board_one.addSign(sign,row,col);
      break;
    case 2:
      board_two.addSign(sign,row,col);
      break;
    case 3:
      board_three.addSign(sign,row,col);
      break;
  }
}

void Cubeboard :: SeeCubeBoard(){
  cout << "---------3D TIC-TAC-TOE------------"<<endl;
  cout << "Board 1 \n";
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
    cout << board_one.c[i][j]<<" ";
    }
    cout << "\n" ;
  }
  cout << "Board 2 \n";
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
    cout << board_two.c[i][j]<<" ";
    }
    cout << "\n" ;
  }
  cout << "Board 3 \n";
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
    cout << board_three.c[i][j]<<" ";
    }
    cout << "\n" ;
  }

}

string Cubeboard :: isWinner(){
  string winner="no one";

  // full board
  bool isFull = true;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      if(board_one.c[i][j]=="."){
        isFull = false;
      }
    }
  }

  if (isFull == true){
    winner = "FULL_BOARD";
    return winner;
  }

  //BOARD ONE
  for (int i=0; i<3; i++){
    if(board_one.c[i][0]==board_one.c[i][1] && board_one.c[i][1]==board_one.c[i][2] && board_one.c[i][0]!="."){
      winner = board_one.c[i][0];
      return winner;
    }
    if (board_one.c[0][i]==board_one.c[1][i] && board_one.c[1][i]==board_one.c[2][i] && board_one.c[0][i]!= "."){
      winner = board_one.c[0][i];
      return winner;
    }
  }
  if(board_one.c[0][0]==board_one.c[1][1] && board_one.c[1][1]==board_one.c[2][2] && board_one.c[0][0]!="."){
    winner = board_one.c[0][0];
    return winner;}

  if(board_one.c[0][2]==board_one.c[1][1] && board_one.c[1][1]==board_one.c[2][0] && board_one.c[0][2]!="."){
    winner = board_one.c[0][2];
    return winner;
  }
  //BOARD TWO
  for (int i=0; i<3; i++){
    if(board_two.c[i][0]==board_two.c[i][1] && board_two.c[i][1]==board_two.c[i][2] && board_two.c[i][0]!="."){
      winner = board_two.c[i][0];
      return winner;
    }
    if (board_two.c[0][i]==board_two.c[1][i] && board_two.c[1][i]==board_two.c[2][i] && board_two.c[0][i]!= "."){
      winner = board_two.c[0][i];
      return winner;
    }
  }
  if(board_two.c[0][0]==board_two.c[1][1] && board_two.c[1][1]==board_two.c[2][2] && board_two.c[0][0]!="."){
    winner = board_two.c[0][0];
    return winner;}

  if(board_two.c[0][2]==board_two.c[1][1] && board_two.c[1][1]==board_two.c[2][0] && board_two.c[0][2]!="."){
    winner = board_two.c[0][2];
    return winner;
  }
  //BOARD THREE 
  for (int i=0; i<3; i++){
    if(board_three.c[i][0]==board_three.c[i][1] && board_three.c[i][1]==board_three.c[i][2] && board_three.c[i][0]!="."){
      winner = board_three.c[i][0];
      return winner;
    }
    if (board_three.c[0][i]==board_three.c[1][i] && board_three.c[1][i]==board_three.c[2][i] && board_three.c[0][i]!= "."){
      winner = board_three.c[0][i];
      return winner;
    }
  }
  if(board_three.c[0][0]==board_three.c[1][1] && board_three.c[1][1]==board_three.c[2][2] && board_three.c[0][0]!="."){
    winner = board_three.c[0][0];
    return winner;}

  if(board_three.c[0][2]==board_three.c[1][1] && board_three.c[1][1]==board_three.c[2][0] && board_three.c[0][2]!="."){
    winner = board_three.c[0][2];
    return winner;
  }
  //3D win conditions 
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      if(board_one.c[i][j]==board_two.c[i][j] && board_two.c[i][j]==board_three.c[i][j] && board_three.c[i][j]!="."){
        winner = board_three.c[i][j];
        return winner;
      }
    }
  }

  for(int i=0;i<3;i++){
    if(board_one.c[i][0]==board_two.c[i][1] && board_two.c[i][1]==board_three.c[i][2] && board_three.c[i][2]!="."){
        winner = board_three.c[i][2];
        return winner;
      }
  }

  for(int i=0;i<3;i++){
    if(board_one.c[i][2]==board_two.c[i][1] && board_two.c[i][1]==board_three.c[i][0] && board_three.c[i][0]!="."){
        winner = board_three.c[i][0];
        return winner;
      }
  }

  for(int i=0;i<3;i++){
    if(board_one.c[0][i]==board_two.c[1][i] && board_two.c[1][i]==board_three.c[2][i] && board_three.c[2][i]!="."){
        winner = board_three.c[2][i];
        return winner;
      }
  }

  for(int i=0;i<3;i++){
    if(board_one.c[2][i]==board_two.c[1][i] && board_two.c[1][i]==board_three.c[0][i] && board_three.c[0][i]!="."){
        winner = board_three.c[0][i];
        return winner;
      }
  }
  if(board_one.c[0][0]==board_two.c[1][1] && board_two.c[1][1]==board_three.c[2][2] && board_three.c[2][2]!="."){
    winner = board_three.c[0][0];
    return winner;}

  if(board_one.c[0][2]==board_two.c[1][1] && board_two.c[1][1]==board_three.c[2][0] && board_three.c[2][0]!="."){
    winner = board_three.c[2][0];
    return winner;}
  
  if(board_one.c[2][0]==board_two.c[1][1] && board_two.c[1][1]==board_three.c[0][2] && board_three.c[0][2]!="."){
    winner = board_three.c[0][2];
    return winner;}
  
  if(board_one.c[2][2]==board_two.c[1][1] && board_two.c[1][1]==board_three.c[0][0] && board_three.c[0][0]!="."){
    winner = board_three.c[0][0];
    return winner;}

  

 
  return winner;

}