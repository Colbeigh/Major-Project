#include <iostream>

class Environment {
public:
    virtual void show() {
        std::cout << "This is a dessert" << std::endl;
    }
};

class Train : public Environment {
public:
    void show() override {
        std::cout << "This is a train" << std::endl;
    }
};

int main() {
    Environment* newEnvironment = new Train(); // Base class pointer pointing to a Derived object
    newEnvironment->show(); // Calls Derived's show function due to polymorphism
    delete newEnvironment;
    return 0;
}
