#include <stdio.h>

void add(int AH, int AM, int AS, int BH, int BM, int BS) {
	int CH, CM, CS;
	CS = (AS + BS) % 60;
	CM = (AM + BM + (AS + BS) / 60) % 60;
	CH = AH + BH + (AM + BM + (AS + BS) / 60) / 60;
	printf("%d %d %d", CH, CM, CS);
}

int main() {
	int AH, AM, AS, BH, BM, BS;
	scanf("%d%d%d%d%d%d", &AH, &AM, &AS, &BH, &BM, &BS);
	add(AH, AM, AS, BH, BM, BS);
	return 0;
}