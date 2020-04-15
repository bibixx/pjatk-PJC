#include <iostream>

void minMaxRep(int a[], size_t size, int& mn, size_t& in, int& mx, size_t& ix) {
  mn = a[0];
  in = 0;

  mx = a[0];
  ix = 0;

  for (size_t i = 0; i < size; i++) {
    int v = a[i];

    if (mn > v) {
      mn = v;
      in = 0;
    }

    if (mx < v) {
      mx = v;
      ix = 0;
    }

    if (mn == v) {
      in++;
    }

    if (mx == v) {
      ix++;
    }
  }
}

int main() {
  using std::cout;

  int a[] = { 2, 3, 4, 2, 7, 4, 7, 2 };

  size_t size = sizeof(a) / sizeof(*a);
  int mn, mx;
  size_t in , ix;
  minMaxRep(a, size, mn, in, mx, ix);

  cout << "Array: [ ";
  for (size_t i = 0; i < size; ++i)
    cout << a[i] << " ";

  cout << "]\n";
  cout << "Min = " << mn << " " << in << " times\n";
  cout << "Max = " << mx << " " << ix << " times\n";
}
