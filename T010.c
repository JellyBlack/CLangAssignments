#include <stdio.h>
#include <math.h>
int main() {
	double x, y;
	scanf("%lf,%lf", &x, &y);
	x = abs(x);
	y = abs(y);
	if ((x-2) * (x-2) + (y-2) * (y-2) > 1) {
		printf("0\n");
	}
	else {
		printf("10\n");
	}
	return 0;
}