/*C06
дһ�������������ַ�������*/

/*
* str1[],str2[]Ϊ�����ַ���
*/

//#include <stdio.h>
//
//void my_strcat(char str1[], char str2[]);
//
//int main()
//{
//	char str1[100] = { 0 }, str2[100] = { 0 };
//	printf("�����������ַ�����\n");
//	fgets(str1, 100, stdin);
//	str1[strcspn(str1, "\n")] = '\0';
//
//	fgets(str2, 100, stdin);
//    str2[strcspn(str2, "\n")] = '\0';
//	//strcat(str1, str2);
//	my_strcat(str1, str2);
//    printf("���Ӻ���ַ���Ϊ��%s\n", str1);
//	return 0;
//}
//
//void my_strcat(char str1[], char str2[])
//{
//	int i = 0, j = 0;
//	//str1�ַ�����\0��β
//	while (str1[i] != '\0')
//	{
//     i++;
//	}
//	while (str2[j] != '\0')
//	{
//		str1[i] = str2[j];
//        i++;//ȷ�����һ���ַ���λ��
//        j++;//str2�ַ�����ָ�����
//	}
//	str1[i] = '\0';//��str1����ӽ�����\0,��־��str1��str2�������
//}