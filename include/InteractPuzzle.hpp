/**
 * @author Jem Pineda <j.pineda@uleth.ca>
 * @date Fall 2024
 */
#include <iostream>
#include <string>
#include <vector>
#include "Player.hpp"
#include "Puzzle.hpp"

#ifndef INTERACT_PUZZLE_H_INCLUDED
#define INTERACT_PUZZLE_H_INCLUDED
  /**
  * @class InteractPuzzle InteractPuzzle.hpp Interact
  */
class InteractPuzzle {
 public:

   /**
  * @brief Default constructor
  */
  InteractPuzzle();

  /**
  * @brief virtual default deconstructor
  */
  virtual ~InteractPuzzle();

  /**
  * @brief returns the current puzzle for the environment.
  * @param puzzle pointer
  */
  std::vector<std::string> getPuzzle(Puzzle* puzzle);

  /**
  * @brief returns player and condition
  * @param puzzle pointer
  */
  Player getPlayer(Puzzle* puzzle);

  /**
  * @brief returns bool change enviroment
  * @param puzzle pointer
  */
  bool getChangeEnv(Puzzle* puzzle);

  /**
  * @brief starts puzzle the puzzle. 
  * @param puz pointer puz
  * @param player const reference of player
  * @param puzzles vector string of list of puzzles
  * @param changeenv bool for changing environment.
  */
  void startPuzzle(Puzzle* puz, const Player& player,

  std::vector<std::string> puzzles, bool changeenv);
};

#endif
