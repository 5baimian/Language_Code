/*D07
有一字符串，包含n个字符。写一函数，
将此字符串中从第m个字符开始的全部字符复制成为另一个字符串。*/

/*
* 创建一个字符串，有n个字符，使用动态分配内存进行创建
* 动态分配内存存放 m个字符串
* 将字符串进行复制
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void my_strcpy(char arr1[], char arr2[],int n,int m);
int main()
{
	int n = 0, m = 0;
	printf("请输入字符串中包含字符的个数n的大小以及 m的大小(n>m)：\n");
	scanf_s("%d %d", &n,&m);

	// 清除输入缓冲区中的换行符
	while (getchar() != '\n');//否则无法继续输入字符串

	char* arr1 = (char*)malloc(n * sizeof(char));
	if (arr1 == NULL)
	{
		printf("内存分配出错！");
		return 1;
	}

	printf("请输入字符串：\n");

	fgets(arr1, n+1, stdin);
	arr1[strcspn(arr1, "\n")] = '\0';


	char* arr2 = (char*)malloc(m * sizeof(char));
	if (arr2 == NULL)
	{
		printf("内存分配出错！");
		return 1;
	}

	if (n > m)
	{
		my_strcpy(arr1, arr2, n, m);
		printf("字符串1为:%s", arr1);
		printf("字符串2为:%s", arr2);	
	}
	else
	{
		printf("请重新输入（保证n>m）");
	}

	free(arr1);
	free(arr2);

	return 0;
}

void my_strcpy(char arr1[], char arr2[],int n ,int m)
{
	for (int i = 0; i < n - m+1; i++)
	{
		arr2[i] = arr1[m + i];
	}
	arr2[n-m] = '\0'; // 添加字符串结束符
}