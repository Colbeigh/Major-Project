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

class Puzzle {
 public:
  Puzzle() {}
  virtual ~Puzzle() {}
  virtual void startPuzzle(Player player, 
  std::vector<std::string> puzzles, bool changeenv) = 0;
  virtual void event() = 0;
  virtual bool failPuzzle() = 0;
  virtual bool solution() = 0;
  virtual void giveReward() = 0;
  virtual void playerCondition() = 0;
  void addPuzzle(std::string puzzleid);
  void remPuzzle(std::string puzzleid);
  Player getPlayer() {return p;}
  bool getChangeEnv () {return env;}
  std::vector<std::string> getPuzzle() {return puzz;}

  Player p;
  std::vector<std::string> puzz;
  bool env;
//
};

class ticketPuzzle: public Puzzle {
 public:
  ticketPuzzle();
  ~ticketPuzzle();
  void startPuzzle(Player player, 
  std::vector<std::string> puzzles, bool changeenv) override;
  void event() override;
  bool failPuzzle() override;
  bool solution() override;
  void giveReward() override;
  virtual void playerCondition() override;
  int pInput();

 private:
  NPC* TM;
};

class sweetTalkPuzzle: public Puzzle {
 public:
  sweetTalkPuzzle();
  ~sweetTalkPuzzle();
  void startPuzzle(Player player, 
  std::vector<std::string> puzzles, bool changeenv) override;
  void event() override;
  bool failPuzzle() override;
  bool solution() override;
  void giveReward() override;
  virtual void playerCondition() override;
  int pInput();

 private:
  NPC* RL;
};

class bouncerPuzzle: public Puzzle {
 public:
  bouncerPuzzle();
  ~bouncerPuzzle();
  void startPuzzle(Player player, 
  std::vector<std::string> puzzles, bool changeenv) override;
  void event() override;
  bool failPuzzle() override;
  bool solution() override;
  void giveReward() override;
  virtual void playerCondition() override;
  int pInput();

 private:
  NPC* B;
};

class doorPuzzle: public Puzzle {
 public:
  doorPuzzle();
  ~doorPuzzle();
  void startPuzzle(Player player, 
  std::vector<std::string> puzzles, bool changeenv) override;
  void event() override;
  bool failPuzzle() override;
  bool solution() override;
  void giveReward() override;
  virtual void playerCondition() override;
  int pInput();
  // void startPuzzle(Player player, 
  // std::vector<std::string> puzzles, bool changeenv) override;
  // void event(Player player) override;
  // void failPuzzle(Player player) override;
  // void solution(Player player) override;
  // void giveReward(Player player) override;
  // void addPuzzle(const std::string& puzzleId) override;
  // bool solved(const std::string& puzzleId);

};

#endif//Puzzle_hpp_included
