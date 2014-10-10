#include <iostream>

using namespace std;

void print(double a, double b, double c) {
  cout << c << endl;
  cout << b << endl;
  cout << a << endl;
}

int main() {

  double a, b, c;

  cin >> a >> b >> c;

  if (a < b) {
    if (a < c) {
      if (b < c) print(a, b, c);
      else print(a, c, b);
    }
    else print(c, a, b);
  } else {
    if (b < c) {
      if (a < c) print(b, a, c);
      else print(b, c, a);
    } else print(c, b, a);
  }

  return 0;
}
