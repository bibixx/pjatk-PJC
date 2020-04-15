#include <iostream>
#include <algorithm>
using namespace std;

void getMinMax(
  double& a,
  double& b,
  double& c,
  double*& ptrMin,
  double*& ptrMax
) {
  // Is A max
  if (a >= b && a >= c) {
    ptrMax = &a;
  // Is b max
  } else if (b >= a && b >= c) {
    ptrMax = &b;
  // Is C max
  } else if (c >= a && c >= b) {
    ptrMax = &c;
  }

  // Is A min
  if (a <= b && a <= c) {
    ptrMin = &a;
  // Is b min
  } else if (b <= a && b <= c) {
    ptrMin = &b;
  // Is C min
  } else if (c <= a && c <= b) {
    ptrMin = &c;
  }
}

void getMinMax(
  double& a,
  double& b,
  double& c,
  double** ptrMin,
  double** ptrMax
) {
  // Is A max
  if (a >= b && a >= c) {
    *ptrMax = &a;
  // Is B max
  } else if (b >= a && b >= c) {
    *ptrMax = &b;
  // Is C max
  } else if (c >= a && c >= b) {
    *ptrMax = &c;
  }

  // Is A min
  if (a <= b && a <= c) {
    *ptrMin = &a;
  // Is B min
  } else if (b <= a && b <= c) {
    *ptrMin = &b;
  // Is C min
  } else if (c <= a && c <= b) {
    *ptrMin = &c;
  }
}

// void getMinMax(
//   double& a,
//   double& b,
//   double& c,
//   double** ptrMin,
//   double** ptrMax
// ) {
//   getMinMax(a, b, c, *ptrMin, *ptrMax);
// }

int main() {
  double a1 = 1;
  double b1 = 99;
  double c1 = 2;

  double *ptrMin1;
  double *ptrMax1;

  getMinMax(
    a1, b1, c1, ptrMin1, ptrMax1
  );

  cout << "=== & ===" << endl;

  cout << "a1: " << a1 << endl;
  cout << "b1: " << b1 << endl;
  cout << "c1: " << c1 << endl;

  cout << endl;

  cout << "max: " << *ptrMax1 << endl;
  cout << "min: " << *ptrMin1 << endl;

  cout << endl;

  cout << "a1: " << a1 << endl;
  cout << "b1: " << b1 << endl;
  cout << "c1: " << c1 << endl;

  cout << endl;
  cout << "=== * ===" << endl;

  double a2 = 1;
  double b2 = 99;
  double c2 = 2;

  double *ptrMin2;
  double *ptrMax2;

  getMinMax(
    a2, b2, c2, &ptrMin2, &ptrMax2
  );

  cout << "a2: " << a2 << endl;
  cout << "b2: " << b2 << endl;
  cout << "c2: " << c2 << endl;

  cout << endl;

  cout << "max: " << *ptrMax2 << endl;
  cout << "min: " << *ptrMin2 << endl;

  cout << endl;

  cout << "a2: " << a2 << endl;
  cout << "b2: " << b2 << endl;
  cout << "c2: " << c2 << endl;
}
