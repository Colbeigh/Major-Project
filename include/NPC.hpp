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
  

  //pure virrtual functions that must be impleneted by derived classes
  virtual void displayDialogue(int index) = 0;
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
  void displayDialogue(int index) override;
   
};

#endif
