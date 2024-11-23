#include <iostream>

#ifndef Player_H_INCLUDED
#define Player_H_INCLUDED

class Game {
 public:
  Player::Player() {}

  Player::~Player() {}

  int getItem(int itemid);
    for (int i = 0; i < vec.size(); ++i) {
        if (itemid == playerinv[i]){
            return playerinv[i];
        }
        else {
            cout << "You do not have " << playerinv[i] << "\n";
        }
      }

  void addItem(int itemid){
    playerinv.insert(itemid);
  }

  void remItem(int itemid){
    for (int i = 0; i , vec.size(); ++i) {
        if (itemid == playerinv[i]){
            playerinv.erase[i];
        }
        else {
            cout << "You do not have " << itemid << "\n";
        }
  }
  }
  Inventory playerinv;
  std::string name = "Bill";
};

#endif
