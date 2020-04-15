#include <iostream>
#include <cmath>
using namespace std;

const double* aver(const double* arr, size_t size, double &average) {
  double sum = 0;

  for (size_t i = 0; i < size; i++) {
    sum += arr[i];
  }

  average = sum / size;

  return &average;
}

int main() {
  using std::cout; using std::endl;
  double arr[] = {1,7,5,4,3,2};
  size_t size = sizeof(arr)/sizeof(arr[0]); double average = 0;

  const double *p = aver(arr, size, average);

  cout << *p << " " << average << endl;

  return 0;
}
