/**
 * @author Todd Across The Mountain <t.acrossthemountain@uleth.ca>
 * @date Fall 2024
 */
#include "NPC.hpp"
#include <iostream>
#include <string>

NPC::NPC() {
    name = "Default NPC";
    initializeDialogueOptions();
}

NPC::NPC(const std::string NPCname) {
    name = NPCname;
    initializeDialogueOptions();
}

NPC::~NPC() {}

std::string NPC::getName() {
    return name;
}

void NPC::initializeDialogueOptions() {
    dialogue[HAPPY] = "This dialogue is happy";
    dialogue[SAD] = "This dialogue is sad";
    dialogue[ANGRY] = "This dialogue is angry";
}

void NPC::displayDialogue(dialogueOptions option) {
    std::cout << dialogue[option] << std::endl;
}
