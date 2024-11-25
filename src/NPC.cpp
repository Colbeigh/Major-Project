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

//ticketMaster implementations
ticketMaster::ticketMaster() {
    initializeDialogueOptions();
}

ticketMaster::~ticketMaster() {}\

void ticketMaster::initializeDialogueOptions() {
    dialogueLines.push_back("Welcome abord, may I see your ticket?");
    dialogueLines.push_back("Thank you for travelling with us. "
                             "Enjoy the ride!");
}

void ticketMaster::displayDialogue(int index) {
    if (index >= 0 && index < dialogueLines.size()) {
        std::cout << dialogueLines[index];
    } else {
        std::cout << "That dialogue line doesn't exist" << std::endl;
    }    
}
