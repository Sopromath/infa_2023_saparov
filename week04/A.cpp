#include <iostream>
#include <cmath>

using namespace std;

char* sieve(unsigned n) {
  char* arr = new char[n+1];
  for (unsigned i = 0; i <= n; i++) {
    arr[i] = 1;
  }
  arr[0] = 0;
  arr[1] = 0;
  for (unsigned i = 2; i * i <= n; i++) {
    if (arr[i] == 1) {
      for (unsigned j = i * i; j <= n; j += i) {
        arr[j] = 0;
      }
    }
  }
  return arr;
}

int main() {
    unsigned n;
    cin >> n;
    char* arr = sieve(n);
    for (unsigned i = 0; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}
