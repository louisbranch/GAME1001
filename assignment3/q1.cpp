#include <iostream>

int main() {

  int width = 6;

  for (int i = 0; i < width; i++) {
    for (int j = 0; j <= i; j++) {
      std::cout << "*";
    }
    std::cout << "\n";
  }

  return 0;
}
