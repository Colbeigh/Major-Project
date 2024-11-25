/**
 * @author Jem Pineda <j.pineda@uleth.ca>
 * @date Fall 2024
 */

#include <iostream> 
#include <string>
#include <limits>
#include "Inventory.hpp"
#include "Player.hpp"

#ifndef PUZZLE_HPP_INCLUDED
#define PUZZLE_HPP_INCLUDED

class Puzzle {
 public:
  Puzzle() {};
  virtual ~Puzzle() {};
  virtual void startPuzzle(Player &player, std::vector<std::string >&puzzles
  ,bool &changeenv) =0;
  virtual void event() = 0;
  virtual void failPuzzle() = 0;
  virtual void solution() = 0;
  virtual int giveReward() = 0;
  
};

class ticketPuzzle: public Puzzle {
public:

void startPuzzle(Player &player, std::vector<std::string >&puzzles,
 bool &changeenv) override;
void event () override;
void failPuzzle() override;
void solution() override;
int giveReward() override;
bool solved();

};

#endif //Puzzle_hpp_included