#include <stdio.h>
int main() {
	int m1 = 100, m2 = 1000, m3 = 10000;
	int nm2 = 1;
	int nm1 = 1;
	int index = 3;
	int snm1 = 2;
	int sn = 0;
	int snp1 = 0;
	int success_count = 0;
	while (success_count < 3) {
		int n = nm2 + 2 * nm1;
		int np1 = nm1 + 2 * n;
		sn = snm1 + n;
		snp1 = sn + np1;
		if (sn < m1 && snp1 >= m1) {
			printf("%d\n", index);
			success_count++;
		}
		if (sn < m2 && snp1 >= m2) {
			printf("%d\n", index);
			success_count++;
		}
		if (sn < m3 && snp1 >= m3) {
			printf("%d\n", index);
			success_count++;
		}
		index++;
		nm2 = nm1;
		nm1 = n;
	}
	return 0;
}