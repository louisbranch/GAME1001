// Write a program that reads 6 positive integer numbers
// (using a for or while loop) and returns the minimum values of them.

#include <iostream>

int main() {
  int min, val;

  for (int i = 0; i < 6; i++) {
    std::cin >> val;
    if (!min) min = val;
    else if (val < min) min = val;
  }

  std::cout << min << std::endl;

  return 0;
}
