/**
 * @author Colby Hanna <Colby.Hanna@uleth.ca>
 * @date Fall 2024
 */

#ifndef FACTORYENVIRONMENT_HPP
#define FACTORYENVIRONMENT_HPP

#include <string>
#include <map>
#include "Environment.hpp"

class FactoryEnvironment {
 public:
   /**
   * @brief Sets up map holding keys to which environment
   */
  FactoryEnvironment();
    
  /**
   * @brief Deletes map
   */
  virtual ~FactoryEnvironment();
      
  /**
   * @brief Goes through map and returns a new environment 
   * based off input
   */
  Environment* createEnvironment(const std::string& name);

  /**
   * @brief Map holding all environments that can be created
   */
  std::map<std::string, Environment*> environmentmap;
};

#endif
