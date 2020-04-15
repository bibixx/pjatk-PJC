#include <iostream>
#include <algorithm>
using namespace std;

void merge(
  int* a,
  size_t aSize,
  int* b,
  size_t bSize,
  int* c
) {
  int iA = 0;
  int iB = 0;

  for (size_t i = 0; i < (aSize + bSize); i++) {
    if (iA >= aSize) {
      c[i] = b[iB++];
      continue;
    }

    if (iB >= bSize) {
      c[i] = a[iA++];
      continue;
    }

    if (a[iA] < b[iB]) {
      c[i] = a[iA];
      iA++;
    } else {
      c[i] = b[iB];
      iB++;
    }
  }
}

int main() {
  int a[] = { 2, 8 };
  int b[] = { 3, 7 };

  int c[4] = {0, 0, 0, 0};

  merge(a, 2, b, 2, c);

  for (size_t i = 0; i < 4; i++) {
    cout << c[i] << endl;
  }
}
