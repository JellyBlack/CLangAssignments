#include <stdio.h>
int main() {
	double s;
	int km = 0;
	double price = 7;
	scanf("%lf", &s);
	km = (int)(s + 1);
	if (km > 15) {
		price += (km - 15.0) * 2.1;
		km = 15;
	}
	if (km > 2) {
		price += (km - 2.0) * 1.5;
	}
	printf("%.6lf", price);
}
