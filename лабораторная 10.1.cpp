#include<iostream>
#include <time.h>
using namespace std;
int i = 0;
int j = 0;
int alfa;
int a[15];
int b[15];
int cnta = 0;
int cntb = 0;
void func() {
	for (int i = 0; i < 15; i++) {

		if (a[i] > alfa and b[i] > alfa) {
			cnta ++;
			cntb++;
			continue;
		}
		else if (a[i] > alfa) {
			cnta++;
			continue;
		}
		else if (b[i] > alfa) {
			cntb++;
			continue;
		}
	}
}
int main() {
	setlocale(0, "Russian");
	srand(time(NULL) + rand());
	cout << "Enter the number alfa " << endl;
	cin >> alfa;
	for (int i=0; i < 15; i++) {
		a[i] = rand() % 201 - 100;
	}
	for (int i=0; i < 15; i++) {
		b[i] = rand() % 201 - 100;
	}
	cout << "Massive a:" << endl;
	for (int i=0; i < 15; i++) {
		cout << a[i] << " ";
	}
	cout <<endl<< "Massive b:" << endl;
	for (int i=0; i < 15; i++) {
		cout << b[i] << " ";
	}
	for (int i = 0; i < 15; i++) {
	}
	func();
	cout <<endl <<"Number of elements greater than alfa in array a =" << cnta;
	cout << endl << "Number of elements greater than alfa in array b = " << cntb;
}