#include <iostream>
#include <cmath>

using namespace std;

double calculateDelta(double a, double b, double c) {
  return (b*b) - (4*a*c);
}

int main()
{
  double a = 0;
  double b = 0;
  double c = 0;

  double delta = calculateDelta(a, b, c);

  double x1 = (-b - sqrt(delta)) / (2*a);
  double x2 = (-b + sqrt(delta)) / (2*a);

  cout << "x1: " << x1;

  if (x1 != x2) {
    cout << '\n';
    cout << "x2: " << x2;
  }

  cout << '\n';

  return 0;
}
