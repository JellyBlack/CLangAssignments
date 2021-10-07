#include <stdio.h>
int main() {
	int peaches = 1;
	label:while (1) {
		int temp = peaches;
		for (int i = 0; i < 5; i++) {
			if (temp > 5 && temp % 5 == 1) {
				temp /= 5;
				temp *= 4;
			}
			else {
				peaches++;
				goto label;
			}
		}
		printf("%d %d\n", peaches, temp);
		break;
	}
	return 0;
}