#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void test() {
	int input;
	printf("숫자 하나를 입력하세요.");
	scanf("%d", &input);

	if (input > 100) {
		printf("100보다 큼\n");
	}
	else {
		printf("100보다 같거나 작음\n");
	}
}

void test1() {
	double weight, height;
	double bmi;

	printf("몸무게를 입력하세요(kg) : ");
	scanf("%lf", &weight);
	printf("키를 입력하세요(cm) : ");
	scanf("%lf", &height);
	
	height /= 100;
	bmi = weight / (height * height);
	printf("당신의 BMI: %lf\n", bmi);

	if (bmi >= 20.0 && bmi < 25.0) {
		printf("표준체중입니다\n");
	}
	else {
		printf("체중관리가 필요합니다\n");
	}
}

void test2() {
	double score;
	char grade;

	printf("평균 점수를 입력하세요: ");
	scanf("%lf", &score);

	if (score >= 90.0) {
		grade = 'A';
	}
	else if (score >= 80.0) {
		grade = 'B';
	}
	else if (score >= 70.0) {
		grade = 'c';
	}
	else if (score >= 60.0) {
		grade = 'D';
	}
	else {
		grade = 'F';
	}
	
	printf("학점: %c\n", grade);
}

void test3() {
	int input;

	printf("숫자를 하나 입력하세요:\n");
	scanf("%d", &input);

	if (input > 50) {
		if (input < 100) {
			printf("50보다 크고 100보다 작습니다\n");
		}
		else {
			printf("100보다 크거나 같습니다\n");
		}
	}
	else {
		printf("50과 같거나 작습니다\n");
	}
}

void test4() {
	int lot;
	printf("당첨번호를 입력하세요: ");
	scanf("%d", &lot);

	switch (lot) {
	case 1:
		printf("유재석 당첨\n");
		break;
	case 2: 
		printf("김병만 당첨\n");
		break;
	case 3:
		printf("유병재 당첨\n");
		break;
	default:
		printf("당첨자가 없습니다.\n");
		break;
	}


	/*if (lot == 1) {
		printf("유재석 당첨\n");
	}
	else if (lot == 2) {
		printf("김병만 당첨\n");
	}
	else if (lot == 3) {
		printf("유병재 당첨\n");
	}
	else {
		printf("당첨자가 없습니다.\n");
	}*/
}

void test5() {
	int cnt_i;
	int data = 0;
	int sum = 0;
	
	printf("숫자를 하나 입력하세요:\n");
	scanf("%d", &data);
	for (cnt_i = 1; cnt_i <= data; cnt_i++) {
		sum += cnt_i;
		printf("cnt_i: %d, sum: %d\n", cnt_i, sum);
	}
	printf("1부터 %d까지의 합은 : %d", data, sum);
}

void test6() {
	int cnt_i;
	int data = 0;

	printf("숫자를 하나 입력하세요:\n");
	scanf("%d", &data);
	
	printf("1부터 %d 범위 중 홀수는 :\n", data);
	for (cnt_i = 1; cnt_i <= data; cnt_i++) {
		if (cnt_i & 1) {
			printf("%d\n", cnt_i);
		}
	}
}

void test7() {
	int cnt_i;
	int data = 0;

	printf("숫자를 하나 입력하세요:\n");
	scanf("%d", &data);

	printf("1부터 %d 범위 중 홀수는 :\n", data);
	for (cnt_i = 1; cnt_i <= data; cnt_i= cnt_i + 2) {

		printf("%d\n", cnt_i);
	}
}

void test8() {
	int en, ma, cl;
	double py, bo;

	printf("영어 성적입력:");
	scanf("%d", &en);
	printf("수학 성적입력:");
	scanf("%d", &ma);
	printf("C언어성적입력:");
	scanf("%d", &cl);

	printf(" 정보통신학과 정보통\n");
	printf(" 영어 : %d\n", en);
	printf(" 수학 : %d\n", ma);
	printf(" c언어 : %d\n", cl);

	py = (en + ma + cl) / 3;
	bo = (((en - py) * (en - py)) + ((ma - py) * (ma - py)) + ((cl - py) * (cl - py))) / 3;
	printf(" 평균 : %lf\n", py);
	printf(" 분산 : %lf\n", bo);
}

void test11() {
	int sum = 0;
	int to;
	int cnt_i;
	
	printf("양수를 하나 입력하세요:\n");
	scanf("%d", &to);

	cnt_i = 1;
	while (cnt_i <= to) {
		sum = sum + cnt_i;
		cnt_i++;
	}
	printf("1에서 %d까지의 합: %d", to, sum);
}

void test12() {
	int menu;

	do {
		printf("\nWhich beverage?\n");
		printf("<1> Coffee <2> Tee <3> Juice <4> Stop\n");
		scanf("%d", &menu);

		switch (menu) {
		case 1:
			printf("Coffee is ordered\n");
			break;
		case 2:
			printf("Tea is ordered\n");
			break;
		case 3:
			printf("Juice is ordered\n");
			break;
		case 4:
			printf("Stop\n");
			break;
		default:
			printf("Wrong order\n");
			break;
		}
	} while (menu != 4);
}

void test13() {
	int a, b;

	while (1) {
		printf("더할 두 수 입력 (멈추려면 0을 입력) : ");
		scanf("%d %d", &a, &b);

		if (a == 0)
			break;

		printf("%d + %d = %d \n", a, b, a + b);
	}

	printf("0을 입력해서 for 문을 탈출했습니다.\n");
}

void test14() {
	int hap = 0;
	int cnt_i;

	for (cnt_i = 1; cnt_i <= 100; cnt_i++) {
		hap += cnt_i;

		if (hap > 2000) {
			goto mygoto;
			//break;
		}
	}

	printf("hahahahahahaha");
	printf("hohohohohohoho");

mygoto:
	printf("1부터 %d까지 합하면 2000이 넘습니다.\n", cnt_i);
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
	//test11();
	//test12();
	//test13();
	test14();
	//test15();

	getchar;
	return 0;
}