/**
 * @author Jem Pineda <j.pineda@uleth.ca>
 * @date Fall 2024
 */

#include "Puzzle.hpp"

ticketPuzzle::ticketPuzzle() : TM(nullptr) {
}

ticketPuzzle::~ticketPuzzle() {
    delete TM;
}

void ticketPuzzle::startPuzzle(Player player, 
  std::vector<std::string> puzzles, bool changeenv) {
p = player;
puzz = puzzles;
env = changeenv;
event();
}

bool ticketPuzzle::failPuzzle() {
    std::cout << "You refuse to give him the ticket and\n" <<
    " Ticket Master leaves you alone." <<
    " A few minutes later the train explodes.\n";
    return true;
}

bool ticketPuzzle::solution(Player player) {
    if(player.hasItem("Train Ticket") == true ) {
    std::cout << "You give him the ticket\n";
    player.remItem("Train Ticket");
    std::cout <<"You watch him punch the ticket and hands back it to you\n";
    giveReward(player);
    TM->displayDialogue(1);
    std::cout << "You notice something strange about the ticket.\n" <<
    "On the back of the ticket, 'HELP' is written.\n" <<
    "You look up and Ticket Master has already left\n";
    } else {
        std::cout << "Player does not have the item.\n";
    return false;
        }
}

void ticketPuzzle::event() {
    std::cout << "The Ticket Master approaches you\n";
    TM->displayDialogue(0);
    std::cout <<"What would you like to do?\n"<<
    "1. Give him the ticket.\n 2. Do not give him the ticket.\n";
    while (true) {
    pInput();
        if (pInput() < 1 || pInput() > 2 ) {
            std::cout << "Please pick between 1 or 2\n";
        } else if (pInput() == 2) {
            failPuzzle();
            break;
        } else {
            solution();
            break;
        }
    }
}


void ticketPuzzle::giveReward(Player player) {
player.addItem("Punched Train Ticket");
}

void ticketPuzzle::playerCondition(Player player) {
    if (failPuzzle() == true){

        } else {
            player.setAlive();
    }
}

int ticketPuzzle::pInput() {
int playerchoice;
std::cin >> playerchoice;
    if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<
            std::streamsize>::max(), '\n');
    } else return playerchoice;
}

std::vector<std::string>Puzzle::getPuzzle() {

    return puzz; 
}
Player Puzzle::getPlayer() {
    return p;
}

bool Puzzle::getChangeEnv() {
    return env;
}

// ticketPuzzle::ticketPuzzle() : p(nullptr) {
// TM = new ticketMaster;
// chest = new Inventory;
// }

// ticketPuzzle::~ticketPuzzle() {
//     delete TM;
//     delete chest;
// }

// void ticketPuzzle::startPuzzle(Player* player, std::vector<std::string>* puzzles
// , bool* changeenv) {
// p = puzzles;
// event(player);
// }

// void ticketPuzzle::event(Player* player) {
// int playerchoice;
// std::cout << "The TicketMaster Approaches you\n";
// TM->displayDialogue(0);
// std::cout <<"What would you like to do?\n"<<
// "1. Give him the ticket.\n 2. Do not give him the ticket.\n";
//     while (true) {
//         std::cin >> playerchoice;
//         if (std::cin.fail()) {
//             std::cin.clear();
//             std::cin.ignore(std::numeric_limits<
//             std::streamsize>::max(), '\n');
//             std::cout <<"Please pick between 1 or 2 \n";
//         } else if (playerchoice < 1 || playerchoice > 2) {
//                 std::cout << "Pick between 1 or 2 " << std::endl;
//         } else if (playerchoice == 1) {
//             solution(player);
//             break;
//             } else {
//             failPuzzle(player);
//             break;
//             }
//     }
// }

// void ticketPuzzle::failPuzzle(Player* player) {
// std::cout << "You refuse to give him the ticket and\n" <<
//  " Ticket Master leaves you alone." <<
//  " A few minutes later the train explodes.\n";
// player->setKill();
// }

// void ticketPuzzle::solution(Player* player) {
// std::cout << "You give him the ticket\n";
//     if (player->hasItem("Ticket") == false) {
//         std::cout << "No item is found!\n";
//     } else {
//         player->remItem("Ticket");
//         std::cout <<"You watch him punch the ticket and hands back it to you\n";
//         TM->displayDialogue(1);
//         giveReward(player);
//         std::cout << "You notice something strange about the ticket.\n" <<
//         "On the back of the ticket, 'HELP' is written.\n" <<
//         "You look up and Ticket Master has already left\n";
//         solved("Talk to Ticket Master");
//         addPuzzle("Move to new cart");
//     }
// }

// void ticketPuzzle::giveReward(Player* player) {
// player->addItem("PunchedTicket");
// }

// bool ticketPuzzle::solved(const std::string& puzzleId) {
//      if (!p) {
//     std::cout << "Puzzle is not initialized";
//     }
//     for (int i = 0; i < p->size(); ++i) {
//        if (puzzleId == (*p)[i]) {
//            p->erase(p->begin() + i);
//       }
//     }
// return true;
// }

// void ticketPuzzle::addPuzzle(const std::string& puzzleId) {
// p->push_back(puzzleId);
// }
