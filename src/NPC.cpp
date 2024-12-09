/**
 * @author Todd Across The Mountain <t.acrossthemountain@uleth.ca>
 * @author Colby Hanna <Colby.Hanna@uleth.ca>
 * @author Nikita Evtushenko <nikita.evtushenko@uleth.ca>
 * @date Fall 2024
 */
#include "NPC.hpp"
#include <iostream>
#include <string>

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
    name = "\033[95mTicket Master\033[0m";
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

richLady::richLady() {
    name = "\033[33mRich Lady\033[0m";
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

bouncer::bouncer() {
    name = "\x1B[38;5;200mBouncer\x1B[0m";
    initializeDialogueOptions();
}

bouncer::~bouncer() {}

void bouncer::initializeDialogueOptions() {
    dialogueLines.push_back(name +  ": You need a gambling ticket to "
                             "get into the casino");
    dialogueLines.push_back(name + ": Alright you're good to go, don't "
                             "go causing any trouble in there");
    dialogueLines.push_back(name + ": Ticket?");
}

helpfullPassenger::helpfullPassenger() {
    name = "\x1B[38;5;193mHelpful Passenger\x1B[0m";
    initializeDialogueOptions();
}

helpfullPassenger::~helpfullPassenger() {}

void helpfullPassenger::initializeDialogueOptions() {
    dialogueLines.push_back(name +
    ": Oh! Hey there. You need my help?\n");
    dialogueLines.push_back(name +
    ": I'll give you a hint:" "\x1B[5;38;5;193m" +
    " The game is not what you think it is.\x1B[0m\n");
}
gamblingOutlaw::gamblingOutlaw() {
    name = "\x1B[38;5;124mGambling Outlaw\x1B[0m";
    initializeDialogueOptions();
}

gamblingOutlaw::~gamblingOutlaw() {}

void gamblingOutlaw::initializeDialogueOptions() {
    dialogueLines.push_back(name +
    ": So you're that policeman that has been"
    " causing trouble for us.");
    dialogueLines.push_back(name +
    ": Okay but be ready to walk away with nothing\n");
    dialogueLines.push_back(name +
    ": wow good throw. Who tought you to throw like that?\n"
    "Your mother?\n"); // [2]
    dialogueLines.push_back(name +
    ": Awww!. What the hell. I cant see anything");
    dialogueLines.push_back(name +
    ": You throwing skills is like my driking skills.\n HORRIBLE!");
}

tiedUpTicketMaster::tiedUpTicketMaster() {
    name = "\033[95mTied Up Ticket Master\033[0m";
    initializeDialogueOptions();
}

tiedUpTicketMaster::~tiedUpTicketMaster() {}

void tiedUpTicketMaster::initializeDialogueOptions() {
    std::string name2 = "Ticket Master";
    dialogueLines.push_back(name + ": MMM! MMM! \n");
    dialogueLines.push_back(name + ": You're leaving me here?\n");
    dialogueLines.push_back(name2 +
    ": Thank you for unting me. I thought I was going to die here\n");
    dialogueLines.push_back(name2 + ": So what now?\n");
    dialogueLines.push_back(name2 +
    ": Hey!. Is this what you looking for?\n");
}

gangLeader::gangLeader() {
    name = "\x1B[38;5;130mO'Driscoll Leader\x1B[0m";
    initializeDialogueOptions();
}

gangLeader::~gangLeader() {}

void gangLeader::initializeDialogueOptions() {
    dialogueLines.push_back(name +
    ": Well, well, Sheriff, ain't this a sight? You thought\n"
    "you could lock me up, toss the key, and forget ol\n"
    "O'Driscoll, didn't ya? Thought you were the big\n"
    "man, ridin high on that shiny badge. But here I am,\n"
    "free as a bird and twice as mean. While you’re out\n"
    "there twiddlin your thumbs, I've been plannin somethin\n"
    "spectacular. This train? Oh, it's gonna be my\n"
    "masterpiece. You ever wonder what it feels like to\n"
    "watch your whole world burn?\n");

    dialogueLines.push_back(name + ": You're too late!\n"
    "I have already armed the bomb\n");
}
