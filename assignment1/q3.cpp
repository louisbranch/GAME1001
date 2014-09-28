/*
 * Author: Luiz Branco
 * Student ID: 100945951
 */
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

  const float PI = 3.1416;

  ifstream in("inData.txt");
  ofstream out;
  out.open("outData.txt");

  out << fixed << setprecision(2); // set float precision to 2 decimal places

  // Rectangle
  float length;
  float width;
  float rect_area;
  float perimeter;

  in >> length;
  in >> width;

  rect_area = length * width;
  perimeter = 2 * (length + width);

  out << "Rectangle:" << endl
      << "Length = " << length << ", width = " << width
      << ", area = " << rect_area << ", perimeter = " << perimeter
      << endl << endl;

  // Circle
  float radius;
  float circle_area;
  float circumference;

  in >> radius;

  circle_area = PI * radius * radius;
  circumference = 2 * PI * radius;

  out << "Circle:" << endl
      << "Radius = " << radius << ", area = " << circle_area
      << ", circumference = " << circumference << endl << endl;

  // Person
  string first_name;
  string last_name;
  int age;

  in >> first_name;
  in >> last_name;
  in >> age;

  out << "Name: " << first_name << " " << last_name << ", age: " << age << endl;

  // Account
  float initial_balance;
  float final_balance;
  float rate;

  in >> initial_balance;
  in >> rate;

  final_balance = initial_balance + (initial_balance * rate/100.0/12.0);

  out << "Beginning balance = $" << initial_balance
      << ", interest rate = " << rate << endl
      << "Balance at the end of the month = $" << final_balance << endl;

  in.close();
  out.close();

  return 0;
}
