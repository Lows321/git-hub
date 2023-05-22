﻿
#include <iostream>
using namespace std;

template <typename T>
T findel(const T a[], int size, const T el) {

	for (int i = 0; i < size; i++) {
		if (a[i] == el) {
			return i;
		}
	}
	return -1;
}
int main() {
	setlocale(0, "Russian");
	int a[] = { 5,6,12,9,8,4,6,7 };
	int el;
	int size = sizeof(a) / sizeof(a[0]);
	cout << "Massive a: "<< endl;
	for (int i = 0; i < size; i++) {
		cout << a[i] << "\t";
	}
	cout <<endl<< "Enter an item to search"<<endl;	
	cin >> el;
	int num = findel(a, size, el);
	if (num == -1) {
		cout << "Not found " << endl;
	}
	else {
		cout << "The number of the desired number = " << num + 1;
	}
}