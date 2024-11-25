#include <iostream>
#include <string>
#include <vector>

class Environment {
public:
    Environment(){
        name = "Basic";
        description = "Default Desc";
        help = "Default Help";
    }
    void getName() {
        std::cout << name << std::endl;
    }
    void Description() {
        std::cout << description << std::endl;
    }
    void getHelp(){
        std::cout << help << std::endl;
    }

    std::string name;
    std::string description;
    std::string help;
    std::vector<std::string> puzzles;

};

class Train : public Environment {
public:
Train();
};

     Train::Train(){
    name = "Train";
    description = "It is ominous";
    help = "this is help";

     }
     

int main() {
    std::string env = "Train";
    Environment* newEnvironment = new Train(); // Base class pointer pointing to a Derived object
    newEnvironment->getName(); // Calls Derived's show function due to polymorphism
    newEnvironment->Description();
    newEnvironment->getHelp();
    delete newEnvironment;
    return 0;
}
