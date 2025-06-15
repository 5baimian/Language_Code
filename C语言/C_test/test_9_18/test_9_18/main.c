#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<limits.h>
#include<stdlib.h>//system
#include<string.h>//strcmp
//写一个关机程序，程序运行，你的电脑在一分钟后关机，如果输入：我是猪，就取消关机
int main()
{
	//关机
	//system()--专门用来执行系统命令的
	char input[20] = { 0 };//存储数据
	system("shutdown -s -t 60");//关机
again:
	printf("请注意，你的电脑将在一分钟之内关机，如果输入：我是猪，就取消关机\n");
	scanf("%s", input); //%s-字符串
	if (strcmp(input, "我是猪") == 0)//判断input中存放的是不是“我是猪”，strcmp--string compare
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}

	return 0;
}





//leetcode-考算法
//题面：给出一个非空整型数组，除了某个元素只出现一次以外，其余每个元素均出现两次，
//找出那个只出现一次的元素
//样例：int a[]={1,2,3,4,5,1,2,3,4},该数组中只有5出现一次，其他数字都是成对出现的，要找出5


//异或的方法：a^a=0;0^a=a
//3^5^3=5
//3^3^5=5
//异或是满足交换律的
//int main()
//{
//	int arr[] = { 1,2,3,4,5,7,5,1,2,3,4 };
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的元素的个数
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("只出现一次的数字是：%d\n", ret);
//	return 0;
//}




////暴力求解
//int main()
//{
//	int arr[] = { 1,2,3,4,5,7,5,1,2,3,4 };
//	//找出单身狗
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的元素的个数
//	for (i=0;i<sz;i++)
//	{
//		//统计arr[i]在arr数组当中出现的次数
//		int count = 0;//计数器
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("出现一次的数字是：%d\n", arr[i]);
//		}
//	}
//	return 0;
//}




//在企业中会采用第三个变量的方法，代码的可读性高，执行效率高
//异或的操作可读性差，执行效率低于其他方法

//交换两个int变量的值，不能使用第三个变量，即a=3,b=5,交换之后a=5,b=3

//不会溢出，不会产生进位
//int main()
//{
//	int a = 3;//011
//	int b = 5;//101
//	printf("交换前：a=%d,b=%d\n", a, b);
//	//按二进制进行异或处理--对应的二进制位相同则为0，对应的二进制位相异则为1
//	a = a ^ b;
//	//a=110=6
//	b = a ^ b;
//	//110
//	//101
//	//b=011=3
//	a = a ^ b;
//	//110
//	//011
//	//a=101
//	printf("交换后：a=%d,b=%d\n", a, b);
//	return 0;
//}




//存在整型溢出的问题--只能解决较小值的问题
//int--四个字节--32个比特位--最大值
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//INT_MAX;2147483647
//	printf("交换前：a=%d,b=%d\n", a, b);
//	a = a + b;//b不变
//	b = a - b;//b得到原来的a
//	a = a - b;//a得到原来的b
//	printf("交换后：a=%d,b=%d\n", a, b);
//	return 0;
//}





//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	printf("交换前：a=%d,b=%d\n", a, b);
//	c = a;
//	a = b;
//	b = c;
//	printf("交换后：a=%d,b=%d\n", a, b);
//	return 0;
//}