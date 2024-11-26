#include "FactoryPuzzle.hpp"

Puzzle* FactoryPuzzle::createPuzzle(const std::string& type) {
    if (type == "Talk to Ticket Master") {
        return new ticketPuzzle();
    } else if (type == "Move to new cart") {
        return new doorPuzzle();
    } else if (type == "Talk to Rich Lady") {
        return new sweetTalkPuzzle();
    }  else if (type == "Talk to bouncer") {
        return new bouncerPuzzle();
    } else {
        return nullptr;
    }
}
