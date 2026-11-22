#include <stdio.h>
#include <locale.h> // russian language
#include <math.h>

int fa(double x) {
	double y = 0;
	y = sin(x) + x * x; // function - f(x) = sin(x) + x^2

	return y;
}

int fb(double x) {
	double y = 0;
	y = cos(x) - 2 * x; // function - f(x) = cos(x) - 2x

	return y;
}

int main() {

	return 0;
}
