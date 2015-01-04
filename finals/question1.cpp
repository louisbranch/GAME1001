/* Write a function 'getNameAndFamilyName' that gets a name and family name from terminal
using cin
and returns them through parameter passing by refference.
for the test case take look at program1.cpp */
#include <iostream>
#include <string>
using namespace std;

void getNameAndFamilyName(string& first, string& last) {
  cin >> first >> last;
}
