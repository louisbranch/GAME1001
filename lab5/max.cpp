#include <iostream>

using namespace std;

int main() {
  int i, j, k, max;
  cin << i << j << k;
  max = i;

  if (j > max) max = j;
  if (k > max) max = k;

  cout << max << endl;
}
