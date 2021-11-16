#include<stdio.h>
#include<stdlib.h>

int main() {
	int array[100][100];
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int n;
			scanf("%d", &n);
			array[i][j] = n;
		}
	}
	int s1 = 0, s2 = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
				s1 += array[i][j];
			}
			else {
				s2 += array[i][j];
			}
		}
	}
	printf("%d", s1 - s2);
	return 0;
}