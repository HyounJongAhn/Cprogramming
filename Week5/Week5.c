#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void test() {
	int a, b, c;
	int result1, mok, namugi;
	double result2;

	printf("�� ������ �Է��Ͻÿ�\n");
	scanf("%d%d%d", &a, &b, &c);

	result1 = a + b - c;
	printf("%d + %d - %d = %d\n", a, b, c, result1);

	result1 = a + b * c;
	printf("%d + %d * %d = %d\n", a, b, c, result1);

	result2 = a * b / (double)c;
	printf("%d * %d / %d = %lf\n", a, b, c, result2);

	mok = c / b;
	printf("%d / %d�� ���� %d\n", c, b, mok);

	namugi = c % b;
	printf("%d %% %d�� �������� %d\n", c, b,  namugi);
	
}

void test1() {
	int a = 10;
	int b = 20;
	int c = 0;

	a++;
	printf(" a++ ==> %d\n", a);

	a--;
	printf(" a-- ==> %d\n", a);

	a += 5 ;
	printf(" a += 5 ==> %d\n", a);

	a -= 5;
	printf(" a -= 5 ==> %d\n", a);

	a *= 5;
	printf(" a *= 5 ==> %d\n", a);

	a /= 5;
	printf(" a /= 5 ==> %d\n", a);

	a %= 5;
	printf(" a %%= 5 ==> %d\n", a);

	c = b++;;
	printf(" c = b++ ==> %d\n", c);

	c = ++b;
	printf(" c = ++b ==> %d\n", c);
}

void test2() {
	int a;
	printf("�������� �����ϳ��� �Է��ϼ���\n");
	scanf("%d", &a);
	printf("%d %d %d %d %d\n", 
		a % 10, (a / 10) % 10, (a / 100) % 10, (a / 1000) % 10, (a / 10000)); 
}

void test3() {
	double f_temp, c_temp;
	printf("ȭ�� �µ��� �Է��Ͻÿ�:\n");
	scanf("%lf", &f_temp);
	c_temp = 5.0 / 9.0 * (f_temp - 32);
	printf("���� �µ��� %lf�Դϴ�.\n", c_temp);
}

void test4() {
	int a = 0, b = 0;
	
	printf("Input two numvers:\n");
	scanf("%d%d", &a, &b);
	
	printf(" %d == %d�� %d �̴�.\n", a, b, a == b);
	printf(" %d != %d�� %d �̴�.\n", a, b, a != b);
	printf(" %d > %d�� %d �̴�.\n", a, b, a > b);
	printf(" %d < %d�� %d �̴�.\n", a, b, a < b);
	printf(" %d >= %d�� %d �̴�.\n", a, b, a >= b);
	printf(" %d <= %d�� %d �̴�.\n", a, b, a <= b);

	printf(" %d = %d�� %d �̴�.\n", a, b, a = b);
}

void test5() {
	int a = 0, b = 0;

	printf("Input two numbers:\n");
	scanf("%d%d", &a, &b);

	printf("AND ���� : %d\n", (a >= 100) && (a <= 200));
	printf("OR ���� : %d\n", (a >= 100) || (a <= 200));
	printf("NOT ���� : %d\n", !(a == 100));

	printf("AND ���� : %d\n", a&&b);
	printf("AND ���� : %d\n", a || b);
	printf("AND ���� : %d\n", !a);

}

void test6() {
	int a = 0, b = 0;

	printf("Input two numbers:\n");
	scanf("%d%d", &a, &b);

	printf("a(%08x) & b(%08x) = %08x\n",a, b, a&b);
	printf("a(%08x) | b(%08x) = %08x\n", a, b, a|b);
	printf("a(%08x) | b(%08x) = %08x\n", a, b, a^b);
}

void test7(void) {
	unsigned int a, b;
	printf("�� ���� �Է��ϼ���\n");
	scanf("%d%d", &a, &b);
	printf("%08x = %08x & %08x\n", a & b, a, b);
	printf("%08x = %08x | %08x\n", a | b, a, b);
	printf("%08x = %08x | %08x\n", a ^ b, a, b);
	printf("%08x = a's one's complement\n", (~a));
	printf("%08x = a's two's complement\n", (~a+1));
	printf("%08x = b's one's complement\n", (~b));
	printf("%08x = b's two's complement\n", (~b+1));
}

void test8(void) {
	unsigned int A, B;

	printf("�� �� A, B�� �Է��ϼ���\n");
	scanf("%x%x", &A, &B);
	printf("%08x = %08x << %d\n", A << B, A, B);
	printf("%08x = %08x >> %d\n", A >> B, A, B);	   
}

void test9(void) {
	unsigned int A, B;
	printf("�� �� A, B�� �Է��ϼ���\n");
	scanf("%x%x", &A, &B);
	printf("%08x = %08x <<R %d\n", (A << B)|(A >> (32-B)), A, B);
	printf("%08x = %08x >>R %d\n", (A << (32-B))|(A >> B), A, B);
}

void test10(void) {
	short x = 0x1111;
	printf("%hx\n", x & ~x);
	printf("%hx\n", x | ~x);
	printf("%hx\n", x ^ ~x);
	printf("%hx\n", x ^ 0xffff);
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
	test9();
	//test10();

	getchar();
	return 0;
}