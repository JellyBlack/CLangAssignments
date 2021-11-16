#include <stdio.h>

// 计算阶乘
int resolve(int n) {
	int result = 1;
	while (n>0) {
		result *= n--;
	}
	return result;
}

int main() {
	int m, n;
	scanf("%d%d", &n, &m);
	if (n < 0 || m<0 || m>n) {
		printf("wrong");
	}
	else {
		printf("%d", resolve(n)/(resolve(m)*resolve(n-m)));
	}
	return 0;
}