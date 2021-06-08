#include "Game.h"

Game game;

int main() {

  game.menu();
  game.One=Player("o",game.name);
  game.Two=Player("x", game.name2);
  cout 
  <<endl<<endl<<"----------START-----------"<<endl<<endl;
  system("clear");
  game.cube.SeeCubeBoard();
  while (true){
    string winner;
    game.player_one();
    system("clear");
    game.cube.SeeCubeBoard();
    winner = game.cube.isWinner();
    if(game.cube.isWinner()=="o"){
      cout<<endl<<"The winner is "<<game.One.getName()<<endl;
      break;
    }
    

    game.player_two();
    system("clear");
    winner = game.cube.isWinner();
    game.cube.SeeCubeBoard();
    if(game.cube.isWinner()=="o"){
      cout<<endl<<"The winner is "<<game.Two.getName()<<endl;
      break;
    }

    if(game.cube.isWinner()=="FULL_BOARD"){
      cout<<endl<<"No one won the game"<<endl;
      break;
    }
  }
  return 0;
}
