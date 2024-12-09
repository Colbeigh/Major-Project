/**
 * @author Jem Pineda <j.pineda@uleth.ca>
 * @date Fall 2024
 */

#include <iostream>
#include <string>
#include <limits>
#include <vector>
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
  * @brief Default constructor that 
  */
  Puzzle() {}
   /**
  * @brief 
  */
  virtual ~Puzzle() {}
   /**
  * @brief 
  */
  virtual void event() = 0;
   /**
  * @brief 
  */
  virtual bool failPuzzle() = 0;
   /**
  * @brief 
  */
  virtual bool solution() = 0;
   /**
  * @brief 
  */
  virtual void giveReward() = 0;
   /**
  * @brief 
  */
  void startPuzzle(Player player,
  std::vector<std::string> puzzles, bool changeenv);
   /**
  * @brief 
  */
  void addPuzzle(std::string puzzleid);
   /**
  * @brief 
  */
  void remPuzzle(std::string puzzleid);
   /**
  * @brief 
  */
  int pInput(int length);
   /**
  * @brief 
  */
  Player getPlayer() {return p;}
   /**
  * @brief 
  */
  bool getChangeEnv () {return env;}
   /**
  * @brief 
  */
  std::vector<std::string> getPuzzle() {return puzz;}
  std::string help;

  Player p;
  std::vector<std::string> puzz;
  bool env;
};

class SeatPuzzle: public Puzzle {
 public:
  SeatPuzzle();
  ~SeatPuzzle();
  void event() override;
  bool failPuzzle() override;
  bool solution() override;
  void giveReward() override;
};

class ticketPuzzle: public Puzzle {
 public:
  ticketPuzzle();
  ~ticketPuzzle();
  void event() override;
  bool failPuzzle() override;
  bool solution() override;
  void giveReward() override;
 private:
  NPC* TM;
};

class sweetTalkPuzzle: public Puzzle {
 public:
  sweetTalkPuzzle();
  ~sweetTalkPuzzle();
  void event() override;
  bool failPuzzle() override;
  bool solution() override;
  void giveReward() override;
 private:
  NPC* RL;
};

class bouncerPuzzle: public Puzzle {
 public:
  bouncerPuzzle();
  ~bouncerPuzzle();
  void event() override;
  bool failPuzzle() override;
  bool solution() override;
  void giveReward() override;
 private:
  NPC* B;
};

class doorPuzzle: public Puzzle {
 public:
  doorPuzzle();
  ~doorPuzzle();
  void event() override;
  bool failPuzzle() override;
  bool solution() override;
  void giveReward() override;
};

class helpfullPassengerPuzzle : public Puzzle {
 public:
  helpfullPassengerPuzzle();
  ~helpfullPassengerPuzzle();
  void event() override;
  bool failPuzzle() override;
  bool solution() override;
  void giveReward() override;
 private:
  NPC* HP;
};

class gambilingOutlawPuzzle : public Puzzle {
 public:
  gambilingOutlawPuzzle();
  ~gambilingOutlawPuzzle();
  void event() override;
  bool failPuzzle() override;
  bool solution() override;
  void giveReward() override;
 private:
  NPC* GO;
};

class luggagePuzzle : public Puzzle {
 public:
  luggagePuzzle();
  ~luggagePuzzle();
  void event() override;
  bool failPuzzle() override;
  bool solution() override;
  void giveReward() override;
};

class tiedUpTicketMasterPuzzle : public Puzzle {
 public:
  tiedUpTicketMasterPuzzle();
  ~tiedUpTicketMasterPuzzle();
  void event() override;
  bool failPuzzle() override;
  bool solution() override;
  void giveReward() override;
 private:
    NPC* TM;
};

class searchRoomPuzzle : public Puzzle {
 public:
  searchRoomPuzzle();
  ~searchRoomPuzzle();
  void event() override;
  bool failPuzzle() override;
  bool solution() override;
  void giveReward() override;
};

class fakeDoorPuzzle : public Puzzle {
 public:
    fakeDoorPuzzle();
    ~fakeDoorPuzzle();
    void event() override;
    bool failPuzzle() override;
    bool solution() override;
    void giveReward() override;
};

class gangLeaderPuzzle : public Puzzle {
 public:
  gangLeaderPuzzle();
  ~gangLeaderPuzzle();
  void event() override;
  bool failPuzzle() override;
  bool solution() override;
  void giveReward() override;
 private:
  NPC* GL;
};

#endif
