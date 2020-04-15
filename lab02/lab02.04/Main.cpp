#include <iostream>
#include <math.h>
using namespace std;

int sumDigits(int n, int i = 1, int sum = 0) {
  int p = pow(10, i);
  int p2 = pow(10, i - 1);
  int currentPart = n % p;
  int digit = currentPart / p2;

  int rest = n - currentPart;
  int newSum = sum + digit;

  if (rest == 0) {
    return newSum;
  }

  return sumDigits(rest, i + 1, newSum);
}

int main() {
  int sum = sumDigits(123);

  cout << sum;
  cout << '\n';

  return 0;
}

