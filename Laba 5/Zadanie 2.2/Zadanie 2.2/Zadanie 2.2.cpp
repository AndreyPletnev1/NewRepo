#include<iostream>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "Russian");
	//Ввод переменных
	double A, B, C, f;
	printf("Введите начальную точку: "); scanf_s("%lf", &A);
	printf("Введите конечную точку: "); scanf_s("%lf", &B);
	do
	{
		printf("Введите шаг C (c>0): "); scanf_s("%lf", &C);
	} while (C <= 0);
	for (A; A < -1; A += C)
	{
		f = 4;
		printf("Ваш ответ:%.3lf\n", f);
	}
	for (A; A <= 10; A += C)
	{
		f = 6.0 * tan(A);
		printf("Ваш ответ:%.3lf\n", f);
	}
	for (A; A > 10; A += C)
	{
		f = 3 / (2 * A);
		printf("Ваш ответ:%.3lf\n", f);
	}
	system("Pause");
	return 0;
}//