#define _CRT_SECURE_NO_WARNINGS
//1.函数是什么？
	// 维基百科对函数的定义：子程序
	// 是一个大型程序中的一部分代码，由一个或多个语句块组成，他负责完成某项特定任务，而且相较于其他代码
	// 具备相对的独立性。
	
#include<stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}
    // 2.c语言中函数的分类：
	// a.库函数
	// 常用的库函数都有：
	// ·IO函数
	// ·字符串操作函数
	// ·字符操作函数
	// ·内存操作函数
	// ·时间/日期函数
	// ·数学函数
//#include<string.h>
//int main()
//{
//	//strcpy--string copy--字符串拷贝,将\0也进行拷贝
//	//strlen--string length--字符串长度有关
//	char arr1[] = {"bit"};
//	char arr2[20] = { "#########" };
//	strcpy(arr2, arr1);
//	printf("%s", arr2);//\0是打印字符串的结束标志
//
//	return 0;
//}

//memset--memory-内存  set-设置
//#include<string.h>
//int main()
//{
//	char arr[] = { "hello world!" };
//	memset(arr, '*', 5);
//	printf("%s", arr);
//	return 0;
//}
	// https://en.cppreference.com/w/
	// cplusplus
	


	
// b.自定义函数
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//	
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的使用
//	int max = get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//	}

//写一个函数可以交换两个整型变量的内容
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int temp = 0;
//	printf("a=%d,b=%d\n", a, b);
//	temp = b;
//	b = a;
//	a = temp;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}


//当实参传给形参的时候
// 形参其实是实参的一份临时拷贝
// 对形参的修改是不会改变实参的

//void Swap(int x, int y)
//{
//	int temp = 0;
//	temp = y;
//	y = x;
//	x = temp;
//}
////x,y有另外一处空间，与a、b存放地址不同
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d,b=%d\n", a, b);
//	Swap(a, b);// 传值调用
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}//交换不了，有问题（地址不同）

//3.函数的参数

// b.形式参数
// 形式参数是指函数名后括号中的变量，因为形式参数只有在函数被调用的过程中才实例化（分配内存单元）/
// 所以叫形式参数，形式参数当函数调用完成之后就自动销毁了，因此形式参数只在函数中有效。
//形参相当于实参的一份临时拷贝，形参改变不会改变实参

//void Swap2(int* pa, int* pb)//int*--指针变量用来存放地址
//{
//	int temp = 0;
//	temp = *pa;//*pa---对pa地址存放的数值进行解引用，获得存放的数值
//	*pa=*pb;
//	*pb = temp;
//}
////a.实际参数
// 真实传给函数的参数，实参是：常量，变量，表达式，函数等，无论实参是何种类型的量，在进行函数/
// 调用时他们都必须有确定的值，以便把这些值传送给形参
// int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d,b=%d\n", a, b);
//	Swap2(&a, &b);//调用函数--传址调用
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}//相当于是交换了a,b的地址





// 
// 
// 
// 4.函数的调用
// a.传值调用
// 函数的形参和实参分别占用不同的内存块，对形参的修改不会影响实参
// b.传址调用
// ·传址调用是把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式。
// ·这种传参方式可以让函数和函数外边的变量建立起真正的联系，也就是函数内部可以直接操作函数/
// 外部的变量
// 

//一个大于1的自然数，如果除了1和它自身外，不能被其他自然数整除，那么这个数就是素数（质数）；
// 否则，它被称为合数（规定1既不是质数也不是合数）
//· 写一个函数可以判断一个数是不是素数
//#include<math.h>
//
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j<=sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;//return 0的作用比break强
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	打印100-200之间的素数
//	int i = 0;
//	int sum = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			sum++;
//			printf("%d ", i);
//		}	
//	}
//	printf("\nsum=%d ",sum);
//	return 0;
//}


//·写一个函数判断某一年是不是闰年
//int is_leap_year(int x)
//{
//	
//	if ((x % 4 == 0 && x % 100 != 0 )|| (x % 400 == 0))
//		return 1;
//
//	else
//	return 0;
//}
////函数在设计时功能要单一，简单,不使用打印函数，可移植性较好
//
//int main()
//{
////打印1000-2000之间的闰年
//	 int year = 0;
//	 int sum = 0;
//	 for (year = 1000; year <= 2000; year++)
//	 {
//		 //判断是否为闰年
//		 
//		 if(is_leap_year(year)==1)
//		 { 
//			 printf("%d ", year);
//		     sum++;
//		 }
//		 
//	 }
//	 printf("\nsum=%d", sum);
//	return 0;
//}



//·写一个函数，实现一个整型有序数组的二分查找
// 数组此时传过去的是一个指针，就是数组中第一个元素的下标的地址，而不是整个数组
//int binary_search(int arr[], int k,int sz)//binary search--二分查找法
//{
//	//实现算法
//
//	int left = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);//传过来的只是一个指针，
//	//不能在自定义函数中计算数组中元素个数
//	int right =sz-1;
//	
//	while(left<=right)  //判断条件是<=
//	{ 
//		int mid = (left + right) / 2;  //中间元素的下标，mid必须放循环里面
//		if (arr[mid] < k)
//	   {
//		left = mid + 1;
//	   }
//	else if (arr[mid] > k)
//	   {
//		right = mid - 1;
//	   }
//	else
//	   {
//		return  mid;
//	    }	
//	}
//
//	return -1;
//	}
//
// int main()
// {
//	 //二分查找
//	 //在一个有序数组中找到具体的某个数
//	 //如果找到返回这个数的下标，找不到返回-1
//	 int arr[] = {1,2,3,4,5,6,7,8,9,10 };
//	 int k = 7;
//	 //传递的只是数组的第一个元素的地址
//	 int sz = sizeof(arr) / sizeof(arr[0]);  //计算数组中数的个数
//	 int ret =binary_search(arr, k, sz);
//	 if (ret == -1)
//	 {
//		 printf("找不到指定的数字\n");
//	 }
//	 else
//	 {
//		 printf("找到了，下标是%d\n", ret);
//	 }
//	 return 0;
// }



//·写一个函数，每调用一次这个函数，就会将num1的值增加1
//  void Ad(int* p)
//{
//	(*p)++;//++的优先级高于*，用括号括起来
//}
//int main()
// {
//	int num = 0;
//	Ad(&num);
//	printf("num=%d\n", num);
//	Ad(&num);
//	printf("num=%d\n", num);
//	Ad(&num);
//	printf("num=%d\n", num);
//
//	 return 0;
// }

//函数的嵌套调用和链式访问
// 函数和函数之间可以有机的组合

// 嵌套调用
 //void new_line()
 //{
 //printf("hehe\n");
 //}

 //void three_line()
 //{
 //int i=0;
 //for(i=0;i<3;i++)
 // {
 //   new_line();//函数调用时不能加void类型，否则返回空类型，不执行操作
 // }
 //}

 //int main()
 //{
 //  three_line();
 //  
 //  return 0;
 //}
 

// 	链式访问--把一个函数的返回值作为另一个函数的参数
//int main()
//{
//	int len = 0;
//	//1.
//	//len = strlen("abc");
//	//printf("%d\n", len);
//	//2.
//	printf("%d\n", strlen("abc"));
//	return 0;
//}


//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43))); //printf和scanf函数的返回值是打印字符的个数
//	
//    //printf("%d", printf("%d",2))//打印43
//	//printf("%d",1)//打印432
//	//打印4321
//	return 0;
//}



#include"Add.h"
//函数的声明
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	//函数的调用
	sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}
//函数的定义
//int Ad(int x, int y)
//{	
//	int z = x + y;
//	return z;
//}
//多此一举，函数声明不是这样用的




//#include"add.h" //引用自己定义的头文件用""
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	//函数的调用
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}  


//add.h存放函数声明
//add.c存放函数的定义

