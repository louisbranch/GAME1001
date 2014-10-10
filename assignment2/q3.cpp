#include <iostream>

using namespace std;

int main() {

  int stars, i;

  cin >> stars;

  while (stars > 0) {
    for (i = 0; i < stars; i++) {
      cout << "*";
    }
    cout << endl;
    --stars;
  }

  return 0;
}
