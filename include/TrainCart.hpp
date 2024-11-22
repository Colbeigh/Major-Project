#ifndef TRAINCART_HPP
#define TRAINCART_HPP
#include <memory>
#include <string>
#include "Environment.hpp"
class TrainCart : public Environment {
 public:
    TrainCart();
    virtual ~TrainCart();
    void Description() override;
    void addEnemyNPC(std::shared_ptr<NPC> npc);
    void listEnemies();
    std::string trainName;
};

#endif //TRAINCART_HPP
