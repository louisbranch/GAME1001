// Write a program that calculates the following:
// 1.5^2+2.5^2+3.5^2+...+100.5^2 here ^2 means square of a number

#include <iostream>
#include <cmath>

int main() {

  double total;

  for (double i = 1.5; i < 101; i++) {
    total += pow(i, 2.0);
  }

  std::cout << total << std::endl;

  return 0;
}
