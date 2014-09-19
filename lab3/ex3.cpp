/* Author: Luiz Branco
   Student ID: 100945951 */
#include <iostream>
using namespace std;
int main()
{
	int x, y;
	char ch;
	cout << "Give me 3 numbers:\n";
	cin >> x >> y;
	cin.ignore(50, '\n');
	cin >> ch;
	cout
		<< "x is " << x
		<< ", y is " << y
		<< " and ch is " << ch << endl;
}
