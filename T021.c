#include <stdio.h>
#include <math.h>

int main() {
	int n;
	int S[18];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int t;
		scanf("%d", &t);
		S[i] = t;
	}
	int max = -1;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			int result = 1;
			for (int k = i; k <= j; k++) {
				result *= S[k];
			}
			if (result > max) {
				max = result;
			}
		}
	}
	printf("%d", max);
	return 0;
}