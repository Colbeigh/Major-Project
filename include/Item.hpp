/**
 * @author Colby Hanna <Colby.Hanna@uleth.ca>
 * @date Fall 2024
 */

#include <iostream>
#include <string>

#ifndef ITEM_H_INCLUDED
#define ITEM_H_INCLUDED

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
  * @brief makes it so when its called it returns new of it
  */
  virtual Item* clone() const = 0;

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
  int itemid;
};

class Ticket : public Item {
 public:
  /**
  * @brief Sets name, description, and itemid
  */
  Ticket();

  /**
  * @brief returns new ticket()
  */
  Item* clone() const override;
};

class PunchedTicket : public Item {
 public:
  /**
  * @brief Sets name, description, and itemid
  */
  PunchedTicket();

  /**
  * @brief returns new Punchedticket()
  */
  Item* clone() const override;
};


class GamblingTicket : public Item {
 public:
  /**
  * @brief Sets name, description, and itemid
  */
  GamblingTicket();

  /**
  * @brief returns new Gamblingticket()
  */
  Item* clone() const override;
};

class Quarter : public Item {
 public:
  /**
  * @brief Sets name, description, and itemid
  */
  Quarter();

  /**
  * @brief returns new Quarter()
  */
  Item* clone() const override;
};
#endif
