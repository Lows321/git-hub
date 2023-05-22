
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
	cout << "Массив a : "<< endl;
	for (int i = 0; i < size; i++) {
		cout << a[i] << "\t";
	}
	cout <<endl<< "Введите элемент для поиска "<<endl;	
	cin >> el;
	int num = findel(a, size, el);
	if (num == -1) {
		cout << "Такого числа нет " << endl;
	}
	else {
		cout << "Номер искомого числа = " << num + 1;
	}
}