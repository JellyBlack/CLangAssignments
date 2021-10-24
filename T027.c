#include <stdio.h>

int main() {
	int k;
	scanf("%d", &k);
	// k < y <= x, y <= 2k
	// y(x-k) = kx
	for (int y = k + 1; y <= 2 * k; y++) {
		for (int x = y;; x++) {
			if(x * (y - k) > k * y){
				break;
			}
			if (y * (x - k) == k * x) {
				printf("1/%d=1/%d+1/%d\n", k, x, y);
			}
		}
	}
	return 0;
}

