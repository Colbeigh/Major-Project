/**
 * @author Jem Pineda <j.pineda@uleth.ca>
 * @date Fall 2024
 */

#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <unistd.h>
#include "Inventory.hpp"
#include "Player.hpp"
#include "NPC.hpp"

#ifndef PUZZLE_HPP_INCLUDED
#define PUZZLE_HPP_INCLUDED
/**
 * @class Puzzle Puzzle.hpp "Puzzle.hpp";
 * @brief A base class for puzzles, removes puzzles and add puzzles
 */
class Puzzle {
 public:
 /**
  * @brief Default constructor
  */
  Puzzle() {}
   /**
  * @brief Default deconstructor
  */
  virtual ~Puzzle() {}
   /**
  * @brief Creates and sets up the event of each puzzle.
  */
  virtual void event() = 0;
   /**
  * @brief Describes and sets the fail condition of a puzzle.
  */
  virtual bool failPuzzle() = 0;
   /**
  * @brief Describes and sets the solved condition of a puzzle.
  */
  virtual bool solution() = 0;
   /**
  * @brief Sets up the puzzle and calls event.
  * @param player object being passed on, vector for puzzles,
  * a bool for changing the environment
  */
  void startPuzzle(Player player,
  std::vector<std::string> puzzles, bool changeenv);
   /**
  * @brief Adds current puzzle into the vector
  * @param String for puzzle id of the current puzzle.
  */
  void addPuzzle(std::string puzzleid);
   /**
  * @brief Removes current puzzle from the vector
  * @param String for puzzle id of the current puzzle.
  */
  void remPuzzle(std::string puzzleid);
   /**
  * @brief Accepts player input
  * @param int length sets the limit of the user input.
  */
  int pInput(int length);
   /**
  * @brief returns the player 
  */
  Player getPlayer() {return p;}
   /**
  * @brief returns env that changes environment
  */
  bool getChangeEnv () {return env;}
   /**
  * @brief a vector function that returns the puzzle
  */
  std::vector<std::string> getPuzzle() {return puzz;}
  std::string help;

  Player p;
  std::vector<std::string> puzz;
  bool env;
};

class puzzleWithReward : public Puzzle{
 public:
 /**
  * @brief Default constructor
  */
  puzzleWithReward() {}
   /**
  * @brief Default deconstructor
  */
  virtual ~puzzleWithReward() {}
  /**
  * @brief an override to set up a specific
  * event of the current puzzle.
  */
  void event() override = 0;
  /**
  * @brief an override to set up a specific
  * fail condition of the current puzzle.
  */
  bool failPuzzle() override = 0;
  /**
  * @brief an override to set up a specific
  * win condition of the current puzzle.
  */
  bool solution() override = 0;
  /**
  * @brief an override that gives player
  * an item reward for solving specific 
  * puzzle.
  */
  virtual void giveReward() = 0;
};

class SeatPuzzle: public Puzzle {
 public:
  /**
  * @brief Constructor
  */
  SeatPuzzle();
  /**
  * @brief virtual Deconstructor
  */
  ~SeatPuzzle();
  /**
  * @brief an override to set up a specific
  * event of the current puzzle.
  */
  void event() override;
  /**
  * @brief an override to set up a specific
  * fail condition of the current puzzle.
  */
  bool failPuzzle() override;
  /**
  * @brief an override to set up a specific
  * win condition of the current puzzle.
  */
  bool solution() override;
};

class ticketPuzzle: public puzzleWithReward {
 public:
  /**
  * @brief Constructor
  */
  ticketPuzzle();
  /**
  * @brief virtual Deconstructor
  */
  ~ticketPuzzle();
  /**
  * @brief an override to set up a specific
  * event of the current puzzle.
  */
  void event() override;
  /**
  * @brief an override to set up a specific
  * win condition of the current puzzle.
  */
  bool failPuzzle() override;
  /**
  * @brief an override to set up a specific
  * win condition of the current puzzle.
  */
  bool solution() override;
  /**
  * @brief an override that gives player
  * an item reward for solving specific 
  * puzzle.
  */
  void giveReward() override;

 private:
  NPC* TM;
};

class sweetTalkPuzzle: public puzzleWithReward {
 public:
  /**
  * @brief Constructor
  */
  sweetTalkPuzzle();
  /**
  * @brief virtual Deconstructor
  */
  ~sweetTalkPuzzle();
  /**
  * @brief an override to set up a specific
  * win condition of the current puzzle.
  */
  void event() override;
  /**
  * @brief an override to set up a specific
  * win condition of the current puzzle.
  */
  bool failPuzzle() override;
  /**
  * @brief an override to set up a specific
  * win condition of the current puzzle.
  */
  bool solution() override;
  /**
  * @brief an override that gives player
  * an item reward for solving specific 
  * puzzle.
  */
  void giveReward() override;

 private:
  NPC* RL;
};

class bouncerPuzzle: public Puzzle {
 public:
  /**
  * @brief Constructor
  */
  bouncerPuzzle();
  /**
  * @brief virtual Deconstructor
  */
  ~bouncerPuzzle();
  /**
  * @brief an override to set up a specific
  * win condition of the current puzzle.
  */
  void event() override;
  /**
  * @brief an override to set up a specific
  * win condition of the current puzzle.
  */
  bool failPuzzle() override;
  /**
  * @brief an override to set up a specific
  * win condition of the current puzzle.
  */
  bool solution() override;

 private:
  NPC* B;
};

class doorPuzzle: public Puzzle {
 public:
  /**
  * @brief Constructor
  */
  doorPuzzle();
  /**
  * @brief virtual Deconstructor
  */
  ~doorPuzzle();
  /**
  * @brief an override to set up a specific
  * win condition of the current puzzle.
  */
  void event() override;
  /**
  * @brief an override to set up a specific
  * win condition of the current puzzle.
  */
  bool failPuzzle() override;
  /**
  * @brief an override to set up a specific
  * win condition of the current puzzle.
  */
  bool solution() override;
};

class helpfullPassengerPuzzle : public Puzzle {
 public:
  /**
  * @brief Constructor
  */
  helpfullPassengerPuzzle();
  /**
  * @brief virtual Deconstructor
  */
  ~helpfullPassengerPuzzle();
  /**
  * @brief an override to set up a specific
  * win condition of the current puzzle.
  */
  void event() override;
  /**
  * @brief an override to set up a specific
  * win condition of the current puzzle.
  */
  bool failPuzzle() override;
  /**
  * @brief an override to set up a specific
  * win condition of the current puzzle.
  */
  bool solution() override;

 private:
  NPC* HP;
};

class gamblingOutlawPuzzle : public puzzleWithReward {
 public:
  /**
  * @brief Constructor
  */
  gamblingOutlawPuzzle();
  /**
  * @brief virtual Deconstructor
  */
  ~gamblingOutlawPuzzle();
  /**
  * @brief an override to set up a specific
  * win condition of the current puzzle.
  */
  void event() override;
  /**
  * @brief an override to set up a specific
  * win condition of the current puzzle.
  */
  bool failPuzzle() override;
  /**
  * @brief an override to set up a specific
  * win condition of the current puzzle.
  */
  bool solution() override;
  /**
  * @brief an override that gives player
  * an item reward for solving specific 
  * puzzle.
  */
  void giveReward() override;

 private:
  NPC* GO;
};

class luggagePuzzle : public puzzleWithReward {
 public:
  /**
  * @brief Constructor
  */
  luggagePuzzle();
  /**
  * @brief virtual Deconstructor
  */
  ~luggagePuzzle();
  /**
  * @brief an override to set up a specific
  * win condition of the current puzzle.
  */
  void event() override;
  /**
  * @brief an override to set up a specific
  * win condition of the current puzzle.
  */
  bool failPuzzle() override;
  /**
  * @brief an override to set up a specific
  * win condition of the current puzzle.
  */
  bool solution() override;
  /**
  * @brief an override that gives player
  * an item reward for solving specific 
  * puzzle.
  */
  void giveReward() override;
};

class tiedUpTicketMasterPuzzle : public puzzleWithReward {
 public:
  /**
  * @brief Constructor
  */
  tiedUpTicketMasterPuzzle();
  /**
  * @brief virtual Deconstructor
  */
  ~tiedUpTicketMasterPuzzle();
  /**
  * @brief an override to set up a specific
  * win condition of the current puzzle.
  */
  void event() override;
  /**
  * @brief an override to set up a specific
  * win condition of the current puzzle.
  */
  bool failPuzzle() override;
  /**
  * @brief an override to set up a specific
  * win condition of the current puzzle.
  */
  bool solution() override;
  /**
  * @brief an override that gives player
  * an item reward for solving specific 
  * puzzle.
  */
  void giveReward() override;

 private:
    NPC* TM;
};

class searchRoomPuzzle : public Puzzle {
 public:
  /**
  * @brief Constructor
  */
  searchRoomPuzzle();
  /**
  * @brief virtual Deconstructor
  */
  ~searchRoomPuzzle();
  /**
  * @brief an override to set up a specific
  * win condition of the current puzzle.
  */
  void event() override;
  /**
  * @brief an override to set up a specific
  * win condition of the current puzzle.
  */
  bool failPuzzle() override;
  /**
  * @brief an override to set up a specific
  * win condition of the current puzzle.
  */
  bool solution() override;
};

class fakeDoorPuzzle : public Puzzle {
 public:
  /**
  * @brief Constructor
  */
    fakeDoorPuzzle();
  /**
  * @brief virtual Deconstructor
  */
    ~fakeDoorPuzzle();
  /**
  * @brief an override to set up a specific
  * win condition of the current puzzle.
  */
    void event() override;
  /**
  * @brief an override to set up a specific
  * win condition of the current puzzle.
  */
    bool failPuzzle() override;
  /**
  * @brief an override to set up a specific
  * win condition of the current puzzle.
  */
    bool solution() override;
};

class gangLeaderPuzzle : public Puzzle {
 public:
  /**
  * @brief Constructor
  */
  gangLeaderPuzzle();
  /**
  * @brief virtual Deconstructor
  */
  ~gangLeaderPuzzle();
  /**
  * @brief an override to set up a specific
  * win condition of the current puzzle.
  */
  void event() override;
  /**
  * @brief an override to set up a specific
  * win condition of the current puzzle.
  */
  bool failPuzzle() override;
  /**
  * @brief an override to set up a specific
  * win condition of the current puzzle.
  */
  bool solution() override;

 private:
  NPC* GL;
};

#endif
