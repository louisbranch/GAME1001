// Write a program that produces the following output USING NESTED FOR LOOPS.
//
// 1000
// 0100
// 0010
// 0001

#include <iostream>

int main() {

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (i == j) std::cout << 1;
      else std::cout << 0;
    }
    std::cout << std::endl;
  }

  return 0;
}
