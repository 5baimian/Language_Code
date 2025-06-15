/*D08
定义一个结构体变量（包括年、月、日）。计算该日在本年中是第几天，注意闰年问题。*/

//#include <stdio.h>
// 定义结构体类型
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
//	printf("该日期在本年中是第 %d 天。\n", day_count);
//	return day_count;
//}
//
//int main()
//{
//	struct Date date;
//	printf("请输入日期（格式：年 月 日）：");
//	scanf_s("%d %d %d", &date.year, &date.month, &date.day);
//
//	day_of_year(date);
//	return 0;
//}

