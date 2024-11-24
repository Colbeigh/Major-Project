#include <InteractEnvironment>

class InteractEnvironment {
 public:
  InteractEnvironment(){
    Environment* environment = nullptr;
  }
  
  virtual ~InteractEnvironment(){
    delete environment;
  }

  void setEnvironment(Environment env){
    environment = env;
  }

  string getName(){
    return environment ->getName();
  }

  void getDesc(){
    return environment ->getDesc();
  }

  vector<int> getPuzzles(Environment env){
    return environment -> getPuzzles;
  }

  void remPuzzle(Environment env, int puzzleid);

};

#endif
