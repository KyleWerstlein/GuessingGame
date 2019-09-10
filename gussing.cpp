#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  srand(time(NULL));
  int randomNum = rand(); 
  // cout << randomNum;
  int playerNum = cin >> "Guess a number! ";
  int guessCount = 0;
  while(playerNum != randomNum) {
    //do something?
  }
  return 0;
}
