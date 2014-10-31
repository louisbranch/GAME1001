// Write a program that calculates the sum of numbers
// between 1 and 100 that are divisible by three: 0+3+6…+99

#include <iostream>

int main() {
  int total;

  for (int i = 0; i < 100; i += 3) {
    total += i;
  }

  std::cout << total << std::endl;

  return 0;
}
