/**
 * @author Jem Pineda <j.pineda@uleth.ca>
 * @date Fall 2024
 */

#include "Puzzle.hpp"

ticketPuzzle::ticketPuzzle() {
TM = new ticketMaster;
chest = new Inventory;
}

ticketPuzzle::~ticketPuzzle() {
    delete TM;
    delete chest;
}
void ticketPuzzle::startPuzzle(Player* player, std::vector<std::string>* puzzles
, bool* changeenv) {
event(player);
}

void ticketPuzzle::event(Player* player) {
int playerchoice;
std::cout << "The TicketMaster Approaches you\n";
TM->displayDialogue(0);
std::cout <<"What would you like to do?\n"<<
"1. Give him the ticket.\n 2. Do not give him the ticket.\n";
    while (true) {
        std::cin >> playerchoice;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<
            std::streamsize>::max(), '\n');
            std::cout <<"Invalid choice \n";
        } else if (playerchoice < 1 || playerchoice > 2) {
                std::cout << "Pick between 1 or 2 " << std::endl;
        } else if (playerchoice == 1) {
            solution(player);
            break;
            } else {
            failPuzzle(player);
            }
    }
}

void ticketPuzzle::failPuzzle(Player* player) {
std::cout << "You refuse to give him the ticket and\n" <<
 " Ticket Master leaves you alone." <<
 " A few minutes later the train explodes.\n";
player->setKill();
}

void ticketPuzzle::solution(Player* player) {
std::cout << "You give him the ticket\n";
player->remItem("Ticket");
std::cout <<"You watch him punch the ticket and hands back it to you\n";
TM->displayDialogue(1);
giveReward(player);
std::cout << "You notice something strange about the ticket\n" <<
"Enter 4, to check Inventory\n";
player->setAlive();
solved();
}

void ticketPuzzle::giveReward(Player* player) {
player->addItem("PunchedTicket");
}

bool ticketPuzzle::solved() {
return true;
}
