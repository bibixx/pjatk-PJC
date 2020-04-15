#include <iostream>
using namespace std;

void test(int* b) {
  cout << *b;

  *b = 1;
}

int main() {
  int a = 45123;

  test(&a);

  cout << '\n';
  cout << '\n';
  cout << a;
  cout << '\n';

  return 0;
}

