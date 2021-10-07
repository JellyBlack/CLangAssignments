#include <stdio.h>
int main() {
	int i = 0;
	double pi = 0;
	while (1) {
		int sign = i % 2 == 0 ? 1 : -1;
		double num = 1.0 / (2 * i + 1);
		if (num < 1e-6) {
			printf("%lf\n", pi);
			break;
		}
		pi += 4 * sign * num;
		i++;
	}
	return 0;
}