#include <stdio.h>

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	double sum = 0;
	double t = 0;
	int n = 1;
	int start = 0;
	while (sum < b) {
		t += 1.0 / n;
		sum += 1 / t;
		if (start == 0 && sum > a) {
			start = n;
		}
		n++;
	}
	n -= 2;
	if (start == n) {
		printf("%d", n);
	}
	else {
		printf("%d %d", start, n);
	}
	return 0;
}