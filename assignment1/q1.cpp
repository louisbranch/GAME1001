/*
 * Author: Luiz Branco
 * Student ID: 100945651
 *
 * Instructions:
 * Write a program that prompts the user to input five decimal numbers. The program should then add the five decimal numbers, convert the sum to the nearest integer, and print the result.
 */
#include <iostream>

using namespace std;

int main() {

  const int PLACES = 5;
  float next_number;
  float sum = 0;
  int i;

  cout
    << "Give me "
    << PLACES
    << " decimal numbers:\n";

  for (i = 0; i < PLACES; i++) {
    cin >> next_number;
    sum += next_number;
  }

  cout
    << "The result is: "
    << sum
    << endl;

  return 0;
}
