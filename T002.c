#include <stdio.h>
#define PI 3.1415926
int main() {
	double r, h;
	scanf("%lf%lf", &r, &h);
	double l = 2 * PI * r;
	double s = PI * r * r;
	double sq = 4 * PI * r * r;
	double vq = 4 * PI * r * r * r / 3;
	double vz = s * h;
	printf("%.2lf\n", l);
	printf("%.2lf\n", s);
	printf("%.2lf\n", sq);
	printf("%.2lf\n", vq);
	printf("%.2lf\n", vz);
}