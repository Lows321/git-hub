#include <iostream>
using namespace std;
int main() {
	setlocale(0, "Russian");
	int n = 15;
	int a[15];
	int cnt = 0;
	cout << "Введите 15 чисел"<<endl;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << "Набор чисел : " << endl;
	for (int i = 0; i < n; i++) {
		cout <<  a[i]<<endl;
	}
	for (int i = 0; i < n; i++) {
		if (a[i] > 0 && a[i] < 12) {
			cnt++;
			a[i] = a[i] * a[i];
		}
	}
	cout << "Обработанные числа: " << endl;
	for (int i = 0; i < n; i++) {
		cout << a[i]<<endl ;
	}
	cout << "Количетсво чисел входящих в диапазон [1..11] = " << cnt;
}