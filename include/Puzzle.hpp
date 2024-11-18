/**
 * @author Jem Pineda <j.pineda@uleth.ca>
 * @date Fall 2024
 */

#include <iostream> 

#ifndef PUZZLE_HPP_INCLUDED
#define PUZZLE_HPP_INCLUDED

class Puzzle{
 public:
  Puzzle();
  virtual ~Puzzle();
  virtual void startPuzzle();
  virtual void failPuzzle();
  virtual void solution();
  virtual int giveReward();
  bool solved();
  virtual int getID(int puzzleID) = 0;
};

#endif //Puzzle_hpp_included

class Puzzle1:public Puzzle{

int getID(int puzzleID) override; 


};