#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

/*void test1() {

	int bonbong, bonus, total;
	double tax, real_incom;

	bonbong = 150;
	bonus = 60;

	total = bonbong + bonus;

	tax = total * 0.08;
	real_incom = total - tax;

	printf("실수입 : %lf\n", real_incom);

}*/

/*void test2() {
	int salary = 0;
	double tax = 0.0f;
	double realIncom = 0.0f;

	printf("월급을 입력하세요:\n");
	scanf("%d", &salary);

	printf("세율을 입력하세요(0.0~1.0):\n");
	scanf("%lf", &tax);

	tax = tax * salary;
	realIncom = salary - tax;

	printf("실수입: %lf\n", realIncom);
}*/

/*void test3() {
	char blood_type;

	printf("혈액형을 입력하세요:\n");
	scanf("%c", &blood_type);
	printf("당신의 혈액형은 %c\n", blood_type);
}*/

void test() {
	char a = 'A';
	char b = 65;
	int c = 65;

	printf("%d\n", a);
	printf("%c\n", a);
	printf("%d\n", b);
	printf("%c\n", b);
	printf("%d\n", c);
	printf("%c\n", c);
} 

/*void test4(void) {
	char firstChar = 0x00;
	char nextChar = 0x00;

	printf("알파벳 문자를 하나 입력하라(A~Y 까지)\n");
	scanf("%c", &firstChar);
	nextChar = firstChar + 1;
	
	printf("You entered %c, next character is %c\n", firstChar, nextChar);
}*/

/*void test5(void) {
	char id[32];
	char name[32];
	char major[32];
	int age = 0x00;
	double height = 0.0f;

	printf("학번을 입력하세요: \n");
	scanf("%s", id);

	printf("이름을 입력하세요: \n");
	scanf("%s", name);

	printf("전공을 입력하세요: \n");
	scanf("%s", major);

	printf("나이를 입력하세요: \n");
	scanf("%d", &age);

	printf("키를 입력하세요: \n");
	scanf("%lf", &height);

	printf("학번: %s, 이름: %s, 전공: %s, 나이: %d, 키: %lf\n", id, name, major, age, height);
}*/

/*void test6() {

	double day;
	int hour, min, sec;

	printf("계산하고자 하는 날짜 수를 입력하시오\n");
	scanf("%lf", &day);

	day = day * 24;

	hour = (int)day;
	day = day - hour;
	day = day * 60;

	min = (int)day;
	day = day - min;
	day = day * 60;

	sec = (int)day;

	printf("변환된 시간은: %d시간, %d분, %d초입니다.\n", hour, min, sec);
}*/

/*void test7() {
	int pay, cost, change;
	int w1000, w500, w100, w50, w10;

	printf("물건 가격을 입력하세요: \n");
	scanf("%d", &cost);

	printf("돈을 입력하세요: \n");
	scanf("%d", &pay);

	change = pay - cost;

	w1000 = change / 1000;
	change = change % 1000;

	w500 = change / 500;
	change = change % 500;

	w100 = change / 100;
	change = change % 100;

	w50 = change / 50;
	change = change % 50;

	w10 = change / 10;

	printf("1000원짜리 지폐 %d개\n", w1000);
	printf("500원짜리 동전 %d개\n", w500);
	printf("100원짜리 동전 %d개\n", w100);
	printf("50원짜리 동전 %d개\n", w50);
	printf("10원짜리 동전 %d개\n", w10);
}*/

/*void test8() {
	char c;
	short s;
	int i;
	long l;
	long long ll;
	float f;
	double lf;
	long double llf;

	printf("\n char c size = %d", sizeof(c));
	printf("\n short s size = %d", sizeof(s));
	printf("\n int i size = %d", sizeof(i));
	printf("\n clong l size = %d", sizeof(l));
	printf("\n long long l size = %d", sizeof(ll));
	printf("\n cfloat f size = %d", sizeof(f));
	printf("\n double lf size = %d", sizeof(lf));
	printf("\n long double llf size = %d\n", sizeof(llf));
}*/

/*void test9() {
	char signed_ch = 0xff;
	short signed_sh = 0xffff;
	int signed_int = 0xffffffffff;

	unsigned char unsigned_ch = 0xff;
	unsigned short unsigned_sh = 0xffff;
	unsigned int unsigned_int = 0xfffffffff;

	printf("signed char: %d, unsigned signed char: %u\n", signed_ch, unsigned_ch);
	printf("signed short: %d, unsigned signed short: %u\n", signed_sh, unsigned_sh);
	printf("signed int: %d, unsigned signed int: %u\n", signed_int, unsigned_int);
}*/

/*void test10() {
	int cnt_i = 0x00;
	char signed_ch=0x00;
	unsigned char unsigned_ch = 0x00;

	for (cnt_i = 0; cnt_i < 512; cnt_i++)
	{
		signed_ch = (char)cnt_i;
		unsigned_ch = (unsigned char)cnt_i;

		printf("[%d] signed char: %d, unsigned char: %u\n", cnt_i, signed_ch, unsigned_ch);
	}
}*/

/*void test11() {
	double exact;

	exact = 0.1234567890123456789;

	printf("0.5e1 -> %lf\n", 0.5e01);
	printf("-2.002e3 -> %lf\n", -2.002e3);
	printf("14142e-4 -> %lf\n", 14142e-4);

	printf("10002.0를 지수형태로 출력 -> %le\n", 10002.0);
	printf("10002.0를 지수형태로 출력 -> %le\n", 10002.0);
	
	printf("유효숫자 체크 : %.20lf\n", exact);
}*/


int main() {
	//test1();	
	//test2();
	//test3();
	test();
	//test4();
	//test5();
	//test6();
	//test7();
	//test8();
	//test9();
	//test10();
	//test11();

	getchar();
	return 0;
}