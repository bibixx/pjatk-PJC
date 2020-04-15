#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double height;
  double weight;

  cout << "Podaj swój wzrost (m):\n";
  cin >> height;

  cout << "Podaj swoją wagę (kg):\n";
  cin >> weight;

  double bmi = weight / pow(height, 2);
  cout << bmi;
  cout << '\n';

  return 0;
}
