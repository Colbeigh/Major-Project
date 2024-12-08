/**
 * @author Colby Hanna <Colby.Hanna@uleth.ca>
 * @date Fall 2024
 */

#include "FactoryPuzzle.hpp"

FactoryPuzzle::FactoryPuzzle() {
     puzzlemap = {
        {"Talk to Ticket Master", new ticketPuzzle()},
        {"Pick a seat", new doorPuzzle()},
        {"Talk to Rich Lady", new sweetTalkPuzzle()},
        {"Talk to bouncer", new bouncerPuzzle()}
     };
}

Puzzle* FactoryPuzzle::createPuzzle(const std::string& type) {
    auto it = puzzlemap.find(type);

    if (it != puzzlemap.end()) {
        return it->second;
    } else {
        return new ticketPuzzle();
    }
}
