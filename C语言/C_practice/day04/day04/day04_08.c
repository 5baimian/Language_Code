/*D08
����һ���ṹ������������ꡢ�¡��գ�����������ڱ������ǵڼ��죬ע���������⡣*/

//#include <stdio.h>
// ����ṹ������
//struct Date {
//	int year;
//	int month;
//	int day;
//};
//
//int isLeapYear(int year) {
//	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//}
//
//int day_of_year(struct Date date) {
//	int days_in_month[12] = { 31, isLeapYear(date.year) ? 29 : 28, 31, 30, 31, 30, 
//							 31, 31, 30, 31, 30, 31 };
//	int day_count = date.day;
//	for (int i = 0; i < date.month ; i++) {
//		day_count += days_in_month[i];
//	}
//	printf("�������ڱ������ǵ� %d �졣\n", day_count);
//	return day_count;
//}
//
//int main()
//{
//	struct Date date;
//	printf("���������ڣ���ʽ���� �� �գ���");
//	scanf_s("%d %d %d", &date.year, &date.month, &date.day);
//
//	day_of_year(date);
//	return 0;
//}

