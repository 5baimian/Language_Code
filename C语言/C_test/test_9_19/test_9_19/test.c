#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
void test()
{
	static int a = 1;//a��һ����̬�ľֲ�������
  	a++;
	printf("%d\n", a);
}