#include <Game.hpp>


class Game{
 public:
  Game() {
    currentenvironment = new Environment(environments.front()) 
  }

  virtual ~Game() {
    delete currentenvironment;
    delete currentpuzzle;
  }

  void Start{
    cout << prologue << "\n"
    gameLoop();
  }

  void gameLoop{  
    cout << "You have entered into a new cart " << interact.getname()\n;
    cout << interact.getDesc() << "\n";
    puzzles = interact.getPuzzles;
    promptuser(puzzles);
    userinput = userInput(puzzles.size() + 2);
    createPuzzle(userinput);
    intpuz.startPuzzle(&player, &puzzles, &changeenv);
    checkchangeEnvironment
  }

  void promptPuzzles(vector<int> puzzles){
    for(int i = 0; i < puzzles.size(); ++i){
        cout << i + 1 << ") " << puzzles[i] <<"\n";
      }
      cout << puzzles.size() + 2 << ") Help\n";
  }

  int userInput(int length){
    while(true){
      std::cin >> userinput;
      if (std::cin.fail()) {
            std::cin.clear(); // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter an integer between 1 " <<
            "and " << length << ".\n";
        }
      else if (userinput < 1 || userinput > length) {
        std::cout << "Invalid input. Please enter an integer between 1 and " <<
       length << ".\n";
      }
      else if (userinput == length){
      std::cout << intenv.help() << "\n";
      }
      else{
        return userinput;
      }
    }
  }

  bool isrunning() {
  }
  void createPuzzle(int userinput){
    if (currentpuzzle != nullptr) {
      delete currentpuzzle;
      currentpuzzle = nullptr;
    }
    currentpuzzle = new Puzzle(puzzles[userinput]);
    intpuz.setPuzzle(currentpuzzle);
  }

  void changeEnvironment() {
    if (currentenvironment != nullptr) {
      delete currentenvironment;
      currentenvironment = nullptr;
    }
    if (!environments.empty()) {
        currentEnvironment = new Environment(environments.front());
        intenv.setEnvironment(currentenvironment);
        environments.erase(environments.begin());
  }

  void ischangeEnv(){
    if(changeenv == true){
      changeEnvironment();
      changeenv = false;
    }
  }

  Player player;
  currentenvironment* = nullptr;
  std::vector<std::string> environments{"Passenger", "Dining", "Gambling",
  "Luggage", "Baggage", "Between", "Prison", "Medical", "Armory", "Engine"}
  
  Puzzle* currentpuzzle = nullptr;
  interactEnvironment intenv;
  interactPuzzle intpuz;
  std::Vector<int> puzzles;
  bool changeenv = false;
};
