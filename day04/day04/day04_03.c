/*D03
输入三个字符串，按由小到大的顺序输出*/

/*
* 顺序排序：按照字典序进行排列，即ASCII码值
* 使用strcmp()函数进行比较
*/
//ASCII码值：0-9：48-57，A-Z：65-90，a-z：97-122，0-255共计256个字符，
//自己写一个比较字符串的函数my_strcmp()

//#include <stdio.h>
//#include <string.h>//strcspn()函数、strcmp函数
//
//#define MAX_num(a,b,c)  ((a)>(b)?((a)>(c)?(a):(c)):((b)>(c)?(b):(c)))
//#define MIN_num(a,b,c)  ((a)<(b)?((a)<(c)?(a):(c)):((b)<(c)?(b):(c)))
//void my_strcmp(char str1[], char str2[], char str3[]);
//int main()
//{
//	//输入两个字符串
//    	char str1[100], str2[100], str3[100];
//		printf("###请输入三个字符串###\n");
//		printf("请输入第一个字符串：\n");
//		fgets(str1, 100, stdin);
//		str1[strcspn(str1, "\n")] = '\0';
//		printf("请输入第二个字符串：\n");
//
//		fgets(str2, 100, stdin);
//		str2[strcspn(str2, "\n")] = '\0';
//		printf("请输入第三个字符串：\n");
//
//		fgets(str3, 100, stdin);
//		str3[strcspn(str3, "\n")] = '\0';
//		my_strcmp(str1, str2, str3);
//	return 0;
//}
////直接输入三个数组，然后比较大小，最后输出最大的数组
//void my_strcmp(char str1[], char str2[],char str3[])
//{
//	int num1 = 0,num2=0,num3=0,i=0;
//	int min_num=0;
//	int sum1 = 0, sum2 = 0, sum3 = 0;
//	int max_sum = 0;
//	//先找到字符个数最少的数组
//	num1 = strlen(str1);
//	num2 = strlen(str2);
//	num3 = strlen(str3);
//	min_num=MIN_num(num1, num2, num3);
//	if (min_num == num1)
//	{
//		printf("第一个字符串中字符个数最少");
//
//		//计算在数组在min_num之前个字符内，字符的ASCII码值之和
//		for (i = 0; i < min_num; i++)
//		{
//			sum1 += str1[i];
//			sum2 += str2[i];
//			sum3 += str3[i];
//		}
//		//比较ASCII码值之和的大小
//		sum2 = sum2 - sum1;
//		sum3= sum3 - sum1;
//		for (i = min_num; i < num2; i++)
//		{
//           sum2 += str2[i];
//		}
//		for (i = min_num; i < num3; i++)
//		{
//			sum3 += str3[i];
//		}
//		if (sum2 >= 0)
//		{
//			if (sum2 >= sum3)
//			{
//				if (sum3 >= 0)
//				{
//					printf("输入的三个字符串从小到大排序为：%s %s %s\n", str1, str3, str2);
//				}
//				else
//				{
//                    printf("输入的三个字符串从小到大排序为：%s %s %s\n", str3, str1, str2);
//				}
//			}
//			else
//			{
//                printf("输入的三个字符串从小到大排序为：%s %s %s\n", str1, str2, str3);
//			}
//		}
//		else
//		{
//			if (sum2 >= sum3)
//			{
//                printf("输入的三个字符串从小到大排序为：%s %s %s\n", str2, str1, str3);
//			}
//			else
//			{
//				if (sum3 >=0)
//				{
//                    printf("输入的三个字符串从小到大排序为：%s %s %s\n", str2, str1, str3);
//				}
//				else
//				{
//					printf("输入的三个字符串从小到大排序为：%s %s %s\n", str2, str3, str1);
//				}
//			}
//		}
//	}
//	else if (min_num == num2)
//	{
//		printf("第二个字符串中字符个数最少");
//
//		//计算在数组在min_num之前个字符内，字符的ASCII码值之和
//		for (i = 0; i < min_num; i++)
//		{
//			sum1 += str1[i];
//			sum2 += str2[i];
//			sum3 += str3[i];
//		}
//		//比较ASCII码值之和的大小
//		sum1 = sum1 - sum2;
//		sum3 = sum3 - sum2;
//		for (i = min_num; i < num1; i++)
//		{
//			sum1 += str1[i];
//		}
//		for (i = min_num; i < num3; i++)
//		{
//			sum3 += str3[i];
//		}
//		if (sum1 >= 0)
//		{
//			if (sum1 >= sum3)
//			{
//				if (sum3 >= 0)
//				{
//					printf("输入的三个字符串从小到大排序为：%s %s %s\n", str2, str3, str1);
//				}
//				else
//				{
//					printf("输入的三个字符串从小到大排序为：%s %s %s\n", str3, str2, str1);
//				}
//			}
//			else
//			{
//				printf("输入的三个字符串从小到大排序为：%s %s %s\n", str2, str1, str3);
//			}
//		}
//		else
//		{
//			if (sum1 >= sum3)
//			{
//				printf("输入的三个字符串从小到大排序为：%s %s %s\n", str3, str1, str2);
//			}
//			else
//			{
//				if (sum3 >= 0)
//				{
//					printf("输入的三个字符串从小到大排序为：%s %s %s\n", str1, str2, str3);
//				}
//				else
//				{
//					printf("输入的三个字符串从小到大排序为：%s %s %s\n", str1, str3, str2);
//				}
//			}
//		}
//
//	}
//	else
//	{
//		printf("第三个字符串中字符个数最少");
//
//		//计算在数组在min_num之前个字符内，字符的ASCII码值之和
//		for (i = 0; i < min_num; i++)
//		{
//			sum1 += str1[i];
//			sum2 += str2[i];
//			sum3 += str3[i];
//		}
//		//比较ASCII码值之和的大小
//		sum1 = sum1 - sum3;
//		sum2 = sum2 - sum3;
//		for (i = min_num; i < num1; i++)
//		{
//			sum1 += str1[i];
//		}
//		for (i = min_num; i < num2; i++)
//		{
//			sum2 += str2[i];
//		}
//		if (sum1 >= 0)
//		{
//			if (sum1 >= sum2)
//			{
//				if (sum2 >= 0)
//				{
//					printf("输入的三个字符串从小到大排序为：%s %s %s\n", str3, str2, str1);
//				}
//				else
//				{
//					printf("输入的三个字符串从小到大排序为：%s %s %s\n", str2, str3, str1);
//				}
//			}
//			else
//			{
//				printf("输入的三个字符串从小到大排序为：%s %s %s\n", str3, str1, str2);
//			}
//		}
//		else
//		{
//			if (sum1 >= sum2)
//			{
//				printf("输入的三个字符串从小到大排序为：%s %s %s\n", str2, str1, str3);
//			}
//			else
//			{
//				if (sum2 >= 0)
//				{
//					printf("输入的三个字符串从小到大排序为：%s %s %s\n", str1, str3, str2);
//				}
//				else
//				{
//					printf("输入的三个字符串从小到大排序为：%s %s %s\n", str1, str2, str3);
//				}
//			}
//		}
//	}
//}