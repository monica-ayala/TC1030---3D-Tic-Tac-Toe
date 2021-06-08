
#include <iostream>

class Player{
  private:
    //atributes
    std::string sign;
    std::string name;

  public:
    //constructor
    Player(std::string, std::string);
    Player();

    //methods
    std::string getSign();
    std::string getName();
};

