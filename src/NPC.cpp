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
    initializeDialogueOptions();
}

ticketMaster::~ticketMaster() {}

void ticketMaster::initializeDialogueOptions() {
    dialogueLines.push_back("Welcome aboard, may I see your ticket?");
    dialogueLines.push_back("Thank you for travelling with us. "
                             "Enjoy the ride!");
}
//richlady Implementations
richLady::richLady() {
    initializeDialogueOptions();
}

richLady::~richLady() {}

void richLady::initializeDialogueOptions() {
    dialogueLines.push_back("Oh you're so sweet, you do know "
                             "how to make a lady blush");
    dialogueLines.push_back("Here take this ticket to the gambling car, and "
                            "my lucky quarter. It's brought me much "
                            "luck I hope it does the same for you");
    dialogueLines.push_back("Were you just trying to steal my lucky "
                             "quarter? How dare you!");
}

//Bouncher implementations
bouncer::bouncer() {
    initializeDialogueOptions();
}

bouncer::~bouncer() {}

void bouncer::initializeDialogueOptions() {
    dialogueLines.push_back("You need a gambling ticket to "
                             "get into the casino");
    dialogueLines.push_back("Alright you're good to go, don't "
                             "go causing any trouble in there");
}
