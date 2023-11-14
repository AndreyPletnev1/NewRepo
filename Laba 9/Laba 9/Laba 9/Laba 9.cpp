//Вычислить значения выражений у для значений x, равных 1, 2, …, 20: y = 2t2 + 2t + 2, t = 1 + x.
#include<iostream>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int x = 1, y, t;
	for (x; x <= 20; x++)
	{
		t = 1 + x;
		y = 2 * t * t + 2 * t + 2;
		printf("Ответ: %i\n", y);
	}
	system("pause");
	return 0;
}
