#include <stdio.h>
int main() {
	int count = 0;
	int sum = 0;
	for (int i = 500; i < 801; i ++) {
		int flag = 1;
		for (int j = 2; j < i; j ++) {
			if (i % j == 0) {
				flag = 0;
			}
		}
		if (flag) {
			count++;
			int sign = count % 2 == 0 ? 1 : -1;
			sum += sign * i;
		}
	}
	printf("%d %d", count, sum);
	return 0;
}