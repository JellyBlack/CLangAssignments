#include <stdio.h>
#include <math.h>
int main() {
	int c1, c2, c3, c5, c8;
	int max1, max2, max3, max5, max8;
	double money = 2000;
	for (c1 = 0; c1 <= 20; c1 ++) {
		for (c2 = 0; c2 <= (20 - c1 * 1) / 2; c2++) {
			for (c3 = 0; c3 <= (20 - c1 * 1 - c2 * 2) / 3; c3++) {
				for (c5 = 0; c5 <= (20 - c1 * 1 - c2 * 2 - c3 * 3) / 5; c5++) {
					c8 = (20 - c1 * 1 - c2 * 2 - c3 * 3 - c5 * 5) / 8;
					double tmp = 2000 * pow(1 + 12 * 0.0063, c1) * pow(1 + 24 * 0.0066, c2) * pow(1 + 36 * 0.0069, c3) * pow(1 + 60 * 0.0075, c5) * pow(1 + 96 * 0.0084, c8);
					if (tmp > money) {
						money = tmp;
						max1 = c1;
						max2 = c2;
						max3 = c3;
						max5 = c5;
						max8 = c8;
					}
				}
			}
		}
	}
	printf("%d %d %d %d %d\n", max8, max5, max3, max2, max1);
	printf("%.2lf", money);
	return 0;
}