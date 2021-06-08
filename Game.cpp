#include "Game.h"

Game::Game(){}

void Game :: menu(){
  cout << "---------3D TIC-TAC-TOE------------"<<endl;
  cout << "To play first input Player One´s name: "<<endl<<endl;
  cin >> name;
  cout << endl<<endl<<"Now please input Player Two´s name: "<<endl<<endl;
  cin >> name2;
}

void Game::player_one(){
  int b,r,c;
  while (true){
    cout << "----PLAYER ONE TURN----"<<endl;
    cout << "Choose a board (1,2,3): "<<endl;
    cin >> b;
    b=validValue(b,"board");
    cout << "Choose a row (1,2,3): "<<endl;
    cin >> r;
    r=validValue(r,"row");
    cout << "Choose a column (1,2,3): "<<endl;
    cin >> c;
    c=validValue(c, "column");
    if (cube.isAvailable(b,r-1,c-1)){
      cube.MakeMove(b, One.getSign(),r-1,c-1);
      cube.SeeCubeBoard();
      break;
    }
    else{cout<<endl<<"THIS POSITION IS TAKEN!"<<endl<<endl;}
    
  }
}

void Game::player_two(){
  int b,r,c;
  while (true){
    cout << "----PLAYER TWO TURN----"<<endl;
    cout << "Choose a board (1,2,3): "<<endl;
    cin >> b;
    b=validValue(b,"board");
    cout << "Choose a row (1,2,3): "<<endl;
    cin >> r;
    r=validValue(r,"row");
    cout << "Choose a column (1,2,3): "<<endl;
    cin >> c;
    c=validValue(c,"column");
    if (cube.isAvailable(b,r-1,c-1)){
      cube.MakeMove(b, Two.getSign(),r-1,c-1);
      cube.SeeCubeBoard();
      break;
    }
    else{cout<<endl<<"THIS POSITION IS TAKEN!"<<endl<<endl;}
    
  }
}

int Game::validValue(int x, string msg){
  while(x!=1 && x!=2 && x!=3){
    cout<<endl<<"THIS POSITION DOESNT EXIST"<<endl<<endl;
    cout<< "Choose a "<<msg<<" (1,2,3)"<<endl;
    cin>>x;
  }
  return x;
}
