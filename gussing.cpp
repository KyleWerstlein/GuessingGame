#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  srand(time(NULL));
  int randomNum = rand(); 
  cout << randomNum;
  return 0;
}
