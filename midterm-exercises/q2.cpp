// Write a program that takes a number N from the input and calculates sum of
// all odd numbers up to N (including N itself if N is an odd number). The
// program should then output only the sum followed by a new line.)


#include <iostream>

int main() {
  int val, total;
  std::cin >> val;

  for (int i = 1; i <= val; i += 2) {
    total += i;
  }

  std::cout << total << std::endl;

  return 0;
}
