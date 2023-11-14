//Среди натуральных чисел из промежутка от А до В найти число с наименьшим произведением цифр. Вывести на экран это число и произведение его цифр.
#include <iostream>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int A, B, Pr = 1, Y = INT_MAX, i;
	do
	{
		printf("Введите число натуральное А: "); scanf_s("%i", &A);
		printf("Введите число натуральное B: "); scanf_s("%i", &B);
	} while (A <= 0 or B <= 0 or A>=B);
	for (A; A < B; A++)
	{
		i = A;
		while (i > 0)
		{
			Pr *= i % 10;
			i /= 10;
		}
		if (Y > Pr) Y = Pr;
		Pr = 1;
	}
	printf("Мнимальное произведение цифр: %i", Y);

}
