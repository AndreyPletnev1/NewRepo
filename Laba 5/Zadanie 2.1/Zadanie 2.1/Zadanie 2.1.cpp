#include<iostream>
#include<locale.h>
#include<math.h>
int main()
{
	setlocale(LC_ALL, "Russian");
	//Ввод переменных
	double x, m;
	printf("Введите x:"); scanf_s("%lf", &x);
	//Проверка условий
	if (x < -1) (m = 4);
	else if ((x < 10) && (x >= -1)) m = 6.0 * tan(x);
	else if (x > 10) m = 3 / (2 * x);
	system("Pause");
	return 0;
}