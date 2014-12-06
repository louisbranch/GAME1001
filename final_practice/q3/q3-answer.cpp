#include <iostream>
using namespace std;

/*
void fillArrayFromInput(int x[], int size);

int main(){
	int a[3];
	fillArrayFromInput(a,3);
	cout << a[0] << a[1] << a[2] << endl;
	return 0;
}
*/

void fillArrayFromInput(int x[], int size) {
  int i;
  for (i = 0; i < size; i++) {
    cin >> x[i];
  }
}
