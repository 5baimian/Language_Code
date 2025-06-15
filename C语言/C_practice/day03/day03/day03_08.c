/*C08
写一函数，输入一个四位数字，要求输出这四个数字字符，但每两个数字间空格。如输入1990，应输出"1 9 9 0"。*/

/*
* 函数部分：分别获取各位上的数字,在打印时循环打印出空格
*/
//#include <stdio.h>
//void func(int num, int digit[]);
//int main()
//{
//	int num, digit[4];
//	printf("请输入一个四位数字：");
//	scanf_s("%d", &num);
//	func(num,digit);
//	printf("\n"); // 换行
//	return 0;
//}
//
//void func(int num, int digit[])
//{
//	// 获取各位数字
//	for (int i = 3; i >= 0; i--) {
//		digit[i] = num % 10; // 获取当前位数字
//		num /= 10;           // 去掉当前位数字
//	}
//	// 输出数字并添加空格
//	for (int i = 0; i < 4; i++) {
//		printf("%d", digit[i]);
//		if (i < 3) { // 最后一个数字后不加空格
//			printf(" ");
//		}
//	}
//}

