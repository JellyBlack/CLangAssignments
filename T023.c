#include <stdio.h>

int main() {
	for (int a = 1; a <= 3; a ++) {
		for (int b = 1; b <= 9; b++) {
			for (int c = 1; c <= 9; c ++) {
				int temp = a * 100 + b * 10 + c;
				int d = 2 * temp / 100;
				int e = 2 * temp % 100 / 10;
				int f = 2 * temp % 10;
				int g = 3 * temp / 100;
				int h = 3 * temp % 100 / 10;
				int i = 3 * temp % 10;
				int A[10] = { 0 };
				A[a] = 1;
				A[b] = 1;
				A[c] = 1;
				A[d] = 1;
				A[e] = 1;
				A[f] = 1;
				A[g] = 1;
				A[h] = 1;
				A[i] = 1;
				int sum = 0;
				for (int i = 1; i < 10; i++) {
					sum += A[i];
				}
				if (sum == 9) {
					printf("%d%d%d %d%d%d %d%d%d\n", a, b, c, d, e, f, g, h, i);
				}
			}
		}
	}
	return 0;
}
