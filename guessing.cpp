#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  srand(time(NULL)); // seed random number generation
  int randomNum = rand() % 101; // Help from Cal limiting random number range. 
  // cout << "Random number " << randomNum << endl;
  int playerNum = 0; // player's guess
  cout << "Guess a number!" << endl;
  cin >> playerNum; // take user input
  int guessCount = 1; // track number of guesses
  bool isPlaying = true;
  while(isPlaying) { // loops until player does not want to play anymore
    while(playerNum != randomNum) { // loops until player guesses correct number
      if(playerNum > randomNum) {
        cout << "Too High! " << endl;
        cout << "Guess a number! " << endl;
        cin >> playerNum;
        guessCount++;
      }
      else if(playerNum < randomNum) {
        cout << "Too Low! " << endl;
        cout << "Guess a number!" << endl;
        cin >> playerNum;
        guessCount++;
      }
    }
    bool PlayAgain = true;
    while(PlayAgain) { // loop until users says yes or no
      cout << "You guessed in " << guessCount << " guesses!" << endl;
      cout << "Would you like to play again? (y/n)" << endl;
      char toPlay;
      cin >> toPlay;
      if(toPlay == 'y') { // if yes then reset numbers
	PlayAgain = false; // escape loop
	guessCount = 1;
	playerNum = -1;
	srand(time(NULL));
	randomNum = rand() % 101;
	cout << "Guess a number!" << endl;
	cin >> playerNum;
      }
      else if(toPlay == 'n') { // if no escape both while loops
	PlayAgain = false;
	isPlaying = false;
      }
    }
  }
  return 0;
}
