/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void test1() {
	int a, b, sum = 0;
	int data[5];
	double average = 0.0;

	for (a = 0; a < 5; a++) {
		printf("%d번째 숫자를 입력하세요 : ", a+1);
		scanf("%d", &data[a]);
		sum += data[a];
	}
	average = (double)sum / 5;
	 printf("합계 ==> %d, 평균 ==> %lf", sum, average);
}

void test2() {
	int data[10];
	int min, max, a;

	for (a = 0; a < 10; a++)
	{
		printf("%d번째 숫자를 입력하세요 : ", a + 1);
		scanf("%d", &data[a]);
	}
		min = data[0];
		max = data[0];
		for (a = 1; a < 10; a++) {
			if (min > data[a]) {
				min = data[a];
			}
			if (max < data[a]) {
				max = data[a];
			}
		}
	printf("최소값 ==> %d, 최대값 ==> %d", min, max);
}

void test3() {
	int data1[5];
	int data2[5];
	int data3[5];
	int a, max;

	printf("[data1 배열 입력]\n");
	for (a = 0; a < 5; a++) {
		printf("data1 [%d]에 숫자를 입력하세요 : ", a);
		scanf("%d", &data1[a]);
	}
	printf("\n");
	printf("[data2 배열 입력]\n");
	for (a = 0; a < 5; a++) {
		printf("data2 [%d]에 숫자를 입력하세요 : ", a);
		scanf("%d", &data2[a]);
	}
	printf("\n");
	for (a = 0; a < 5; a++) {
		data3[a] = data1[a] + data2[a];
		printf("data3[%d] = %d\n", a, data3[a]);
	}
	max = data3[0];
	for (a = 1; a < 5; a++) {
		if (max < data3[a]) {
			max = data3[a];
		}
	}
	printf("\n최대값 ==> %d", max);
}

void test4_1() {
	int i;
	int data1[5], data2[5], data3[5];
	int max;
	int min;

	srand((unsigned int)time(NULL));

	printf("[Data 생성]\n");
	for (i = 0; i < 5; i++) {
		data1[i] = rand() % 256;
		data2[i] = rand() % 256;
		data3[i] = data1[i] + data2[i];
	}

	for (i = 0; i < 5; i++) {
		printf("data3[%2d]: %04d: data1[%2d]: %04d + data2[%2d]: %04d\n",
			i, data3[i], i, data1[i], i, data2[i]);
	}

	min = data3[0];
	max = data3[0];
	for (i = 1; i < 5; i++) {
		if (max < data3[i]) {
			max = data3[i];
		}
		if (min > data3[i]) {
			min = data3[i];
		}
	}
	printf("\n최소값: %d, 최대값: %d\n", min, max);
}

#define SIZE 5
void test4_2() {
	int data1[SIZE] = { 1,2,3,4,5 };
	int data2[SIZE] = { 0 };
	int i;

	printf("[data1] 원소 출력\n");
	for (i = 0; i < SIZE; i++) {
		printf("%d\t", data1[i]);
	}
	printf("\n\n[data2] 원소 출력\n");
	for (i = 0; i < SIZE; i++) {
		printf("%d\t", data2[i]);
	}
	for (i = 0; i < 5; i++) {
		data2[i] = data1[i];
	}
	printf("\n\n[data2] 원소 출력\n");
	for (i = 0; i < SIZE; i++) {
		printf("%d\t", data2[i]);
	}
}
#define max 10000
void test4_3() {
	int joo, a, j1 = 0, j2 = 0, j3 = 0, j4 = 0, j5 = 0, j0 = 0;
	int data[max] = { 0 };
	srand((unsigned int)time(NULL));

	for (a = 0; a < 10000; a++) {
		data[a] = 1 + rand() % 6;
		
		if (data[a] == 1) {
			j0 += 1;
		} 
		else if (data[a] == 2) {
			j1 += 1;
		}
		else if (data[a] == 3) {
			j2 += 1;
		}
		else if (data[a] == 4) {
			j3 += 1;
		}
		else if (data[a] == 5) {
			j4 += 1;
		}
		else if (data[a] == 6) {
			j5 += 1;
		}
	}

	printf("[빈도수 출력]\n");
	printf(" %d %d\n", 1, j0);
	printf(" %d %d\n", 2, j1);
	printf(" %d %d\n", 3, j2);
	printf(" %d %d\n", 4, j3);
	printf(" %d %d\n", 5, j4);
	printf(" %d %d\n", 6, j5);
}

void test4_4() {
	int seat[11] = { 0 };
	int a, b;
	char st;

	for (;;) {
		printf("좌석을 예약하시겠습니까?(y 또는 n) ");
		scanf(" %c", &st);
		if (st == 'y') {
			printf("-------------------------------\n");
			printf("  1  2  3  4  5  6  7  8  9  10\n");
			printf("-------------------------------\n");
			for (a = 0; a < 10; a++) {
				printf("  %d", seat[a]);
			}
			printf("\n");

			printf("몇번째 좌석을 예약하시겠습니까 ");
			scanf("%d", &b);
			if (seat[b - 1] == 1) {
				printf("이미 예약된 자리입니다.\n");
			}
			else {
				seat[b - 1] = 1;
				printf("예약되었습니다.\n");
			}
		}
		else if (st == 'n') {
			break;
		}
	}
}

void test5_1() {
	int aa[4] = { 100,200,300,400 };
	int bb[] = { 100,200,300,400 };
	int cc[4] = { 100,200 };
	int dd[4] = { 0 };
	int ee[] = { 100,200,300,400,500,600 };
	int i;

	for (i = 0; i < 4; i++) {
		printf("aa[%d]==>%d\t", i, aa[i]);
	}
	printf("\n");
	for (i = 0; i < 4; i++) {
		printf("bb[%d]==>%d\t", i, bb[i]);
	}
	printf("\n");
	for (i = 0; i < 4; i++) {
		printf("cc[%d]==>%d\t", i, cc[i]);
	}
	printf("\n");
	for (i = 0; i < 4; i++) {
		printf("dd[%d]==>%d\t", i, dd[i]);
	}
	printf("\n");
	printf("bb는 %d개의 요소를 가짐\n", sizeof(bb)/sizeof(int));
	printf("ee는 %d개의 요소를 가짐\n", sizeof(ee)/sizeof(int));
}

double getAverage(int scores[], int size) {
	int i;
	double avg = 0.0;

	for (i = 0; i < size; i++) {
		avg += scores[i];
	}
	return avg / size;
}

#define STUDENT1 5
#define STUDENT2 10
void test5_2() {
	int scores1[STUDENT1] = { 100, 90, 80, 70, 50 };
	int scores2[STUDENT2] = { 100, 90, 80, 70, 50, 60, 70, 80, 10, 100 };
	double avg;

	avg = getAverage(scores1, STUDENT1);
	printf("평균은 %lf입니다.\n", avg);

	avg = getAverage(scores2, STUDENT2);
	printf("평균은 %lf입니다.\n", avg);
}

void test6_1() {
	char str[50];
	char str2[50] = { 'd','r','e','a','m','\0' };
	char str3[50] = "dream";
	char str4[50] = { 0 };

	str[0] = 'L';
	str[1] = 'O';
	str[2] = 'V';
	str[3] = 'E';

	printf("1. 널종료 문자 없이 출력: %s\n", str);
	str[4] = '\0';
	printf("2. 널종료 문자 포함 출력: %s\n", str);
	printf("3. 문자형태로 초기화된 문자열 출력: %s\n", str2);
	printf("4. 문자열형태로 초기화된 문자열 출력: %s\n", str3);

	printf("5. 문자열을 입력하시오.\n");
	scanf("%s", str4);
	printf("   => 입력된 문장 출력: %s\n", str4);
}

void test6_2() {
	char str[128] = { 0x00, };
	char converted[128] = { 0x00, };
	int len, i, j;

	printf("\n*  알파벳 (소문자) 문자열을 하나 입력하세요:\n");
	gets(str);
	printf("\n입력한 문자열은\n");
	puts(str);
	printf("\n거꾸로 출력된 문자열은: \n");
	len = strlen(str);

	for (i = len - 1, j = 0; i >= 0; i--, j++) {
		converted[j] = str[i];
	}
	converted[j] = '\0';;
	puts(converted);

	printf("\n\n대문자로 변경하여 출력된 문자열은: \n");
	for (i = 0; i < len; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			converted[i] = str[i] - 'a' + 'A';
		}
		else {
			converted[i] = str[i];
		}
	}
	converted[i] = '\0';
	puts(converted);

	printf("\n\n* 알파벳 (소문자, 대문자 포함) 문자열을 하나 입력하세요:\n");
	gets(str);
	len = strlen(str);
	for (i = 0; i < len; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			converted[i] = str[i] - 'a' + 'A';
		}
		else if (str[i] >= 'A' && str[i] <= 'Z') {
			converted[i] = str[i] - 'A' + 'a';
		}
		else {
			converted[i] = str[i];
		}
	}
	converted[i] = '\0';
	puts(converted);
}

void test7() {
	char str1[128];
	char str2[128];
	char str3[128];
	int r1, r2;

	printf("첫번째 문자열을 입력하시오\n");
	gets(str1);
	puts(str1);

	printf("두번째 문자열을 입력하시오\n");
	gets(str2);
	puts(str2);

	r1 = strlen(str1);
	r2 = strlen(str2);

	printf("첫번째 문자열의 길이: %d\n", r1);
	printf("두번째 문자열의 길이: %d\n", r2);

	if (r1 > r2) {
		strcpy(str3, str1);
	}
	else {
		strcpy(str3, str2);
	}
	printf("더 긴 문자열 출력\n");
	puts(str3);
}

void test8() {
	int comp;
	char str1[128];
	char str2[128];
	char str3[128];

	printf("\n첫번째 문자열을 입력하시오\n");
	gets(str1);

	printf("\n두번째 문자열을 입력하시오\n");
	gets(str2);

	comp = strcmp(str1, str2);
	if (comp == 0) {
		printf("\n%s, %s 문자열은 동일하다\n", str1, str2);
	}
	else if (comp == -1) {
		printf("\n%s 문자열이 %s 문자열보다 사전순으로 빠르다\n",str1, str2);
	}
	else {
		printf("\n%s 문자열이 %s 문자열보다 사전순으로 빠르다\n", str2, str1);
	}

	strcpy(str3, str1);
	strcat(str3, str2);

	printf("\n두 문자열을 붙인 결과는 %s\n", str3);
}

int main() {

	//test1();
	//test2();
	//test3();
	//test4_1();
	//test4_2();
	//test4_3();
	//test4_4();
	//test5_1();
	//test5_2();
	//test6_1();
	//test6_2();
	//test7();
	test8();


	getchar;
	return 0;
}*/