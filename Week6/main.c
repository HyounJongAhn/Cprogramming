#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void test() {
	int input;
	printf("���� �ϳ��� �Է��ϼ���.");
	scanf("%d", &input);

	if (input > 100) {
		printf("100���� ŭ\n");
	}
	else {
		printf("100���� ���ų� ����\n");
	}
}

void test1() {
	double weight, height;
	double bmi;

	printf("�����Ը� �Է��ϼ���(kg) : ");
	scanf("%lf", &weight);
	printf("Ű�� �Է��ϼ���(cm) : ");
	scanf("%lf", &height);
	
	height /= 100;
	bmi = weight / (height * height);
	printf("����� BMI: %lf\n", bmi);

	if (bmi >= 20.0 && bmi < 25.0) {
		printf("ǥ��ü���Դϴ�\n");
	}
	else {
		printf("ü�߰����� �ʿ��մϴ�\n");
	}
}

void test2() {
	double score;
	char grade;

	printf("��� ������ �Է��ϼ���: ");
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
	
	printf("����: %c\n", grade);
}

void test3() {
	int input;

	printf("���ڸ� �ϳ� �Է��ϼ���:\n");
	scanf("%d", &input);

	if (input > 50) {
		if (input < 100) {
			printf("50���� ũ�� 100���� �۽��ϴ�\n");
		}
		else {
			printf("100���� ũ�ų� �����ϴ�\n");
		}
	}
	else {
		printf("50�� ���ų� �۽��ϴ�\n");
	}
}

void test4() {
	int lot;
	printf("��÷��ȣ�� �Է��ϼ���: ");
	scanf("%d", &lot);

	switch (lot) {
	case 1:
		printf("���缮 ��÷\n");
		break;
	case 2: 
		printf("�躴�� ��÷\n");
		break;
	case 3:
		printf("������ ��÷\n");
		break;
	default:
		printf("��÷�ڰ� �����ϴ�.\n");
		break;
	}


	/*if (lot == 1) {
		printf("���缮 ��÷\n");
	}
	else if (lot == 2) {
		printf("�躴�� ��÷\n");
	}
	else if (lot == 3) {
		printf("������ ��÷\n");
	}
	else {
		printf("��÷�ڰ� �����ϴ�.\n");
	}*/
}

void test5() {
	int cnt_i;
	int data = 0;
	int sum = 0;
	
	printf("���ڸ� �ϳ� �Է��ϼ���:\n");
	scanf("%d", &data);
	for (cnt_i = 1; cnt_i <= data; cnt_i++) {
		sum += cnt_i;
		printf("cnt_i: %d, sum: %d\n", cnt_i, sum);
	}
	printf("1���� %d������ ���� : %d", data, sum);
}

void test6() {
	int cnt_i;
	int data = 0;

	printf("���ڸ� �ϳ� �Է��ϼ���:\n");
	scanf("%d", &data);
	
	printf("1���� %d ���� �� Ȧ���� :\n", data);
	for (cnt_i = 1; cnt_i <= data; cnt_i++) {
		if (cnt_i & 1) {
			printf("%d\n", cnt_i);
		}
	}
}

void test7() {
	int cnt_i;
	int data = 0;

	printf("���ڸ� �ϳ� �Է��ϼ���:\n");
	scanf("%d", &data);

	printf("1���� %d ���� �� Ȧ���� :\n", data);
	for (cnt_i = 1; cnt_i <= data; cnt_i= cnt_i + 2) {

		printf("%d\n", cnt_i);
	}
}

void test8() {
	int en, ma, cl;
	double py, bo;

	printf("���� �����Է�:");
	scanf("%d", &en);
	printf("���� �����Է�:");
	scanf("%d", &ma);
	printf("C�����Է�:");
	scanf("%d", &cl);

	printf(" ��������а� ������\n");
	printf(" ���� : %d\n", en);
	printf(" ���� : %d\n", ma);
	printf(" c��� : %d\n", cl);

	py = (en + ma + cl) / 3;
	bo = (((en - py) * (en - py)) + ((ma - py) * (ma - py)) + ((cl - py) * (cl - py))) / 3;
	printf(" ��� : %lf\n", py);
	printf(" �л� : %lf\n", bo);
}

void test11() {
	int sum = 0;
	int to;
	int cnt_i;
	
	printf("����� �ϳ� �Է��ϼ���:\n");
	scanf("%d", &to);

	cnt_i = 1;
	while (cnt_i <= to) {
		sum = sum + cnt_i;
		cnt_i++;
	}
	printf("1���� %d������ ��: %d", to, sum);
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
		printf("���� �� �� �Է� (���߷��� 0�� �Է�) : ");
		scanf("%d %d", &a, &b);

		if (a == 0)
			break;

		printf("%d + %d = %d \n", a, b, a + b);
	}

	printf("0�� �Է��ؼ� for ���� Ż���߽��ϴ�.\n");
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
	printf("1���� %d���� ���ϸ� 2000�� �ѽ��ϴ�.\n", cnt_i);
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