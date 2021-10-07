#include <stdio.h>
#include <math.h>
int main() {
	double a;
	scanf("%lf", &a);
	double last = 1;
	while (1) {
		double result = (last + a / last) / 2.0;
		if (fabs(result - last) < 1e-5) {
			last = result;
			break;
		}
		last = result;
	}
	printf("%.5lf", last);
}