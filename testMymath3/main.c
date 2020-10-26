#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <MyMath.h>

int main() {
	int dataA = 0, dataB = 0;
	printf("두 수를 입력하세요:\n");
	scanf("%d%d", &dataA, &dataB);

	printf("%d = %d + %d\n", myAdd(dataA, dataB), dataA, dataB);
	printf("%d = %d - %d\n", mySub(dataA, dataB), dataA, dataB);
	printf("%d = %d * %d\n", myMul(dataA, dataB), dataA, dataB);
	printf("%lf = %lf / %lf\n", myDiv(dataA, dataB), (double)dataA, (double)dataB);

	getchar();
	return 0;
}


