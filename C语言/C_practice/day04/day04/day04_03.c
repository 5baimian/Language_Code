/*D03
���������ַ���������С�����˳�����*/

/*
* ˳�����򣺰����ֵ���������У���ASCII��ֵ
* ʹ��strcmp()�������бȽ�
*/
//ASCII��ֵ��0-9��48-57��A-Z��65-90��a-z��97-122��0-255����256���ַ���
//�Լ�дһ���Ƚ��ַ����ĺ���my_strcmp()

//#include <stdio.h>
//#include <string.h>//strcspn()������strcmp����
//
//#define MAX_num(a,b,c)  ((a)>(b)?((a)>(c)?(a):(c)):((b)>(c)?(b):(c)))
//#define MIN_num(a,b,c)  ((a)<(b)?((a)<(c)?(a):(c)):((b)<(c)?(b):(c)))
//void my_strcmp(char str1[], char str2[], char str3[]);
//int main()
//{
//	//���������ַ���
//    	char str1[100], str2[100], str3[100];
//		printf("###�����������ַ���###\n");
//		printf("�������һ���ַ�����\n");
//		fgets(str1, 100, stdin);
//		str1[strcspn(str1, "\n")] = '\0';
//		printf("������ڶ����ַ�����\n");
//
//		fgets(str2, 100, stdin);
//		str2[strcspn(str2, "\n")] = '\0';
//		printf("������������ַ�����\n");
//
//		fgets(str3, 100, stdin);
//		str3[strcspn(str3, "\n")] = '\0';
//		my_strcmp(str1, str2, str3);
//	return 0;
//}
////ֱ�������������飬Ȼ��Ƚϴ�С����������������
//void my_strcmp(char str1[], char str2[],char str3[])
//{
//	int num1 = 0,num2=0,num3=0,i=0;
//	int min_num=0;
//	int sum1 = 0, sum2 = 0, sum3 = 0;
//	int max_sum = 0;
//	//���ҵ��ַ��������ٵ�����
//	num1 = strlen(str1);
//	num2 = strlen(str2);
//	num3 = strlen(str3);
//	min_num=MIN_num(num1, num2, num3);
//	if (min_num == num1)
//	{
//		printf("��һ���ַ������ַ���������");
//
//		//������������min_num֮ǰ���ַ��ڣ��ַ���ASCII��ֵ֮��
//		for (i = 0; i < min_num; i++)
//		{
//			sum1 += str1[i];
//			sum2 += str2[i];
//			sum3 += str3[i];
//		}
//		//�Ƚ�ASCII��ֵ֮�͵Ĵ�С
//		sum2 = sum2 - sum1;
//		sum3= sum3 - sum1;
//		for (i = min_num; i < num2; i++)
//		{
//           sum2 += str2[i];
//		}
//		for (i = min_num; i < num3; i++)
//		{
//			sum3 += str3[i];
//		}
//		if (sum2 >= 0)
//		{
//			if (sum2 >= sum3)
//			{
//				if (sum3 >= 0)
//				{
//					printf("����������ַ�����С��������Ϊ��%s %s %s\n", str1, str3, str2);
//				}
//				else
//				{
//                    printf("����������ַ�����С��������Ϊ��%s %s %s\n", str3, str1, str2);
//				}
//			}
//			else
//			{
//                printf("����������ַ�����С��������Ϊ��%s %s %s\n", str1, str2, str3);
//			}
//		}
//		else
//		{
//			if (sum2 >= sum3)
//			{
//                printf("����������ַ�����С��������Ϊ��%s %s %s\n", str2, str1, str3);
//			}
//			else
//			{
//				if (sum3 >=0)
//				{
//                    printf("����������ַ�����С��������Ϊ��%s %s %s\n", str2, str1, str3);
//				}
//				else
//				{
//					printf("����������ַ�����С��������Ϊ��%s %s %s\n", str2, str3, str1);
//				}
//			}
//		}
//	}
//	else if (min_num == num2)
//	{
//		printf("�ڶ����ַ������ַ���������");
//
//		//������������min_num֮ǰ���ַ��ڣ��ַ���ASCII��ֵ֮��
//		for (i = 0; i < min_num; i++)
//		{
//			sum1 += str1[i];
//			sum2 += str2[i];
//			sum3 += str3[i];
//		}
//		//�Ƚ�ASCII��ֵ֮�͵Ĵ�С
//		sum1 = sum1 - sum2;
//		sum3 = sum3 - sum2;
//		for (i = min_num; i < num1; i++)
//		{
//			sum1 += str1[i];
//		}
//		for (i = min_num; i < num3; i++)
//		{
//			sum3 += str3[i];
//		}
//		if (sum1 >= 0)
//		{
//			if (sum1 >= sum3)
//			{
//				if (sum3 >= 0)
//				{
//					printf("����������ַ�����С��������Ϊ��%s %s %s\n", str2, str3, str1);
//				}
//				else
//				{
//					printf("����������ַ�����С��������Ϊ��%s %s %s\n", str3, str2, str1);
//				}
//			}
//			else
//			{
//				printf("����������ַ�����С��������Ϊ��%s %s %s\n", str2, str1, str3);
//			}
//		}
//		else
//		{
//			if (sum1 >= sum3)
//			{
//				printf("����������ַ�����С��������Ϊ��%s %s %s\n", str3, str1, str2);
//			}
//			else
//			{
//				if (sum3 >= 0)
//				{
//					printf("����������ַ�����С��������Ϊ��%s %s %s\n", str1, str2, str3);
//				}
//				else
//				{
//					printf("����������ַ�����С��������Ϊ��%s %s %s\n", str1, str3, str2);
//				}
//			}
//		}
//
//	}
//	else
//	{
//		printf("�������ַ������ַ���������");
//
//		//������������min_num֮ǰ���ַ��ڣ��ַ���ASCII��ֵ֮��
//		for (i = 0; i < min_num; i++)
//		{
//			sum1 += str1[i];
//			sum2 += str2[i];
//			sum3 += str3[i];
//		}
//		//�Ƚ�ASCII��ֵ֮�͵Ĵ�С
//		sum1 = sum1 - sum3;
//		sum2 = sum2 - sum3;
//		for (i = min_num; i < num1; i++)
//		{
//			sum1 += str1[i];
//		}
//		for (i = min_num; i < num2; i++)
//		{
//			sum2 += str2[i];
//		}
//		if (sum1 >= 0)
//		{
//			if (sum1 >= sum2)
//			{
//				if (sum2 >= 0)
//				{
//					printf("����������ַ�����С��������Ϊ��%s %s %s\n", str3, str2, str1);
//				}
//				else
//				{
//					printf("����������ַ�����С��������Ϊ��%s %s %s\n", str2, str3, str1);
//				}
//			}
//			else
//			{
//				printf("����������ַ�����С��������Ϊ��%s %s %s\n", str3, str1, str2);
//			}
//		}
//		else
//		{
//			if (sum1 >= sum2)
//			{
//				printf("����������ַ�����С��������Ϊ��%s %s %s\n", str2, str1, str3);
//			}
//			else
//			{
//				if (sum2 >= 0)
//				{
//					printf("����������ַ�����С��������Ϊ��%s %s %s\n", str1, str3, str2);
//				}
//				else
//				{
//					printf("����������ַ�����С��������Ϊ��%s %s %s\n", str1, str2, str3);
//				}
//			}
//		}
//	}
//}