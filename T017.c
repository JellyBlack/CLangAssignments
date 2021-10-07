#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int middle = n * n;
	int start = middle + 1 - n;
	int result = n * n * n;
	printf("%d*%d*%d=%d=", n, n, n, result);
	printf("%d", start);
	for (int i = 1; i < n; i++) {
		start += 2;
		printf("+%d", start);
	}
}