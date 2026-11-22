#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h> // russian language
#include <math.h>

double fa(double x) {
	double y;
	y = sin(x) + x * x; // function - f(x) = sin(x) + x^2

	return y;
}

double fb(double x) {
	double y;
	y = cos(x) - 2 * x; // function - f(x) = cos(x) - 2x

	return y;
}

int main() {
	setlocale(LC_CTYPE, "RUS");

	double x;
	int option;

	printf("Введите значение x -> ");
	scanf("%lf", &x);

	do {
		printf("\n\nВыберите подходящий вариант из списка:\n"
			"1. Результат функции fa(x) = sin(x) + x^2\n"
			"2. Результат функции fb(x) = cos(x) - 2x\n"
			"3. Произведение fa(x) * fb(x)\n"
			"4. Разность квадратов fa^2(x) - fb^2(x)\n"
			"5. Удвоенная сумма 2*(fa(x)+fb(x))\n"
			"0 - Выход\n\n");
		printf("Введите номер варианта -> ");
		scanf("%d", &option);

		switch (option) {
		case 0:
			printf("\nЗавершение работы...\n");
			break;
		case 1:
			printf("Значение функции: fa(x) = %lf\n", fa(x));
			break;
		case 2:
			printf("Значение функции: fb(x) = %lf\n", fb(x));
			break;
		case 3:
			printf("Произведение = %lf\n", fa(x) * fb(x));
			break;
		case 4:
			printf("Разность квадратов = %lf\n", fa(x) * fa(x) - fb(x) * fb(x));
			break;
		case 5:
			printf("Удвоенная сумма = %lf\n", 2 * (fa(x) + fb(x)));
			break;
		default:
			printf("Неизвестный вариант. Пожалуйста, повторите попытку.\n");
			break;
		}

	} while (option != 0);

	return 0;
}
