/*C07
дһ�������������ַ����е�Ԫ����ĸ����֤Сд�����Ƶ���һ���ַ�����Ȼ�������*/

/*
* 1�������β��ң���һ�β��ҵ�һ���ַ����е�Ԫ����ĸ���ڶ��β��ҵڶ����ַ����е�Ԫ����ĸ
* 2���ҳ�Ԫ����ĸ�󣬽��临�Ƶ��������ַ�����
*/
//#include <stdio.h>
//void search_vowel(char str1[], char str2[], char str3[]);
//
//int main()
//{
//	char str1[100], str2[100], str3[100];
//	printf("�������һ���ַ�����\n");
//	fgets(str1, sizeof(str1), stdin);
//	str1[strcspn(str1, "\n")] = '\0';
//	printf("������ڶ����ַ�����\n");
//	fgets(str2, sizeof(str2), stdin);
//	str2[strcspn(str2, "\n")] = '\0';
//
//	search_vowel(str1, str2, str3);
//	printf("Ԫ����ĸΪ��\n%s\n", str3);
//	return 0;
//}
//
//void search_vowel(char str1[], char str2[], char str3[])
//{
//	int k = 0;	//a\e\i\o\u
//	for (int i = 0; i < strlen(str1); i++)
//	{
//		if (str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u')
//		{
//
//		str3[k]=str1[i];
//		k++;
//		}
//	}
//	for (int j=0; j < strlen(str2); j++)
//	{
//		if (str2[j] == 'a' || str2[j] == 'e' || str2[j] == 'i' || str2[j] == 'o' || str2[j] == 'u')
//		{
//			str3[k] = str2[j];
//			k++;
//		}
//	}
//	str3[k]='\0';
//
//}