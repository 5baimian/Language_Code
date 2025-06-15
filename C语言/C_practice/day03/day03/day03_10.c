/*C10
定义一个带参的宏，使两个参数的值互换，并写出程序，输入两个数作为使用宏时的实参。
输出已交换后的两个值。*/

/*
* 定义一个带参的宏:使用宏定义定义一个函数
*/
//#include <stdio.h>
////创建临时变量进行交换
//#define swap(x,y,temp){temp=x;x=y;y=temp;}
////不创建临时变量进行交换
//#define swap2(x,y){x=x+y;y=x-y;x=x-y;}
//int main()
//{
//	int a, b, temp;
//	printf("请输入两个整数: ");
//	scanf_s("%d %d", &a, &b);
//	
//	swap2(a, b); // 使用宏交换a和b的值
//	
//	printf("交换后的两个值为: %d %d\n", a, b);
//	
//	return 0;
//}