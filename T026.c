#include <stdio.h>
#include <math.h>

int main() {
	int n;
	scanf("%d", &n);
	long max = pow(2, n);
	int result = 0;
	for (long i = 0; i < max; i++) {
		int count = 0;
		long temp = i;
		while (temp != 0) {
			if ((temp & 1) == 1) {
				count++;
			}
			else {
				count = 0;
			}
			if (count == 3) {
				result++;
				break;
			}
			temp >>= 1;
		}
	}
	printf("%d", result);
	return 0;
}

