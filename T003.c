#include <stdio.h>
int main() {
	double math, english, clang;
	scanf("%lf%lf%lf", &math, &english, &clang);
	double sum = math + english + clang;
	printf("%.6lf\n", sum);
	printf("%.6lf\n", sum / 3);
}