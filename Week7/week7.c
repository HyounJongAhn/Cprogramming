/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

double calbonbong(void) {
	int bonbong, bonus, total;
	double tax = 0.1;
	double real_incom;

	printf("������ ������ ���ʽ��� �Է��Ͻÿ�\n");
	scanf("%d%d", &bonbong, &bonus);

	total = bonbong + bonus;
	tax = total * tax;
	real_incom = total - tax;

	return real_incom;

}

void test() {
	int cnt_i;
	double real_incom;

	for (cnt_i = 0; cnt_i < 100; cnt_i++) {
		real_incom = calbonbong();
		printf("������ �Ǽ��Ծ��� %lf�����Դϴ�.\n\n", real_incom);
	}
}

int plus(int v1, int v2) {
	int result;
	result = v1 + v2;

	return result;
}

void test1() {
	int data1, data2;
	int hap;
	int cnt_i;

	for(cnt_i = 0; cnt_i < 3; cnt_i++) {
		printf("���� �� ���� �Է��ϼ���:\n");
		scanf("%d%d", &data1, &data2);
		hap = plus(data1, data2);
		printf("%d + %d = %d\n\n", data1, data2, hap);
	}
}

int max(int a, int b) {
	if (a > b)
	{
		return a;
	}
	else {
		return b;
	}
}


void test2() {
	int data1, data2;
	int bigger;
	int cnt_i;

	for (cnt_i = 0; cnt_i < 3; cnt_i++) {
		printf("���� �� ���� �Է��ϼ���:\n");
		scanf("%d%d", &data1, &data2);
		bigger = max(data1, data2);
		printf("%d is max value between %d and %d\n", bigger, data1, data2);
	}
}

double getArea(double c) {
	double result;

	result = c * c * 3.14;

	return result;
}

void test3() {
	int a;
	double b, ci;

	for (a = 0; a < 3; a++) {
		printf("�������� �Է��ϼ���:\n");
		scanf("%lf", &b);
		ci = getArea(b);
		printf("�������� %lf�� ���� ���� : %lf\n", b, ci);
	}
}

int isprime(int number) {
	int ret = 1;
	int c;

	if (number == 1){ 
		ret = 0;
		goto END;
	}
	for (c = 2; c < number; c++) {
		if ((number % c) == 0) {
			ret = 0;
			break;
		}
	}
END:
	return ret;
}

void test4() {
	int a;
	int cnt_i;

	for (cnt_i = 0; cnt_i < 3; cnt_i++) {
		printf("�ڿ��� �ϳ��� �Է��Ͻÿ�:\n");
		scanf("%d", &a);

		if (isprime(a) == 1) {
			printf("�Ҽ��Դϴ�.\n");
		}
		else {
			printf("�Ҽ��� �ƴմϴ�.\n");
		}
	}
}

double find_max(double num1, double num2, double num3) {
	double ret1;

	if (num1 > num2 && num1 > num3) {
		ret1 = num1;
	}
	else if(num2 > num1 && num2 > num3) {
		ret1 = num2;
	}
	else {
		ret1 = num3;
	}

	return ret1;
}

double find_min(double num1, double num2, double num3) {
	double ret2;

	if (num1 < num2 && num1 < num3) {
		ret2 = num1;
	}
	else if (num2 < num1 && num2 < num3) {
		ret2 = num2;
	}
	else {
		ret2 = num3;
	}

	return ret2;
}

void test5() {
	double a, b, c, mn;

	printf("�� ���� ���� �Է��ϼ���\n");
	printf("\nù ��° ��: ");
	scanf("%lf", &a);
	printf("�� ��° ��: ");
	scanf("%lf", &b);
	printf("�� ��° ��: ");
	scanf("%lf", &c);

	mn = find_max(a, b, c) - find_min(a, b, c);

	printf("\n���� ū ���� ���� ���� ���� = %lf\n", mn);
}

void print_divisor(int num) {
	int b;

	for (b = 2; b <= num; b++) {
		if (num % b == 0) {
			printf("%d ", b);
		}
	}
}

void test6() {
	int a;

	for (;;) {
		printf("����� ���� ������ �Է��ϼ���(1 ������ ���� ����): ");
		scanf("%d", &a);
		printf("%d�� ���� ����� ���մϴ�.\n", a);
		if (a > 1) {
			printf("%d�� ���: ", a);
			print_divisor(a);
			printf("\n\n");
		}
		else {
			printf("1�� ���� ����� ���� �� �����ϴ�.\n");
			printf("���α׷��� �����մϴ�.");
			break;
		}
	}
}

int isPerfectNumber(int num) {
	int i, j, sum;
	
	sum = 0;
	for (j = 1; j < num ; j++) {
		if (num % j == 0) {
			sum += j;
			}
		}
	if (sum == j) {
		return 1;
	}
	else {
		return 0;
	}
	
}

void test7() {
	int a, b;

	printf("1���� ū ���� �ϳ� �Է��ϼ���:\n");
	scanf("%d", &a);
	for (b = 2; b <= a; b++) {
		if (isPerfectNumber(b) == 1) {
			printf(" %d\n", b);
		}
	}
}

void prime() {
	int a = 65536;
	int m[65537]; //65537ĭ�� �ִ°��� 0~65536  1��°ĭ�� 0 1���Ҽ� 
	int i, j, b;
	for (i = 2; i <= a; i++) {
		m[i] = i;
	}
	for (i = 2; i <= a; i++) {
		if (m[i] == 0) {
			continue;
		}
		for (j = i + i; j <= a; j = j + i) {
			m[j] = 0;
		}
	}
	for (i = 2; i <= a; i++) {
		if (m[i] != 0) {
			printf("%d\n", m[i]);
		}
	}
}

int sum(int a, int b);

void test9() {
	int a = 10, b = 20;
	int ret;

	ret = sum(a, b);
	printf("%d + %d = %d", a, b, ret);
}

int sum(int a, int b) {
	int ret;
	ret = a + b;
	return ret;
}


int main() {
	//test();
	//test1();
	//test2();
	//test3();
	//test4();
	//test5();
	//test6();
	//test7();
	//test8();
	//prime();
	//test9();
	//test10();

	getchar;
	return 0;
}
*/