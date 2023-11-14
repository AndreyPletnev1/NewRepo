﻿/*Город А находится от города В на расстоянии S км.Между ними на расстоянии S1 от города А находится город С.
Велосипедист выехал из А в В. На какое время он сделал остановку в городе С,если до города С
он ехал со скоростью V1 км/ч, от С до В со скоростью V2 км/ч, а всего на дорогу затратил t часов.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Russian");
	//Обьявление переменных
	int S, S1, V1, V2, t, t1, t2, t3, S3;
	//Ввод переменных
	printf("Расстояние между городами A и B="); scanf_s("%d", &S);
	printf("Расстояние между городами А и С="); scanf_s("%d", &S1);
	//Проверка ввода правильности ввода расстояния
	//Ввод переменных
	printf("Скорость из А в С="); scanf_s("%d", &V1);
	printf("Скорость из C в B="); scanf_s("%d", &V2);
	printf("Какое количество времени затратил велосипедист из А в С="); scanf_s("%d", &t);
	//Вычисления
	//Время от А в В
	t1 = S1 / V1;
	//Расстояние от С до В
	S3 = S - S1;
	// Время от С до В
	t2 = S3 / V2;
	//Время пребывания в городе C
	t3 = t - t1 - t2;
	//Проверка правильности ввода времени
	printf("Велосипедист затратил %d часа(часов)\n", t3);
	system("pause");
	return 0;
}