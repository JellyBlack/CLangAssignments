#include <stdio.h>
int main() {
	int y, m, d;
	scanf("%d-%d-%d", &y, &m, &d);
	int daysInFeb = 28;
	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
		daysInFeb++;
	}
	int days = 0;
	for (int i = 1; i < m; i++) {
		if (i == 2) {
			days += daysInFeb;
		}
		else if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
			days += 31;
		}
		else {
			days += 30;
		}
	}
	days += d;
	printf("%d\n", days);
}
