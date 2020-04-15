#include <iostream>
#include <algorithm>
using namespace std;

void ord(double &a, double &b, double &c) {
  double min = std::min(std::min(a, b), c);
  double max = std::max(std::max(a, b), c);
  double mid = a;

  if (a != min && a != max) {
    mid = a;
  } else if (b != min && b != max) {
    mid = b;
  } else if (c != min && c != max) {
    mid = c;
  }

  a = min;
  b = mid;
  c = max;
}

void ord(double *a, double *b, double *c) {
  ord(*a, *b, *c);
}

int main() {
  double prtMin;
  double prtMax;

  double a1 = 3;
  double b1 = 1;
  double c1 = 2;

  cout << "=== ORD ===" << endl;

  cout << "==== * ====" << endl;

  ord(a1, b1, c1);

  cout << a1 << endl;
  cout << b1 << endl;
  cout << c1 << endl;

  double a2 = 3;
  double b2 = 1;
  double c2 = 2;

  cout << "==== & ====" << endl;

  ord(&a2, &b2, &c2);

  cout << a2 << endl;
  cout << b2 << endl;
  cout << c2 << endl;
}
