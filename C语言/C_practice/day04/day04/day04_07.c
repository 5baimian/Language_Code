/*D07
��һ�ַ���������n���ַ���дһ������
�����ַ����дӵ�m���ַ���ʼ��ȫ���ַ����Ƴ�Ϊ��һ���ַ�����*/

/*
* ����һ���ַ�������n���ַ���ʹ�ö�̬�����ڴ���д���
* ��̬�����ڴ��� m���ַ���
* ���ַ������и���
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void my_strcpy(char arr1[], char arr2[],int n,int m);
int main()
{
	int n = 0, m = 0;
	printf("�������ַ����а����ַ��ĸ���n�Ĵ�С�Լ� m�Ĵ�С(n>m)��\n");
	scanf_s("%d %d", &n,&m);

	// ������뻺�����еĻ��з�
	while (getchar() != '\n');//�����޷����������ַ���

	char* arr1 = (char*)malloc(n * sizeof(char));
	if (arr1 == NULL)
	{
		printf("�ڴ�������");
		return 1;
	}

	printf("�������ַ�����\n");

	fgets(arr1, n+1, stdin);
	arr1[strcspn(arr1, "\n")] = '\0';


	char* arr2 = (char*)malloc(m * sizeof(char));
	if (arr2 == NULL)
	{
		printf("�ڴ�������");
		return 1;
	}

	if (n > m)
	{
		my_strcpy(arr1, arr2, n, m);
		printf("�ַ���1Ϊ:%s", arr1);
		printf("�ַ���2Ϊ:%s", arr2);	
	}
	else
	{
		printf("���������루��֤n>m��");
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
	arr2[n-m] = '\0'; // ����ַ���������
}