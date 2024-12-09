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
  /**
  * @class NPC NPC.hpp "NPC.hpp"
  * @brief Holds Dialogue & names for npcs
  */
 public:
  /**
  * @brief Default Constructor
  */
  NPC();

  /**
  * @brief Constructor with name
  * @param name
  */
  NPC(const std::string NPCname);

  /**
  * @brief Default Destructor
  */
  virtual ~NPC();

  /**
  * @brief Function to get npcs name
  */
  std::string getName();

  /**
  * @brief Default Constructor
  * @param Location in vector to call
  */
  void displayDialogue(int index);

  /**
  * @brief Abstract function to fill vector with dialogue
  */
  virtual void initializeDialogueOptions() = 0;

 protected:
  /**
  * @brief NPC's Name
  */
  std::string name;

  /**
  * @brief Vector of strings of dialogue
  */
  std::vector<std::string> dialogueLines;
};

class ticketMaster : public NPC {
 public:
  /**
  * @brief Constructor, sets name and call 
  * InitializeDialogue Options
  */
  ticketMaster();

  /**
  * @brief Default destructor
  */
  ~ticketMaster();

  /**
  * @brief Adds all dialogues strings into vector
  */
  void initializeDialogueOptions() override;
};

class richLady : public NPC {
 public:
  /**
  * @brief Constructor, sets name and call 
  * InitializeDialogue Options
  */
  richLady();

  /**
  * @brief Default destructor
  */
  ~richLady();

  /**
  * @brief Adds all dialogues strings into vector
  */
  void initializeDialogueOptions() override;
};

class bouncer : public NPC {
 public:
  /**
  * @brief Constructor, sets name and call 
  * InitializeDialogue Options
  */
  bouncer();

  /**
  * @brief Default destructor
  */
  ~bouncer();

  /**
  * @brief Adds all dialogues strings into vector
  */
  void initializeDialogueOptions() override;
};

class helpfullPassenger : public NPC {
 public:
  /**
  * @brief Constructor, sets name and call 
  * InitializeDialogue Options
  */
  helpfullPassenger();

  /**
  * @brief Default destructor
  */
  ~helpfullPassenger();

  /**
  * @brief Adds all dialogues strings into vector
  */
  void initializeDialogueOptions() override;
};

class gamblingOutlaw : public NPC {
 public:
  /**
  * @brief Constructor, sets name and call 
  * InitializeDialogue Options
  */
  gamblingOutlaw();

  /**
  * @brief Default destructor
  */
  ~gamblingOutlaw();

  /**
  * @brief Adds all dialogues strings into vector
  */
  void initializeDialogueOptions() override;
};

class tiedUpTicketMaster : public NPC {
 public:
  /**
  * @brief Constructor, sets name and call 
  * InitializeDialogue Options
  */
  tiedUpTicketMaster();

  /**
  * @brief Default destructor
  */
  ~tiedUpTicketMaster();

  /**
  * @brief Adds all dialogues strings into vector
  */
  void initializeDialogueOptions() override;
};

class gangLeader : public NPC {
 public:
  /**
  * @brief Constructor, sets name and call 
  * InitializeDialogue Options
  */
  gangLeader();

  /**
  * @brief Default destructor
  */
  ~gangLeader();

  /**
  * @brief Adds all dialogues strings into vector
  */
  void initializeDialogueOptions() override;
};
#endif
