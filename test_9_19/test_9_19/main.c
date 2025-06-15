#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//指针
//字符
//指针变量的大小
// x86是32位，x64是64位。存储的是地址，地址是32位，4个字节
//32位平台--32bit--4个字节
//64位平台--64bit--8个字节

int main()
{
	char ch = 's';
	char* pc = &ch;
	*pc = 'd';
	printf("%p\n", &ch);
	printf("%p\n", pc);
	printf("%c\n", ch);
	printf("%d\n", sizeof(pc));//4

	return 0;
}
// 
// 
// 
// 
//整型
//int main()
//
//{
//	int a = 10;//四个字节
//	//&a--取地址
//	//有一种变量是用来存放地址的-指针变量
//	int* p = &a;//将a的地址存放在指针变量p当中
//
//	*p=20;//*-解引用操作符(直接对a进行操作)
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	printf("a=%d\n", a);
//	return 0;
//}




//#define定义常量和宏
//#define--定义标识符常量
//#define--可以定义宏-->带参数
//#define MAX 100
//
////宏的定义
//#define MAX(X,Y) (X>Y?X:Y)//三目操作符
//int main()
//{
//	int a = 20;
//	int b = 30;
//	//函数方式
//	int max = Max(a, b);
//	//printf("max=%d\n", max);
//    //宏的方式
//	max = MAX(a,b);
//	printf("max=%d\n", max);
//	return 0;
//}







//关键字--不能与变量名相同
//auto  break const continue enum extern goto register(寄存器) unsigned signed struct 
//typedef union volatile 

//1.static--修饰函数
//改变了函数的连接属性
//外部连接属性--内部链接属性

//extern int ADD(int, int);//声明外部函数
//int main()
//{
//	int a = 20;
//	int b = 30;
//	int sum = ADD(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}



////2.static--修饰全局变量
////改变了变量的作用域，让静态的全局变量只能在自己所在的原文件内部使用，出了原文件就无法使用
//int main()
//{
//	//extern--用于声明外部符号
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;
//}

//extern--声明外部函数
//extern void test()
//int main()
//{
//	//3.static--修饰局部变量，使得局部变量的生命周期变长
//	
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//
//
//	////int float;//err
//	////typedef--类型定义-类型重定义
//	//typedef unsigned int u_int;//用u_int来代替unsigned int类型
//	//unsigned int a = 10;
//	//u_int b = 20;//相当于u_int是unsigned int的别名
//
//	//register int a = 10;//建议把a存放在寄存器，把变量a定义成寄存器变量
//	//auto int a = 10;//局部变量-->自动变量（auto隐藏掉）
//	return 0;
//}





//关系操作符

//& * 

//extern int Max(int x,int y);//声明外部函数
//int main()
//{
//	//int arr[] = { 0 };
//	//arr[4];//[]--下标引用操作符
//	int a = 20;
//	int b = 30;
//	int max = Max(a, b);//()--函数调用操作符
//	printf("%d\n", max);
//	return 0;
//
//}


// 
//int main()
//{
//	//三目操作符
//	int a = 30;
//	int b = 50;
//	int Max = a > b ? a : b;//三目操作符
//	printf("%d\n", Max);
//	return 0;
//}



// 
//>=  != ==(判断相等)
//真--非0 
//假--0
//逻辑与--&&
//逻辑或--||
//int main()
//{
//	int a = 1;
//	int b = 0;
//	//int c = a && b;
//	int c = a || b;
//	printf("%d\n", c);
//	return 0;
//}





//()-->强制类型转换
//int main()
//{
//	int a = (int)3.14;//不建议强制类型转换
//	printf("%\n", a);
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++ ，先使用，再++，先将a的值赋值给b,再将a进行加1操作
//	//int b = ++a;//前置++，先++，后使用，先将a进行加1操作，再将a的值赋值给b
//	//int b = a--;//后置--，先使用，后++，先将a的值赋给b，再将a进行减1操作
//	int b = --a;//前置--，先--，后使用，先将a的值进行减1操作，之后将值赋给b
//	printf("a=%d b=%d", a, b);
//	return 0;
//}



//int main()
//{
//	int a = 0;//四个字节，32个比特位
//	int b = ~a;//~--按位取反（二进制位）
//	//0000 0000 0000 0000 0000 0000 0000 0000
//	//1111 1111 1111 1111 1111 1111 1111 1111
//	//补码减1得到反码
//	//1111 1111 1111 1111 1111 1111 1111 1110
//	//反码符号位不变，其余位取反得到原码
//	//1000 0000 0000 0000 0000 0000 0000 0001-->-1
//	printf("%d\n", b);//-1
//	//原码：
//	//负数在内存中存储的时候，存储的是二进制的补码
//	//反码：
//	//补码：
//	//在显示使用的是这个数的原码
// //正数的原反补相同
// //只要是整数，内存中存储的都是二进制的补码
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof (int) );//4
//	printf("%d\n", sizeof a);//4
//	//printf("%d\n", sizeof int );//err
//	printf("%d\n", sizeof(arr));//计算数组的大小，单位是字节
//	printf("%d\n", sizeof(arr)/sizeof(arr[0]));//计算数组中的元素个数
//
//
//	return 0;
//}




//比较两个数的大小
//函数的方法
//int main()
//{
//	int max = 0;
//	max = Max(10, 20);
//	printf("较大的数是：%d\n",max );
//	return 0;
//}



//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("较大的数是：%d\n", num1);
//	else
//		printf("较大的数是：%d\n", num2);
//	//'\0'是结束的标志，不是字符串内容
//	return 0;
//}