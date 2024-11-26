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
  virtual void startPuzzle(Player* player, std::vector<std::string >* puzzles
  , bool* changeenv) = 0;
  virtual void event(Player *player) = 0;
  virtual void failPuzzle(Player *player) = 0;
  virtual void solution(Player *player) = 0;
  virtual void giveReward(Player *player) = 0;
  virtual void addPuzzle(const std::string& puzzleId) = 0;
//
};

class ticketPuzzle: public Puzzle {
 public:
  ticketPuzzle();
  ~ticketPuzzle();
  void startPuzzle(Player *player, std::vector<std::string >* puzzles,
  bool* changeenv) override;
  void event(Player* player) override;
  void failPuzzle(Player* player) override;
  void solution(Player* player) override;
  void giveReward(Player* player) override;
  void addPuzzle(const std::string& puzzleId) override;
  bool solved(const std::string& puzzleId);

 private:
  NPC* TM;
  Inventory* chest;
  std::vector<std::string>* p;
};

class sweetTalkPuzzle: public Puzzle {
 public:
  sweetTalkPuzzle();
  ~sweetTalkPuzzle();
  void startPuzzle(Player *player, std::vector<std::string >* puzzles,
  bool* changeenv) override;
  void event(Player* player) override;
  void failPuzzle(Player* player) override;
  void solution(Player* player) override;
  void giveReward(Player* player) override;
  void addPuzzle(const std::string& puzzleId) override;
  bool solved(const std::string& puzzleId);

 private:
  NPC* RL;
  Inventory* chest;
  std::vector<std::string>* p;
};

class bouncerPuzzle: public Puzzle {
 public:
  bouncerPuzzle();
  ~bouncerPuzzle();
  void startPuzzle(Player *player, std::vector<std::string >* puzzles,
  bool* changeenv) override;
  void event(Player* player) override;
  void failPuzzle(Player* player) override;
  void solution(Player* player) override;
  void giveReward(Player* player) override;
  void addPuzzle(const std::string& puzzleId) override;
  bool solved(const std::string& puzzleId);

 private:
  NPC* B;
  Inventory* chest;
  std::vector<std::string>* p;
  bool** change;
};

class doorPuzzle: public Puzzle {
 public:
  doorPuzzle();
  ~doorPuzzle();
  void startPuzzle(Player *player, std::vector<std::string >* puzzles,
  bool* changeenv) override;
  void event(Player* player) override;
  void failPuzzle(Player* player) override;
  void solution(Player* player) override;
  void giveReward(Player* player) override;
  void addPuzzle(const std::string& puzzleId) override;
  bool solved(const std::string& puzzleId);

 private:
  std::vector<std::string>* p;
};

#endif//Puzzle_hpp_included
