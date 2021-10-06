#include <stdio.h>
int main() {
	int x, a;
	scanf("%d%d", &x, &a);
	int tmp = x;
	for (int i = 1; i < a; i ++) {
		tmp *= x;
		int bit3 = (tmp / 100) % 10;
		int bit2 = (tmp / 10) % 10;
		int bit1 = tmp % 10;
		tmp = bit3 * 100 + bit2 * 10 + bit1;
	}
	printf("%d", tmp);
	return 0;
}