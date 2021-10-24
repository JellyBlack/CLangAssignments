#include <stdio.h>

int isPrime(int n) {
	for (int i = 2; i * i < n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int n;
	scanf("%d", &n);
	int success = 0;
	while (1) {
		for (int i = 1;; i++) {
			int delta = 0;
			while (!isPrime(i * 100 + delta)) {
				if (delta == 99) {
					break;
				}
				delta++;
			}
			if (!isPrime(i * 100 + delta)) {
				success++;
				if (success == n) {
					printf("%d %d", i * 100, i * 100 + 99);
					return 0;
				}
			}
		}
	}
	return 0;
}

