#include <stdio.h>
int main() {
	int A, B, C = 0;
	scanf("%d", &A);
	B = A;
	while (B>0) {
		C = C * 10 + B % 10;
		B = B / 10;
	}
	printf("%s\n", A == C ? "yes" : "no");
}
