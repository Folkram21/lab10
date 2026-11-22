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

    printf("¬ведите значение x: ");
    scanf("%lf", &x);

    printf("¬ведите число членов р€да N: ");
    scanf("%d", &N);

    return 0;
}
