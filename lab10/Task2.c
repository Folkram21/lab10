#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

double sin_n(double x, int N) {
    double sum = 0.0;
    double term = x;         
    int sign = 1;            
    int k;

    for (k = 1; k <= N; k++) {
        sum += sign * term;
        term = term * x * x / ((double)(2 * k) * (2 * k + 1));
        sign = -sign;
    }
    return sum;
}

double sin_eps(double x, double eps) {
    double sum = 0.0;
    double term = x;
    int sign = 1;
    int k = 1;

    while (fabs(term) >= eps) {
        sum += sign * term;
        term = term * x * x / ((double)(2 * k) * (2 * k + 1));
        sign = -sign;
        k++;
    }
    return sum;
}

int main(void) {
    setlocale(LC_CTYPE, "RUS");

    double x, eps;
    int N, i;

    printf("Введите значение x: ");
    scanf("%lf", &x);

    printf("Введите число членов ряда N: ");
    scanf("%d", &N);

    printf("Введите точность eps: ");
    scanf("%lf", &eps);

    printf("\n sin(%g)\n", x);
    printf("  N |       sin_n     |     отклонение\n");
    printf("----+-----------------+------------------\n");
    for (i = 1; i <= N; i++) {
        double sn = sin_n(x, i);
        double dev = sn - sin(x);
        printf("%3d | %15.4f | %+.4e\n", i, sn, dev);
    }

    return 0;
}
