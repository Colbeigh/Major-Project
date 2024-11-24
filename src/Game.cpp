#include <Game.hpp>


class Game{
 public:
  Game() {
    currentenvironment = Environment(environments.front()) 
  }

  virtual ~Game() {
    delete currentenvironment;
    delete currentpuzzle;
  }

  void GameLoop{  
    changeEnvironment();
    cout << "You have entered into a new cart " << interact.getname()\n;
    cout << interact.getDesc()\n;
    puzzles = interact.getPuzzles;
    promptuser(puzzles);
    userinput = userInput(puzzles.size() + 2);
    userinput = userinput();
    currentpuzzle = new Puzzle(puzzles[userinput - 1]);
    intpuz.startPuzzle(puzzles[i-1], &player, &puzzles);
  }

  void promptPuzzles(vector<int> puzzles){
    for(int i = 0; i < puzzles.size(); ++i){
        cout << i + 1 << ") " << puzzles[i] <<"\n";
      }
      cout << puzzles.size() + 2 << ") Help\n";
  }

  void userInput(int length){
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

  void changeEnvironment() {
    if (currentenvironment != nullptr) {
      delete currentenvironment;
      currentenvironment = nullptr;
    }
    if (!environments.empty()) {
        currentEenvironment = new Environment(environments.front());
        intenv.setEnvironment(currentenvironment);
        environments.pop_front();
  }


  Player player;
  currentenvironment* = nullptr;
  std::list<std::string> environments{"Passenger", "Dining", "Gambling",
  "Luggage", "Baggage", "Between", "Prison", "Medical", "Armory", "Engine"}
  
  Puzzle* currentpuzzle = nullptr;
  interactEnvironment intenv;
  interactPuzzle intpuz;
  Vector<int> puzzles;
};
