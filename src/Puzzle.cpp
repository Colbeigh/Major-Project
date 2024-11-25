/**
 * @author Jem Pineda <j.pineda@uleth.ca>
 * @date Fall 2024
 */

#include "Puzzle.hpp"

void ticketPuzzle::startPuzzle(Player &player, std::vector<std::string>&puzzles
, bool &changeenv) {
NPC* TM = new ticketMaster;
Inventory* chest = new Inventory;

}

void ticketPuzzle::event(){
int playerchoice;
std::cout << "The TicketMaster Approaches you\n";
//dialogue
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
            solution();
            break;
        }
          else if (playerchoice == 2) { }

    }
}

void ticketPuzzle::failPuzzle() {

}

void ticketPuzzle::solution() {
std::cout << "You give him the ticket\n" << 
//use remove item for player
"You watch him punch the ticket and hands back it to you\n";
//dialogue
giveReward();
std::cout << "You notice something strange about the ticket\n" << 
"Enter 4, to check Inventory\n";
solved();
}

int ticketPuzzle::giveReward() {
//use give to player

}

bool ticketPuzzle::solved() {
return true;
}
