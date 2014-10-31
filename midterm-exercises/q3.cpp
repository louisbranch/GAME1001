// Write a program that produces the following output USING NESTED FOR LOOPS:
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16

#include <iostream>

int main() {

  for (int i = 1; i <= 16; i++) {
    std::cout << i;
    if (i % 4 == 0) std::cout << std::endl;
    else std::cout << " ";
  }

  return 0;
}
