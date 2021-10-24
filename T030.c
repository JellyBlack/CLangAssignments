#include <stdio.h>

int main() {
	int x, y, a, b, L;
	scanf("%d%d%d%d%d", &x, &y, &a, &b, &L);
	if (a == b) {
		printf("impossible");
		return 0;
	}
	for (int n = 1;; n++) {
		if (((x + n * a) - (y + n * b)) % L == 0) {
			printf("%d", n);
			return 0;
		}
		if (a != b && (x - y) % (b - a) != 0 && (L - (x - y)) % (b - a) != 0) {
			printf("impossible");
			return 0;
		}
	}
	return 0;
}