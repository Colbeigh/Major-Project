/**
 * @author Jem Pineda <j.pineda@uleth.ca>
 * @date Fall 2024
 */

#include <iostream>
#include "Puzzle.hpp"
#include <string>

void ticketPuzzle::startPuzzle() {
NPC* TM = new ticketMaster;
Invetory* chest = 

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
        } else {

                }
        }
}
void ticketPuzzle::failPuzzle() {


}

void ticketPuzzle::solution() {
std::cout << "You give him the ticket\n";


}

int ticketPuzzle::giveReward() {

}

bool ticketPuzzle::solved() {

}
