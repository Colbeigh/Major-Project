/**
 * @author Todd Across The Mountain <t.acrossthemountain@uleth.ca>
 * @date Fall 2024
 */
#include <iostream>
#include <string>
#include <vector>
#ifndef NPC_HPP_INCLUDED
#define NPC_HPP_INCLUDED
class NPC {
 public:
  NPC(); //default constructor
  NPC(const std::string NPCname); //name constructor
  virtual ~NPC(); //destructor
  std::string getName();
  void displayDialogue(int index);
  //pure virtual functions that must be impleneted by derived classes
  virtual void initializeDialogueOptions() = 0;
 protected:
  std::string name;
  //vector of dialogue options
  std::vector<std::string> dialogueLines;
};

class ticketMaster : public NPC {
 public:
  ticketMaster(); //constructor
  ~ticketMaster(); //destructor
  void initializeDialogueOptions() override;
};

class richLady : public NPC {
 public:
  richLady();
  ~richLady();
  void initializeDialogueOptions() override;
};

class bouncer : public NPC {
 public:
  bouncer();
  ~bouncer();
  void initializeDialogueOptions() override;
};

class helpfullPassenger : public NPC {
 public:
  helpfullPassenger();
  ~helpfullPassenger();
  void initializeDialogueOptions() override;
};

class gamblingOutlaw : public NPC {
 public:
  gamblingOutlaw();
  ~gamblingOutlaw();
  void initializeDialogueOptions() override;
};

class tiedUpTicketMaster : public NPC {
 public:
  tiedUpTicketMaster();
  ~tiedUpTicketMaster();
  void initializeDialogueOptions() override;
};

class gangLeader : public NPC {
 public:
  gangLeader();
  ~gangLeader();
  void initializeDialogueOptions() override;
};
#endif
