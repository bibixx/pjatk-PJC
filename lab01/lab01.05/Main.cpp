#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
  srand(time(0));

  // int min = 1;
  // int max = 1000000;
  int min = 1;
  int max = 1000;

  int numberOfGuesses = 0;
  char userInput;
  int lastGuess = -1;

  while (userInput != 'y') {
    lastGuess = (rand() % (max - min + 1)) + min;
    numberOfGuesses++;

    cout << "Czy to " << lastGuess << "? (" << min << "|" << max << "): ";
    cin >> userInput;

    switch (userInput) {
      case 's': {
        max = lastGuess - 1;
        break;
      }
      case 'b': {
        min = lastGuess + 1;
        break;
      }
    }

    if (min == max || min > max) {
      cout << "🤔🤔🤔🤔🤔🤔🤔🤔 jak?\n";
      break;
    }
  }

  cout << "Pomyślana liczba: " << lastGuess << "\n";
  cout << "Ilość pytań: " << numberOfGuesses;

  cout << '\n';

  return 0;
}

