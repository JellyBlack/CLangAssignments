#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	int integer = a / b;// 整数部分
	a %= b;
	printf("%d.", integer);
	for (int i = 0; i < c; i++) {
		a *= 10;
		int result;
		if (i == c - 1) {
			int i1 = a / b;
			a %= b;
			a *= 10;
			int i2 = a / b;
			if (i2 >= 5) {
				i1++;
			}
			result = i1;
		}
		else {
			result = a / b;
		}
		printf("%d", result);
		a %= b;
	}
	return 0;
}
