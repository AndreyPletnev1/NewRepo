#include <locale.h>
#include <iostream>
int main()
{
	setlocale(LC_ALL, "Russian");
	int sec, min, otvet;//Ввод переменных
	printf("Сколько секунд прошло с начала суток?:"); scanf_s("%d", &sec);
	otvet = sec % 60;//Количество секунд с последней минуты
	printf("Ваш ответ\n: %d", otvet);
	system("pause");
	return 0;
}