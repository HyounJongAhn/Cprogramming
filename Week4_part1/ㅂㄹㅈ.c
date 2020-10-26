int main1() {
	int num, year, month, day;

	printf("학번입력하세요: ");
	scanf("%d", &num);
	printf("올해는 몇년입니까: ");
	scanf("%d", &year);
	printf("지금은 몇월입니까: ");
	scanf("%d", &month);
	printf("오늘은 며칠입니까: ");
	scanf("%d", &day);

	printf("Name: 송주원, Number: %d\n", &num);
	printf("year is %d, Month is %d, Day is %d \n", &year, &month, &day);
	printf("My blood type is B\n");

	return 0;
}