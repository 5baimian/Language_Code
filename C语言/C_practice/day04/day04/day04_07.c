/*D07
��һ�ַ���������n���ַ���дһ������
�����ַ����дӵ�m���ַ���ʼ��ȫ���ַ����Ƴ�Ϊ��һ���ַ�����*/

/*
* ����һ���ַ�������n���ַ���ʹ�ö�̬�����ڴ���д���
* ��̬�����ڴ��� m���ַ���
* ���ַ������и���
*/

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void my_strcpy(char arr1[], char arr2[],int n,int m);
//int main()
//{
//	int n = 0, m = 0;
//	printf("�������ַ����а����ַ��ĸ���n�Ĵ�С�Լ� m�Ĵ�С(n>m)��\n");
//	scanf_s("%d %d", &n,&m);
//	if (n <= m)
//	{
//		printf("���������루��֤n>m��");
//		return 1;
//	}
//
//
//	// ������뻺�����еĻ��з�
//	while (getchar() != '\n');//�����޷����������ַ���
//
//	char* arr1 = (char*)malloc((n+1) * sizeof(char));
//	if (arr1 == NULL)
//	{
//		printf("�ڴ�������");
//		return 1;
//	}
//
//	printf("�������ַ�����\n");
//
//	fgets(arr1, n+1, stdin);
//	arr1[strcspn(arr1, "\n")] = '\0';
//
//
//	char* arr2 = (char*)malloc((n-m+1+1) * sizeof(char));
//	if (arr2 == NULL)
//	{
//		printf("�ڴ�������");
//		return 1;
//	}
//
//	my_strcpy(arr1, arr2, n, m);
//	printf("�ַ���1Ϊ:%s\n", arr1);
//	printf("�ַ���2Ϊ:%s\n", arr2);	
//
//	free(arr1);
//	free(arr2);
//	return 0;
//}
//
//void my_strcpy(char arr1[], char arr2[],int n ,int m)
//{
//	int i = 0;
//	while (arr1[(m-1) + i] != '\0')
//	{
//		arr2[i] = arr1[(m-1) + i];
//		i++;
//	}
//	arr2[i] = '\0'; // ����ַ���������
//}


//����Ŀռ俪��������ĸ�ֵ���Ҫ���濼�ǣ������Ƕ�̬�����ڴ�������������ֶδ�����ڴ�й©�����⡣