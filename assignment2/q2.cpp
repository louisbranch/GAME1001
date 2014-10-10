#include <iostream>

using namespace std;

int main() {

  int numbers, i, min, max, current;

  cin >> numbers;

  for (i = 0; i < numbers; i++) {
    cin >> current;
    if (min == 0 && max == 0) {
      max = min = current;
    }
    if (current < min) min = current;
    if (current > max) max = current;
  }

  cout << min << endl;
  cout << max << endl;

  return 0;
}
