#include <stdio.h>
int main() {
	double num1 = 1;
	double num2 = 2;
	double sum = 0;
	for (int i = 0; i < 20; i++) {
		sum += num2 / num1;
		double temp = num1 + num2;
		num1 = num2;
		num2 = temp;
	}
	printf("%.6lf", sum);
	return 0;
}