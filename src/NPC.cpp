/**
 * @author Todd Across The Mountain <t.acrossthemountain@uleth.ca>
 * @date Fall 2024
 */
#include "NPC.hpp"
#include <iostream>
#include <string>

//NPC base class implementation
NPC::NPC() : name("Default NPC") {}


NPC::NPC(const std::string NPCname) : name(NPCname) {}

NPC::~NPC() {}

std::string NPC::getName() {
    return name;
}

void NPC::displayDialogue(int index) {
     if (index >= 0 && index < dialogueLines.size()) {
        std::cout << dialogueLines[index];
    } else {
        std::cout << "That dialogue line doesn't exist" << std::endl;
    }
}

//ticketMaster implementations
ticketMaster::ticketMaster() {
    name = "Ticket Master";
    initializeDialogueOptions();
}

ticketMaster::~ticketMaster() {}

void ticketMaster::initializeDialogueOptions() {
    dialogueLines.push_back(name + 
    ": Welcome aboard, may I see your ticket?");
    dialogueLines.push_back(name + 
    "Thank you for travelling with us. "
                             "Enjoy the ride!");
}
//richlady Implementations
richLady::richLady() {
    name = "Rich Lady";
    initializeDialogueOptions();
}

richLady::~richLady() {}

void richLady::initializeDialogueOptions() {
    dialogueLines.push_back(name + ": Oh you're so sweet, you do know "
                             "how to make a lady blush");
    dialogueLines.push_back(name + 
    ": Here take this ticket to the gambling car, and "
                            "my lucky quarter. It's brought me much "
                            "luck I hope it does the same for you");
    dialogueLines.push_back(name + 
    ": Were you just trying to steal my lucky "
                             "quarter? How dare you!");
}

//Bouncher implementations
bouncer::bouncer() {
    name = "Bouncer";
    initializeDialogueOptions();
}

bouncer::~bouncer() {}

void bouncer::initializeDialogueOptions() {
    dialogueLines.push_back(name + ": You need a gambling ticket to "
                             "get into the casino");
    dialogueLines.push_back(name + ": Alright you're good to go, don't "
                             "go causing any trouble in there");
    dialogueLines.push_back(name + ": Ticket?");
}

helpfullPassenger::helpfullPassenger() {
    name = "Helpful Passenger";
    initializeDialogueOptions();
}

helpfullPassenger::~helpfullPassenger() {}

void helpfullPassenger::initializeDialogueOptions() {
   dialogueLines.push_back(name + 
   ": Helpfull Passenger: Oh! Hey there. You need my help?\n"); // [0]
    dialogueLines.push_back(name + 
    ": Helpfull Passenger: I'll give you a hint: The game is not what you think it is. \n"); // [1]
}
gambilingOutlaw::gambilingOutlaw() {
    name = "Gambling Outlaw";
    initializeDialogueOptions();
}

gambilingOutlaw::~gambilingOutlaw() {}

void gambilingOutlaw::initializeDialogueOptions() {
    dialogueLines.push_back(name + ": So you're that policeman that has been" 
                            "causing trouble for us."); //[0]
    dialogueLines.push_back(name + ": Okay but be ready to walk away with nothing\n"); //[1]
    dialogueLines.push_back(name + ": wow good thorw. Who tought you to throw like that?"
    "Your mother?"); // [2]
    dialogueLines.push_back(name + ": Awww!. What the hell. I cant see anything"); // [3]
    dialogueLines.push_back(name + ": You throwing skills is like my driking skills.\n HORRIBLE!"); // [4]

}
