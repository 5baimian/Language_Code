/*C05
дһ������ʹ�����һ���ַ����������ţ�������������������������ַ�����*/

/*
* reverse_order
*/

//#include <stdio.h>
//#include <string.h>
//void reverse_string(char* str);
//int main()
//{
//	char str[100] = { 0 };
//    printf("������һ���ַ�����\n");
//	fgets(str,sizeof(str),stdin);
//	//fgets()����������ַ�������\n,������һ��������ô����ַ���
//	str[strcspn(str, "\n")] = 0;
//
//	reverse_string(str);
//	printf("�������ַ���Ϊ��%s ", str);
//	printf("\n");
//	return 0;
//}
//
//void reverse_string(char* str)
//{
//    int len = strlen(str);
//	int i = 0;int j= strlen(str) - 1;
//	while (i < j)
//	{
//		int temp = str[i];
//        str[i] = str[j];
//        str[j] = temp;
//
//		i++;
//		j--;
//	}
//}