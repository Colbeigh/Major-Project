/**
 * @author Colby Hanna <Colby.Hanna@uleth.ca>
 * @date Fall 2024
 */

#include <iostream>
#include <string>
#include <vector>
#include "Environment.hpp"
#include "InteractEnvironment.hpp"
#include "InteractPuzzle.hpp"
#include "FactoryEnvironment.hpp"
#include "FactoryPuzzle.hpp"
#include "Player.hpp"

#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
/**
 * @class Game Game.hpp "Game.hpp"
 * @brief Manages main loop and stores paramaters
 */

class Game {
 public:
   /**
   * @brief Initialized nullptrs, and a list of environments to create.
   */
  Game();

  /**
   * @brief Handles cleanup on pointers
   */
  virtual ~Game();

  /**
   * @brief Sets the paramaters and starts loop
   */
  void Start();

  /**
   * @brief Holds logic for the main loop of the game
   */
  void gameLoop();
 
  /**
   * @brief Prompts the user with what puzzles to select
   * @param the list of puzzles available
   */
  void promptPuzzles(std::vector<std::string> puzzles);
 
  /**
   * @brief Handles users input for the puzzles and sets it 
   * correct puzzle
   * @param Length of acceptable input
   */
  int userInput(int length);
   
  /**
   * @brief Creates users desired puzzle
   * @param The puzzle the user selected
   */
  void createPuzzle(std::string userinput);
 
  /**
   * @brief Logic for changing environment
   */
  void changeEnvironment();

  /**
   * @brief Player object
   */
  Player player;
 
  /**
   * @brief Object to create Environments
   */
  FactoryEnvironment FactEnv;
  
  /**
   * @brief Pointer to the current environment object
   */
  Environment* currentenvironment;
  
  /**
   * @brief Object to Interact with Environments
   */
  InteractEnvironment intenv;
  
  /**
   * @brief Vector of all environments to create
   */
  std::vector<std::string> environments;

  
  /**
   * @brief Object to create Puzzles
   */
  FactoryPuzzle FactPuz;
  
  /**
   * @brief Pointer to current Puzzle Object
   */
  Puzzle* currentpuzzle;
  
  /**
   * @brief Object to Interact with puzzles
   */
  InteractPuzzle intpuz;
  
  /**
   * @brief List of current puzzles
   */
  std::vector<std::string> puzzles;
  
  /**
   * @brief Bool to know when to change environment
   */
  bool ischangeenv;

};

#endif
