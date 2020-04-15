#if defined(POL) && defined(ENG)
  #error Please define only one country
#elif !(defined(POL) || defined(ENG))
  #error Please define a country
#endif

#ifdef POL
  #define promptText "podaj liczbę naturalną (0 = koniec): "
  #define promptFinished "Największa suma wynosiła "
  #define promptFor " dla "
#elif defined(ENG)
  #define promptText "enter a natural number (0 if done): "
  #define promptFinished "Max sum of digits was "
  #define promptFor " for "
#endif

#include <iostream>
#include <string>
using namespace std;

string getFinalText(int n, int sum) {
  return promptFinished + to_string(sum) + promptFor + to_string(n);
}

int sumOfDigits(int num) {
  int sum = 0;

  while (num > 0) {
    sum += num % 10;
    num /= 10;
  }

  return sum;
}

int main() {
  int nWithHighestSum = -1;
  int highestSum = -1;

  while (true) {
    int currentNumber;

    cout << promptText;
    cin >> currentNumber;

    if (currentNumber == 0) {
      break;
    }

    int sum = sumOfDigits(currentNumber);
    if (sum > highestSum) {
      nWithHighestSum = currentNumber;
      highestSum = sum;
    }
  }

  cout << getFinalText(nWithHighestSum, highestSum);

  cout << '\n';

  return 0;
}

