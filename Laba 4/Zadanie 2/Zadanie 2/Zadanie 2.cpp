//Дано семизначное число. Определить на сколько сумма цифр, стоящих на нечетных позициях, меньше самого числа.
#include<locale.h>
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int    chislo, chislo1, chislo2, chislo3, chislo4, chislo5, chislo6, chislo7, summa, otvet;
	printf("Введите 7-значное число:"); scanf_s("%d", &chislo);//1234567
	chislo1 = chislo % 10;//1 цифра
	chislo2 = (chislo % 100) / 10;//2 цифра
	chislo3 = (chislo % 1000) / 100;//3 цифра
	chislo4= (chislo % 10000) / 1000;//4 цифра
	chislo5= (chislo % 100000) / 10000;//5 цифра
	chislo6= (chislo % 1000000) / 100000;//6 цифра
	chislo7 = chislo / 1000000;//7 цифра
	summa = chislo1 + chislo3 + chislo5 + chislo7;
	otvet = chislo - summa;
	printf("Ответ:%d\n", otvet);
	system("pause");
	return 0;
}
