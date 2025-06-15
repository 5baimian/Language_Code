#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
//sizeof--单目操作符
int main()
{
	int arr[10] = { 0 };
	int sz = 0;
	//10*sizeof(int)=40
	printf("%d\n", sizeof(arr));
	//计算数组的元素个数
	//个数=数组总大小/每个元素的大小
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("sz=%d\n", sz);



	int a = 10;
	printf("%d\n", sizeof(a));
	//sizeof--计算的是变量/类型所占空间的大小，单位是字节
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof a);
	//printf("%d\n", sizeof int);//err

	return 0;
}











////单目操作符
////双目操作符
////三目操作符
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//a+b;//+双目操作符
//	//C语言当中0表示假，非零表示真
//	//int a = 0;
//	int a = -2;//-表示单目操作符
//	int b = -a;
//	int c = +3;//+好都会省略
//	printf("%d\n", a);
//	printf("%d\n", !a);
//
//
//	return 0;
//}








//int main()
//{
//	int a = 10;
//	a = 20;//=赋值  ==判断相等
//	a = a + 10;
//	a += 10;
//	a = a - 10;
//	a -= 10;
//	a = a & 2;
//	a &= 2;
//	//复合赋值符
//	//+= -= *= \= >>= <<= &= %= ^=
//	rteurn 0;
//}








//int main()
//{
//	//（二进制）位操作 
//	//&--按位与   有0取0，全1取1
//	//|--按位或   有1取1
//	//^--按位异或  对应的二进制位相同则为0，对应的二进制位相异则为1
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	int d = a | b;
//	int e = a ^ b;
//	//a= 0000 0000 0000 0000 0000 0000 0000 0011
//	//b= 0000 0000 0000 0000 0000 0000 0000 0101
//	printf("%d\n", c);//1
//	//c= 0000 0000 0000 0000 0000 0000 0000 0001
//	printf("%d\n", d);//7
//	//c= 0000 0000 0000 0000 0000 0000 0000 0111
//	printf("%d\n", e);//6
//	//c= 0000 0000 0000 0000 0000 0000 0000 0110
//	return 0;
//}










////移位操作符
//int main()
//{
//	//移位操作符（二进制位）
//	//<<左移
//	//>>右移
//	int a = 1;
//	//整型1占用四个字节-32个比特位
//	//0000 0000 0000 0000 0000 0000 0000 0001
//	int b = a >> 2;
//	int c = a << 2;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//	return 0;
//
//}









//int main()
//{
//	int a = 5 % 2;
//	printf("%d\n", a);//取模
//	return 0;
//}







////数组
//int main()
//{
//	//int a=1;
//	//int b=2;
//	//int c=3;
//	//int d=4;
//	//int e=5;
//	//int f=6;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };//定义一个存放10个整数数字的数组
//	//下标从0开始   0 1 2 3 4 5 6 7 8 9 
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}//挨个打印1-0
//	//printf("%d", arr[4]);//下标的方式访问元素
//	//arr[下标]
//	//char ch[20]
//	//float arr2[5]
//	return 0;
//}















//
////自定义函数
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	//sum = num1 + num2;
//	sum=Add(num1,num2);
//	printf("%d\n", sum);
//
//	return 0;
//}


//循环语句
//int main()
//{
//	int line = 0;
//	int i = 0;
//	printf("加入比特\n");
//	while (i < 200)
//	{
//		i++;
//		printf("敲一行代码\n");
//		
//	}
//	if (i >= 200)
//	{
//		printf("好offer\n");
//	}
//	return 0;
//}







//选择语句
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("好offer\n");
//
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//
//	return 0;
//}












//字符串+转义字符+注释
//转义字符-转变原来的意思
/*
int main()
{
	printf("%d\n", strlen("c:\test\32\test.c"));//13
	//\32--32是两个八进制数字
	//32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
	//32-->十进制 26 -->作为ASCII码值代表的字符
	printf("%c\n",'\132');//132八进制-->1*8^2+3*8^1+2*8^0
	printf("%c\n",'\x61');//6*16+1=97-->'a'
	return 0;
}*/







//int main()
//{
//	printf("%c\n", '\'');
//	printf("abc\n");//\n-换行
//	printf("https:\\github.com\5baimian\C-CODE\n");
//	printf("(are you ok?\?)\n");
//	return 0;
//}





//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", strlen(arr1));//3
//								 //strlen-string length-计算字符串长度的
//	printf("%d\n", strlen(arr2));//随机值
//	return 0;
//}








//int main()
//{
//	//数据在计算机上面存储的时候，存储的是2进制
//	//a-97
//	//A-65
//	//...
//	//ASCII编码
//	//ASCII数值
//
//	//char arr1[] = "abc";//数组abc
//	////"abc"='a'、'b'、'c'、'\0' '\0'-字符串的结束标志
//	//char arr2[] = { 'a','b','c',0};//abc烫烫烫烫蘟bc
//	////'\0'=0
//	////'a'=97
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	//return 0;
//}


//int main()
//{
//	"abcdef";
//	"hello";
//		"";//空字符串
//	return 0;
//}












//4.枚举常量
//枚举-一一列举
//性别：男，女，保密
//三原色：红、黄、蓝
//星期：、2、3、4、5、6、7

//枚举关键字-enum
//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//
//int main()
//{
//	enum Color color = BLUE;
//	color = YELLOW;
//	//BLUE = 6;err 枚举常量不能修改
//	return 0;
//}






//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
////MALE、FEMALE、SECRET--枚举常量
//int main()
//{
//	printf("%d\n",MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	return 0;
//}










////3.#define 定义的标识符常量
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}












//int main()
//{
//	//2.const-常属性
//	//const int n = 10;//n是变量，但又具有常属性，所以说n是常变量
//	//int arr[n] = { 0 };
//	//const修饰的常变量
//	/*const int num = 1;
//	printf("%d\n",num);
//	num = 5;
//	printf("%d\n",num);*/
//
//	//3;1.字面常量
//	return 0;
//}












//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	//scanf是C语言提供的
//	//scanf_s不是标准C语言提供的，是VS编译器提供的，不具有跨平台性/可移植性
//	//strcpy
//	//strlen
//	//strcat
//	//...
//	//不安全的
//	sum = num1 + num2;
//	printf("%d\n", sum);
//
//	return 0;
//}













//int main()
//{
//	char arr[10] = {0};
//	strcpy(arr, "hello");//引用头文件 string.h
//	printf("%s\n",arr);
//	return 0;
//}













//int main()
//{
//	char arr[5] = { 0 };
//	scanf("%s", &arr);
//	printf("%s\n",arr);
//	return 0;
//}