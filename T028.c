#include <stdio.h>
#include <math.h>

int pow10(int i) {
	int mul = 1;
	for (int j = 0; j < i; j++) {
		mul *= 10;
	}
	return mul;
}
int main() {
	int n, cnt = 0, cnt1 = 0;
	scanf("%d", &n);
	int m = n;
	while (m > 0) {
		cnt++;
		m /= 10;
	}
	for (int i = 1; i <= cnt; i++) {
		int t = n % pow10(i) / pow10(i - 1);
		if (t == 0) {
			cnt1 += n / pow10(i) * pow10(i - 1);
		}
		else if (t == 1) {
			cnt1 += n / pow10(i) * pow10(i - 1) + n % pow10(i - 1) + 1;
		}
		else{
			cnt1 += (n / pow10(i) + 1) * pow10(i - 1);
		}
	}
	printf("%d", cnt1);
	return 0;
}

