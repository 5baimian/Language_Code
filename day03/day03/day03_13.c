/*C13
给年份year，定义一个宏，以判别该年份是否闰年。
提示：宏名可以定义为LEAP_YEAR，形参为y，
既定义宏的形式为 #define LEAP_YEAR(y) （读者设计的字符串）*/

/*
* 判断闰年的规则是：
* 1、d能被4整除但不能被100整除
* 2、d能被400整除
*/

//#include <stdio.h>
//
//#define LEAP_YEAR(y) ((y) % 4 == 0 && (y) % 100 != 0 || (y) % 400 == 0)
//
//int main() {
//	int year;
//	printf("请输入年份: ");
//	scanf_s("%d", &year);
//	
//	if (LEAP_YEAR(year)) {
//		printf("%d 是闰年。\n", year);
//	} else {
//		printf("%d 不是闰年。\n", year);
//	}
//	
//	return 0;
//}