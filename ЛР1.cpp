# include <iostream>
# include <math.h>
using namespace std;
int main()
{
	setlocale(0, "Russian"); //Вывод сообщений на русском языке
	double a, b, c, d, s1, s2, s3, y;
	system("cls"); //Очистка экрана
	printf("Введите значения переменных a, b, c, d:\n");
	scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
	s1 = pow(sin(c), 3);
	s2 = pow(cos(a), 2);
	s3 = pow(sin(b), d);
	y = (s1*s2) / (5 * s3) + k1 / k2;
	printf("Искомое значение y = %lf", y);
	system("pause"); //Пауза 
}