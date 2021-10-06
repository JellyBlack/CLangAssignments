#include <stdio.h>
int main() {
	double I;
	scanf("%lf", &I);
	double A = 0;
	if (I > 100) {
		A += (I - 100) * 0.01;
		I = 100;
	}
	if (I > 60) {
		A += (I - 60) * 0.015;
		I = 60;
	}
	if (I > 40) {
		A += (I - 40) * 0.03;
		I = 40;
	}
	if (I > 20) {
		A += (I - 20) * 0.05;
		I = 20;
	}
	if (I > 10) {
		A += (I - 10) * 0.075;
		I = 10;
	}
	A += I * 0.1;
	printf("%.6lf\n", A);
}
