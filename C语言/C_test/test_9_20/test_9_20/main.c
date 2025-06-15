#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//c语言是一门结构化的程序设计语言
//1.顺序结构
//2.选择结构
//3.循环结构 

//循环语句

int main()
{
	int ch = 0;
	//ctrl+z--结束程序
	//EOF--end of file->-1
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}





//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		i++;
//		if (5 == i)
//			//break;//停止，跳出while循环
//			continue;//用于终止本次循环，直接进入while的判断部分，进行下一次循环
//		printf("%d\n", i);
//		
//	}
//	return 0;
//}







//分支语句（选择结构）
//switch语句--适用于多分支的情况
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;//m=3
//	case 2:n++;//n=2
//	case 3:
//		switch (n)
//		{
//			//switch允许嵌套使用
//		case 1:n++;
//		case 2:m++; n++; break;//m=4,n=3
//		}
//	case 4:m++;//m=5,n=3
//		break;
//	default:
//		break;
//	}
//	printf("m=%d  n=%d\n",m,n);
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	int n = 1;
//	scanf("%d", &day);
//	switch (day)//day--必须是整型
//	{
//	case 1://1--整型常量表达式
//	//	printf("星期一\n");
//	//	break;
//		if (n == 1)
//		{
//			printf("hehe\n");
//		}
//	case 2:
//	//	printf("星期二\n");
//	//	break;
//	case 3:
//	//	printf("星期三\n");
//	//	break;
//	case 4:
//	//	printf("星期四\n");
//	//	break;
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	//	printf("星期六\n");
//	//	break;
//	case 7:
//		printf("休息日\n");
//		break;//加break;,良好的编程风格
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}




//1.判断一个数是奇数
//2.输出1-100之间的奇数

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		int a = i % 2;
//		if (a == 1)
//		{
//			printf("i为奇数，i=%d\n", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int num = 4;
//	if (num = 5)//赋值=，判断相等==，此时都会执行呵呵
//		//当判断常量和变量进行比较时，常量放在左边
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("haha\n");
//		else//与最近的if搭配
//			printf("hehe\n");
//	return 0;
//}


//if语句
//int main()
//{
//	int age = 0;
//	printf("请输入年龄：\n");
//	scanf("%d", &age);
//    //多分支
//	if (age < 18)
//	{
//		printf("未成年\n");
//	}
//	else if (age >= 18 && age < 28)
//	{
//		printf("青年\n");
//	}
//	else if (age >= 28 && age < 50)
//	{
//		printf("壮年\n");
//	}
//	else if (age >= 50 && age <= 90)
//	{
//		printf("老年\n");
//	}
//	else
//		printf("老不死\n");
//
//	//双分支
//	/*if (age < 18)
//	{
//		printf("未成年\n");
//	}//{}--代码块
//	else
//	{
//		printf("已成年\n");
//	}*/
//
//	//单分支
//	/*if (age < 18)
//	{
//		printf("未成年\n");
//	}*/
//	return 0;
//}




//结构体
//char int double...
//人--名字+身高+年龄+身份证号码...
//书--作者+出版社+定价+书号...
//描述复杂对象--结构体--我们自己创造出来的一种类型

//创建一个结构体类型
//struct Book
//{
//	char name[20];//c语言程序设计
//	short price;//55
//};
//int main()
//{
//	//利用结构体类型-创建一个该类型的结构体变量
//	struct Book b1 = { "c语言程序设计",55 };
//	//利用pb打印出书的名字和价格
//	struct Book* pb = &b1;
//	//.--结构体变量.成员
//	//->--结构体指针->成员
//	//printf("%s\n", pb->name);
//	//printf("%d\n", pb->price);
//	
////如何改书名
//	//b1.name = "C++";//字符串变量不同于数值变量
//	strcpy(b1.name, "C++");//string-copy--字符串拷贝-库函数-string.h
//	printf("书名：%s\n",pb->name);
//	//b1.price = 15;//数值变量可以更改
//
//
//
//
//	/*printf("书名：%s\n", (*pb).name);
//	printf("价格：%d\n", (*pb).price);
//	(*pb).price = 15;
//	printf("修改后的价格:%d\n", (*pb).price);*/
//	
//
//	/*printf("书名：%s\n", b1.name);
//	printf("价格：%d\n", b1.price);
//	b1.price = 15;
//	printf("修改后的价格：%d\n", b1.price);*/
//	return 0;
//}



   
//int main()
//{
//	printf("%d\n", sizeof(char*));//4
//	printf("%d\n", sizeof(short*));//4
//	printf("%d\n", sizeof(int*));//4
//	printf("%d\n", sizeof(double*));//4
//	//指针类型存放的是地址的大小，只要在32位平台上，就占用4个字节                                                                                            
//	
//	/*double d = 3.14;
//	double* pd = &d;
//	*pd = 5.5;
//	printf("%lf\n", d);
//	printf("%lf\n", *pd);
//	printf("%d\n", sizeof(pd));*/
//	return 0;
//}




//int main()
//{
//	int a = 10;//申请了四个字节
//	int* p = &a;//p--指针变量--用来存放地址
//    //p的类型是int*,c此时的*就是为了说明类型
//	*p = 20;//解引用操作符/间接引用操作符
//	//此时的*是解引用操作符
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	printf("%d\n", a);
//
//	return 0;
//}