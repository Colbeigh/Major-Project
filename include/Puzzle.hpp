/**
 * @author Jem Pineda <j.pineda@uleth.ca>
 * @date Fall 2024
 */

#include <iostream> 
#include <fstream>
#include <string>

#ifndef PUZZLE_HPP_INCLUDED
#define PUZZLE_HPP_INCLUDED

class Puzzle {
 public:
  Puzzle() {
    std::cout << "hi\n";
  }
  virtual ~Puzzle() {
    std::cout <<"bye\n";
  }
  virtual void startPuzzle() =0;
  virtual void failPuzzle() = 0;
  virtual void solution() = 0;
  virtual int giveReward() = 0;
  
};

#endif //Puzzle_hpp_included


class ticketPuzzle: public Puzzle {
public:

void startPuzzle() override {
  //open file
  std::ifstream file ("beginPuz.txt");
  if(file.fail()) {
    std::cout <<"file did not open\n";

  } else {
      std::string paragraph;
      while (std::getline(file, paragraph, '$')) {
        if (paragraph.find ("II.") == 0){
        std::cout << paragraph << '\n';
        }  
        else { break; }
      }

    }
  file.close();

}

void failPuzzle() {

}
void solution() {

}
int giveReward() {

}
bool solved() {

}

};

int main() {

ticketPuzzle first; 
first.startPuzzle();
  return 0;
}