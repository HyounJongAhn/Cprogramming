/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "userfunc.h"


void test4() {
	int a = 10, b = 20;
	int ret;

	ret = sum(a, b);
	printf("%d + %d = %d", a, b, ret);
}

void test5() {
	printf("1. %d\n", 123);
	printf("2. %5d\n", 123);
	printf("3. %05d\n", 123);
	printf("4. %x\n", 123);
	printf("5. %X\n", 123);
	printf("6. %08X\n", 123);
	
	printf("7. %f\n", 123.45);
	printf("8. %7.1f\n", 123.45);
	printf("9. %7.3f\n", 123.45);

	printf("10. %s\n", "Basic-C");
	printf("11. %20s\n", "Basic-c");

}

void test6() {
	printf("\n줄바꿈\n연습\n");
	printf("\t탭키\t연습\n");
	printf("이것을\r덮어씁니다\n");
	printf("\a\a\a삐소리 3번\n");
	printf("글자가 \"강조\"되는 효과\n");
	printf("\\\\\\ 역슬래쉬 세개 출력\n");
	printf("\"");
}

void test7() {
	int a;
	unsigned int b;
	char c;
	char string[128];
	double real;

	scanf("%c", &c);
	printf("%c\n",c);

	scanf("%d", &a);
	printf("%d\n",a);

	scanf("%x", &b);
	printf("%x\n",b);

	scanf("%lf", &real);
	printf("%lf\n",real);

	scanf("%s", string);
	printf("%s\n", string);

}

void test8() {

	int a, b, i, j;

	srand((unsigned int)time(NULL));

	for (i = 0; i <= 2; i++) {
		printf("[%d] 6개의 난수생성\n", i+1);
		for (j = 0; j <= 5; j++) {
			printf("%d ", 1 + rand() % 45);
		}
		printf("\n\n");
	}
}

int fact(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n * fact(n - 1);
	}
}

int fact1(int n) {
	int total = 1;
	int cnt_i;

	for (cnt_i = 1; cnt_i <= n; cnt_i++) {
		total *= cnt_i;
	}
	return total;
}

void test9() {
	int num;

	printf("하나의 정수를 입력하세요:\m");
	scanf("%d", &num);
	printf("%d! = %d\n", num, fact(num));
}

int factorial(int n) {
	if (n == 1)
	{
	return 1;
	}
	else
	{
		return n + factorial(n - 1);
	}
}

void test10() {
	int num;

	printf("Enter a positive integer.\n");
	scanf("%d", &num);
	printf("Factorial of %d is %d.\n", num, factorial(num));

}

void gcd1() {
	int i, j, a = 0, b = 0,e=0, t=0, c, r;
	for (i = 0; i < 3; i++) {
		printf("두 수를 입력하세요: ");
		scanf("%d %d", &a, &b);
		e = a;
		t = b;

		for (; ;) {
			r = a % b;

			if (r != 0) {
				a = b;
				b = r;
			}
			else {
				c = b;
				break;
			}
		}
		printf("%d=gcd(%d,%d)", c, e, t);
		printf("\n\n");
	}
}
void gcdfc(int a, int b) {
	int c, r = 0, t = 0, e = 0;
	a = t;
	b = e;

	r = a % b;

	if (r != 0) {
		
		a = b;
		b = r;
		gcdfc(a, b);
	}
	else {
		c = b;
		printf("%d=gcd(%d,%d)",c, e, t);
	}
}

void gcd2() {
	int a, b, c;
	for (a = 0; a < 3; a++) {
		printf("두 수를 입력하세요: ");
		scanf("%d %d", &b, &c);
		gcdfc(b, c);
	}
}


int am = 100;
void func1() {
	int am = 200;
	printf("func1()에서 a의 값: %d\n", am);
}

void func2() {
	printf("func2()에서 a의 값: %d\n", am);
}

void test12() {
	func1();
	printf("main()에서 a의 값: %d\n", am);

	am = 300;
	func2();
}

void increase() {
	static int sum1 = 0;
	int sum2 = 0;

	sum1++;
	sum2++;

	printf("sum1: %d, sum2: %d\n", sum1, sum2);
}

void test13()  {
	int cnt_i;
	for (cnt_i = 0; cnt_i < 5; cnt_i++) {
		increase();
	}
}

int main() {
	//test4();
	//test5();
	//test6();
	//test7();
	//test8();
	//test9() ;
	//test10();
	//test11();
	//test12();
	//test13();
	//gcd1();
	//gcd2();

	getchar;
	return 0;
}*/