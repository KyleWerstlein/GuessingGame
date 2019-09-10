#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  srand(time(NULL));
  int randomNum = rand() % 101; // Help from Cal limiting random number range. 
  cout << "Random number" << randomNum << endl;
  int playerNum = 0;
  cout << "Guess a number!" << endl;
  cin >> playerNum;
  int guessCount = 1;
  while((playerNum != randomNum) && (guessCount != 100)) {
    int var2;
    if(playerNum > randomNum) {
      cout << "Too High! " << endl;
      cout << "Guess a number! " << endl;
      cin >> var2;
      playerNum = var2;
      guessCount++;
    }
    else if(playerNum < randomNum) {
      cout << "Too Low! " << endl;
      cout << "Guess a number!" << endl;
      cin >> var2;
      playerNum = var2;
      guessCount++;
    }
  }
  return 0;
}
