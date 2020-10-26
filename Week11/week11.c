#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void test6_2_1() {
	char str[128] = { 0 };
	int len , i;

	printf("\n*  알파벳 (소문자) 문자열을 하나 입력하세요:\n");
	gets(str);
	printf("\n입력한 문자열은\n");
	puts(str);
	len = 0;
	printf("\n거꾸로 출력된 문자열은: \n");
	while (str[len] != '\0') {
		len += 1;
	}
	len -= 1;
	for (i = len; i >= 0; i--) {
		printf("%c", str[i]);
	}

	printf("\n\n대문자로 변경하여 출력된 문자열은: \n");
	for (i = 0; i < len; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			printf("%c", str[i] - 'a' + 'A');
		}
		else {
			printf("%c", str[i]);
		}
	}

	printf("\n\n* 알파벳 (소문자, 대문자 포함) 문자열을 하나 입력하세요:\n");
	gets(str);
	len = 0;
	while (str[len] != '\0') {
		len += 1;
	}
	for (i = 0; i < len; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			printf("%c", str[i] - 'a' + 'A');
		}
		else if (str[i] >= 'A' && str[i] <= 'Z') {
			printf("%c", str[i] - 'A' + 'a');
		}
		else {
			printf("%c", str[i]);
		}
	}
}

void test6_2_2() {
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
		printf("\n%s 문자열이 %s 문자열보다 사전순으로 빠르다\n", str1, str2);
	}
	else {
		printf("\n%s 문자열이 %s 문자열보다 사전순으로 빠르다\n", str2, str1);
	}

	strcpy(str3, str1);
	strcat(str3, str2);

	printf("\n두 문자열을 붙인 결과는 %s\n", str3);
}

void test6() {
#define NUM_WORDS 10
#define WORD_LEN 32

	int a, b, i, j, c, r;
	int	ran;
	char cd[NUM_WORDS];
	char wo[NUM_WORDS];
	char re[NUM_WORDS];
	char dic[NUM_WORDS][WORD_LEN] = { {'b','e','a','t','i','f','u','l','\0'}, {'d','o','g','\0'},{'c','a','s','t','l','e','\0'},{'o','r','a','n','g','e','\0'},{'a','p','p','l','e','\0'},
		{'l','e','m','o','n','\0'},{'p','i','z','z','a','\0'},{'c','h','i','c','k','e','n','\0'},{'h','a','m','b','u','r','g','e','r','\0'},{'h','o','t','d','o','g','\0'} };
	char co[15] = "";
	srand((unsigned int)time(NULL));
	ran = rand() % 10;
	for (b = 0; b < NUM_WORDS; b++) {
		wo[b] = dic[ran][b];
	}

	printf("[단어 추측 게임]\n");
	a = strlen(wo);
	printf("단어의 길이: %d\n", a);
	printf("\n");

	for (i = 0; i < a; i++) {
		co[i] = '-';
	}

	for (j = 1; j < 6; j++) {
		printf("[%03d 시도] 알파벳을 하나 입력하세요:", j);
		gets(cd);

		for (c = 0; c < a; c++) {
			if (wo[c] == cd[0]) {
				co[c] = cd[0];
			}
		}
		puts(co);
		printf("\n");

		printf("정답을 맞춰보세요:\n");
		gets(re);
		r = strcmp(re, wo);

		if (r == 0) {
			printf("정답입니다: %s\n", wo);
			printf("You win!\n");
			break;
		}
		else {
			printf("틀렸습니다 -_-\n");
			printf("\n");
			continue;
		}
	}
}
int main() {

	//test6_2_1();
	//test6_2_2();
	//test7();
	//test8();
	test6();

	getchar;
	return 0;
}