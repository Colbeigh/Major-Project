/**
 * @author Todd Across The Mountain <t.acrossthemountain@uleth.ca>
 * @date Fall 2024
 */
#include <iostream>
#include <string>
#include <map>
#ifndef NPC_HPP_INCLUDED
#define NPC_HPP_INCLUDED
class NPC {
 public:
  enum dialogueOptions {HAPPY, SAD, ANGRY}; //enum for our default dialogue
  NPC(); //default constructor
  NPC(const std::string NPCname); //name constructor
  virtual ~NPC(); //destructor
  std::string getName();
  void initializeDialogueOptions();
  void displayDialogue(dialogueOptions option);

 private:
  std::string name;
  //map with dialogueOptions key and string value
  std::map<dialogueOptions, std::string> dialogue;
};

#endif
