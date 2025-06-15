/*C15
分别用函数和带参的宏，从三个数中找出最大的数。*/

//#include <stdio.h>
////带参的宏
//#define MAX(a, b, c) ((a) > (b) ? ((a) > (c) ? (a) : (c)) : ((b) > (c) ? (b) : (c)))
//
//int max_value_func(int x, int y, int z);
//int main()
//{
//	int a, b, c;
//	printf("请输入三个整数：\n");
//	scanf_s("%d %d %d", &a, &b, &c);
//	
//	// 使用宏计算最大值
//	int max_value_macro = MAX(a, b, c);
//	printf("使用宏计算的最大值是：%d\n", max_value_macro);
//	// 使用函数计算最大值
//	int max_value = max_value_func(a, b, c);
//	printf("使用函数计算的最大值是：%d\n", max_value);
//	return 0;
//}
//
//
//int max_value_func(int x, int y, int z) 
//{
//	return (x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z);//三目运算符实现
//}