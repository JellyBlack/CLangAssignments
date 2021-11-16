#include <stdio.h>

int fceil(double x) {
	if (x >= 0) {
		return (int)x + 1;
	}
	else {
		return (int)x;
	}
}

int main() {
	int x;
	scanf("%d%d", &x);
	printf("%d", fceil(x));
	return 0;
}