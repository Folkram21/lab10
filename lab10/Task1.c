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

	printf("Значения функций: fa(x) = %lf; fb(x) = %lf", fa(x), fb(x));

	return 0;
}
