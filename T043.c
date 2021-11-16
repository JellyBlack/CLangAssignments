#include<stdio.h>
#include<stdlib.h>

int main() {
	int A[100][100];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n ; j++) {
			int temp;
			scanf("%d", &temp);
			A[i][j] = temp;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", A[i][j]);
			if (j >= i) {
				break;
			}
		}
		printf("\n");
	}
	return 0;
}