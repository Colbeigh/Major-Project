/**
 * @author Nikita Evtushenko <nikita.evtushenko@uleth.ca>
 * @date Fall 2024
 */

#ifndef ENVIRONMENT_H_INCLUDED
#define ENVIRONMENT_H_INCLUDED
#include <string>
#include <memory>
#include <iostream>
#include <vector>
#include "NPC.hpp"

/**
* @class Environment Environment.hpp
* "Environment.hpp"
* @brief Holds Information of environments
*/
class Environment {
 public:
    /**
     * @brief Constructor
     */
    Environment();

    /**
     * @brief virtual Deconstructor
     */
    virtual ~Environment();

    /**
     * @brief description of current environment.
     */
    std::string getDescription();

    /**
     * @brief get the currecnt puzzle from the current enviorment.
     */
    std::vector<std::string> getPuzzles();

    /**
     * @brief get the of the currcent environment.
     */
    std::string getName();

    /**
     * @brief get help that is relevent to current eviorment.
     */
    std::string help();

    /**
     * @brief set the name of the current environment.
     */
    std::string name;

    /**
     * @brief set the description of the current environment. 
     */
    std::string environmentDescription;
    /**
     * @brief set the help info of the current environment.
     */
    std::string helpInfo;
    /**
     * @brief set the puzzles of the current environment.
     */
    std::vector<std::string> puzzles;
};

class PassengerCart : public Environment {
 public:
    /**
     * @brief Constructor
     */
    PassengerCart();
    /**
     * @brief virtual Deconstructor
     */
    virtual ~PassengerCart();
};

class DiningCart : public Environment {
 public:
    /**
     * @brief Constructor
     */
    DiningCart();
    /**
     * @brief virtual Deconstructor
     */
    virtual ~DiningCart();
};

class GamblingCart : public Environment {
 public:
    /**
     * @brief Constructor
     */
    GamblingCart();

    /**
     * @brief virtual Deconstructor
     */
    virtual ~GamblingCart();
};

class LuggageCart : public Environment {
 public:
    /**
    * @brief Constructor
    */
    LuggageCart();
    /**
     * @brief virtual Deconstructor
     */
    virtual ~LuggageCart();
};

class ArmoryCart : public Environment {
 public:
    /**
     * @brief Constructor
     */
    ArmoryCart();
    /**
     * @brief virtual Deconstructor
     */
    virtual ~ArmoryCart();
};

class EngineCart : public Environment {
 public:
    /**
     * @brief Constructor
     */
    EngineCart();

    /**
     * @brief virtual Deconstructor
     */
    virtual ~EngineCart();
};

#endif //ENVIRONMENT_H_INCLUDED
