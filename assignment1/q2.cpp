/*
 * Author: Luiz Branco
 * Student ID: 100945951
 *
 * Instructions:
 *
 * Write a C++ program that prompts the user to input the elapsed time for an event in hours, minutes, and seconds. The program then outputs the elapsed time in seconds.
 */
#include <iostream>

using namespace std;

int total_time(int hours, int minutes, int seconds) {
  return (hours * 60 + minutes) * 60 + seconds;
}

int main() {

  int hours, minutes, seconds;

  cout << "How many hours? ";
  cin >> hours;

  cout << "How many minutes? ";
  cin >> minutes;

  cout << "How many seconds? ";
  cin >> seconds;

  cout
    << "The elapsed time in seconds was: "
    << total_time(hours, minutes, seconds)
    << endl;

  return 0;
}
