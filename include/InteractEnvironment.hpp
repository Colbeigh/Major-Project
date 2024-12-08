/**
 * @author Colby Hanna <Colby.Hanna@uleth.ca>
 * @date Fall 2024
 */

#include <iostream>
#include <string>
#include <vector>
#include "Environment.hpp"

#ifndef INTERACT_ENVIRONMENT_H_INCLUDED
#define INTERACT_ENVIRONMENT_H_INCLUDED

class InteractEnvironment {
 public:
  /**
  * @brief Default constructor
  */
  InteractEnvironment();

  /**
  * @brief Default destructor
  */
  virtual ~InteractEnvironment();

  /**
  * @brief Return name of environment
  * @param Environment to get name of
  */
  std::string getName(Environment* env);

  /**
  * @brief Return Description of environment
  * @param Environment to get Description of
  */
  std::string getDesc(Environment* env);

  /**
  * @brief Return help of environment
  * @param Environment to get help of
  */
 std::string getHelp(Environment* env);


  /**
  * @brief Return list of puzzles of environment
  * @param Environment to get Puzzles from
  */
  std::vector<std::string> getPuzzles(Environment* env);
};
#endif
