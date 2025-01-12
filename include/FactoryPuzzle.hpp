/**
 * @author Colby Hanna <Colby.Hanna@uleth.ca>
 * @date Fall 2024
 */

#ifndef FACTORYPUZZLE_HPP
#define FACTORYPUZZLE_HPP

#include <string>
#include <map>
#include <functional>
#include "Puzzle.hpp"
/**
* @class FactoryPuzzle FactoryPuzzle.hpp
* "FactoryPuzzle.hpp"
* @brief Creates Puzzles
*/

class FactoryPuzzle {
 public:
   /**
   * @brief Sets up map holding keys to which environment
   */
  FactoryPuzzle();

  /**
   * @brief Deletes map
   */
  virtual ~FactoryPuzzle();

  /**
   * @brief Goes through map and returns a new environment
   * based off input
   */
  Puzzle* createPuzzle(const std::string& name);

  /**
   * @brief Map holding all Puzzles that can be created
   */
  std::map<std::string, std::function<Puzzle*()>> puzzlemap;
};

#endif
