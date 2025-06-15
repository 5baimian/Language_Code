/*C09
编写一函数，由实参传来一个字符串，统计此字符串中字母、数字、空格和其它字符的个数，在主函数中输入字符串以及输出上述结果。
只要结果，别输出什么提示信息。*/

/*
* if判断 
* fgets()函数
* 数据的传参，函数只可以返回一个值，不过可以通过指针传递多个值
*/

//#include <stdio.h>
//#include <string.h>
//void func(char str[], int* letters, int* digits, int* spaces, int* others);
//int main()
//{
//	char str[100];
//	int letters = 0, digits = 0, spaces = 0, others = 0;
//	fgets(str, sizeof(str), stdin); // 输入字符串
//	str[strcspn(str,"\n")]="\0"; // 去除换行符
//
//	func(str,&letters,&digits,&spaces,&others);
//
//	printf("%d %d %d %d\n", letters, digits, spaces, others);
//	return 0;
//}
//void func(char str[],int *letters, int *digits, int *spaces, int *others)
//{
//	for (int i = 0; str[i] != '\0'; i++)
//	{
//		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
//		{
//			(*letters)++;
//		}
//		else if (str[i] >= '0' && str[i] <= '9')
//		{
//			(*digits)++;
//		}
//		else if (str[i] == ' ') 
//		{
//			(*spaces)++;
//		}
//		else
//		{
//			(*others)++;
//		}
//	}
//}