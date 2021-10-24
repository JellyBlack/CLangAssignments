#include <stdio.h>
#include <math.h>

void resolve(int[]);
int main() {
	int array[] = { 1, 0 };// 1个alpha，0个beta
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		resolve(array);
	}
	printf("%d %d", array[0], array[1]);
	return 0;
}

void resolve(int array[2]) {
	int alpha = array[0];
	int beta = array[1];
	int beta2 = 3 * alpha;
	int alpha2 = beta;
	beta2 += 2 * beta;
	array[0] = alpha2;
	array[1] = beta2;
}