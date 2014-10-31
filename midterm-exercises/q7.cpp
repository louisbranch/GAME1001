// Write a program that produces the following output USING NESTED FOR LOOPS
//
// 1
// 12
// 123
// 1234
// 12345
// 123456
// 1234567

#include <iostream>

int main() {

  for (int i = 1; i < 8; i++) {
    for (int j = 1; j <= i; j++) {
      std::cout << j;
    }
    std::cout << std::endl;
  }

  return 0;
}
