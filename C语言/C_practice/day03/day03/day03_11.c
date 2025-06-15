/*C11
输入两个整数，求他们相除的余数。用带参的宏来实现，编程序。*/
/*
* a%b 
* b%a
*/
//#include <stdio.h>
//
//#define MOD(a, b) ((a) % (b))
//#define MOD_REVERSE(a, b) ((b) % (a))
//
//int main()
//{
//	int a, b;
//	printf("请输入两个整数：\n");
//	scanf_s("%d %d", &a, &b);
//	if (b != 0) 
//	{
//		//%%是转义字符，表示输出一个%符号
//		printf("%d %% %d = %d\n", a, b, MOD(a, b));
//	} 
//	else
//	{
//		printf("除数不能为零。\n");
//	}
//	if (a != 0)
//	{
//		printf("%d %% %d = %d\n", b, a, MOD_REVERSE(a, b));
//	} else 
//	{
//		printf("除数不能为零。\n");
//	}
//	return 0;
//}