#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

char getCharToPrint(bool star) {
  return star ? '*' : ' ';
}

int main() {
  int row1;
  int row2;
  int row3;

  cout << "Podaj liczbę #1:\n";
  cin >> row1;
  cout << "Podaj liczbę #2:\n";
  cin >> row2;
  cout << "Podaj liczbę #3:\n";
  cin >> row3;

  cout << "\n";

  int maxHeight = max(max(row1, row2), row3);

  for (int i = maxHeight; i > 0; i--) {
    cout << maxHeight - i + 1;
    cout << "  ";

    cout << getCharToPrint(row1 >= i);
    cout << getCharToPrint(row2 >= i);
    cout << getCharToPrint(row3 >= i);

    cout << '\n';
  }

  return 0;
}

