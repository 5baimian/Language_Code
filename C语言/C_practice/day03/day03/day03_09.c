/*C09
��дһ��������ʵ�δ���һ���ַ�����ͳ�ƴ��ַ�������ĸ�����֡��ո�������ַ��ĸ��������������������ַ����Լ�������������
ֻҪ����������ʲô��ʾ��Ϣ��*/

/*
* if�ж� 
* fgets()����
* ���ݵĴ��Σ�����ֻ���Է���һ��ֵ����������ͨ��ָ�봫�ݶ��ֵ
*/

//#include <stdio.h>
//#include <string.h>
//void func(char str[], int* letters, int* digits, int* spaces, int* others);
//int main()
//{
//	char str[100];
//	int letters = 0, digits = 0, spaces = 0, others = 0;
//	fgets(str, sizeof(str), stdin); // �����ַ���
//	str[strcspn(str,"\n")]="\0"; // ȥ�����з�
//
//	func(str,&letters,&digits,&spaces,&others);
//
//	printf("%d %d %d %d\n", letters, digits, spaces, others);
//	return 0;
//}
//void func(char str[],int *letters, int *digits, int *spaces, int *others)
//{
//	for (int i = 0; str[i] != '\0'; i++)
//	{
//		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
//		{
//			(*letters)++;
//		}
//		else if (str[i] >= '0' && str[i] <= '9')
//		{
//			(*digits)++;
//		}
//		else if (str[i] == ' ') 
//		{
//			(*spaces)++;
//		}
//		else
//		{
//			(*others)++;
//		}
//	}
//}