#ifndef ENVIRONMENT_H_INCLUDED
#define ENVIRONMENT_H_INCLUDED
#include <string>
#include <list>
#include <memory>

class Puzzle;
class Item;
class NPC;

class Environment {
 public:
    Environment();
    virtual ~Environment();
    virtual void Description();
    void addNPC(std::string npc);
    void getNPC();
    void addLootableItem(std::string item);
    void addPuzzle();
    virtual void help();
    std::string environmentName;
    std::string environmentDescription;
    std::string helpInfo;
    std::list<std::shared_ptr<NPC>> npcs;
    std::list<std::shared_ptr<Item>> lootableItems;
    std::list<std::shared_ptr<Puzzle>> puzzles;
};

#endif //ENVIRONMENT_H_INCLUDED
