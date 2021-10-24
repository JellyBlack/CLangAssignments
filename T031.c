#include <stdio.h>
#include <math.h>

int move(int value, int n) {
	if (n > 0) {
		int t1 = value >> n;
		int temp = pow(2, n) - 1;
		int t2 = value & temp;
		return (t2 << 16 - n) + t1;
	}
	if (n < 0) {
		int t1 = value << -n;
		int temp = pow(2, 16) - pow(2, 16 + n);
		int t2 = value & temp;
		return (t2 >> 16 - n) + t1;
	}
	return value;
}

int main() {
	int value, n;
	scanf("%d%d", &value, &n);
	printf("%d", move(value, n));
	return 0;
}