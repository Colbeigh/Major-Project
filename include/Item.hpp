/**
 * @author Colby Hanna <Colby.Hanna@uleth.ca>
 * @date Fall 2024
 */

#include <iostream>
#include <string>

#ifndef ITEM_H_INCLUDED
#define ITEM_H_INCLUDED
/**
* @class Item Item.hpp "Item.hpp"
* @brief Item object
*/

class Item {
 public:
  /**
  * @brief Sets name, description and itemid
  */
  Item();

  /**
  * @brief Default Destructor
  */
  virtual ~Item();

  /**
  * @brief Returns String Name
  */
  std::string getName();

  /**
  * @brief Return string Description
  */
  std::string getDesc();

  /**
  * @brief Name of item
  */
  std::string name;

  /**
  * @brief Description of item
  */
  std::string desc;

  /**
  * @brief itemid of item
  */
  std::string itemid;
};

class Ticket : public Item {
 public:
  /**
  * @brief Sets name, description, and itemid
  */
  Ticket();
};

class PunchedTicket : public Item {
 public:
  /**
  * @brief Sets name, description, and itemid
  */
  PunchedTicket();
};


class GamblingTicket : public Item {
 public:
  /**
  * @brief Sets name, description, and itemid
  */
  GamblingTicket();
};

class Quarter : public Item {
 public:
  /**
  * @brief Sets name, description, and itemid
  */
  Quarter();
};


class PieceOfPaper : public Item {
 public:
  /**
  * @brief Sets name, description, and itemid
  */
  PieceOfPaper();
};

class Plans: public Item {
 public:
  /**
  * @brief Sets name, description, and itemid
  */
  Plans();
};
#endif
