#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
void test()
{
	static int a = 1;//a是一个静态的局部变量，
  	a++;
	printf("%d\n", a);
}