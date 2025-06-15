/*C05
写一函数，使输入的一个字符串按反序存放，在主函数中输入输出反序后的字符串。*/

/*
* reverse_order
*/

//#include <stdio.h>
//#include <string.h>
//void reverse_string(char* str);
//int main()
//{
//	char str[100] = { 0 };
//    printf("请输入一个字符串：\n");
//	fgets(str,sizeof(str),stdin);
//	//fgets()函数计算的字符串包括\n,进行下一步操作获得纯净字符串
//	str[strcspn(str, "\n")] = 0;
//
//	reverse_string(str);
//	printf("反序后的字符串为：%s ", str);
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