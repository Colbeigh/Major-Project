/**
 * @author Colby Hanna <Colby.Hanna@uleth.ca>
 * @date Fall 2024
 */

#include "FactoryPuzzle.hpp"

FactoryPuzzle::FactoryPuzzle() {
    puzzlemap = {
        {"Talk to Ticket Master", []() { return new ticketPuzzle(); }},
        {"Pick a seat", []() { return new SeatPuzzle(); }},
        {"Go to next cart", []() { return new doorPuzzle(); }},
        {"Talk to Rich Lady", []() { return new sweetTalkPuzzle(); }},
        {"Talk to bouncer", []() { return new bouncerPuzzle(); }}
    };
}

FactoryPuzzle::~FactoryPuzzle() {
    puzzlemap.clear();
}

Puzzle* FactoryPuzzle::createPuzzle(const std::string& type) {
    auto it = puzzlemap.find(type);

    if (it != puzzlemap.end()) {
        return it->second();
    } else {
        return new ticketPuzzle();
    }
}
