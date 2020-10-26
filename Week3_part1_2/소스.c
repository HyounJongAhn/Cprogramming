#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ham() {
	int nai, i, hap = 0;
	for (i = 0; i < 10; i++) {
		printf("nai:");
		scanf("%d", &nai);
		hap += nai;
		if (nai >= 30) {
			printf("%d", nai);
		}
	}

	return hap;
}

int main() {
	int Mean, a, Hap = ham();

	Mean = Hap / 10;


	printf("nai hap=%d, mean=%d\n", Hap, Mean);
	return 0;
}