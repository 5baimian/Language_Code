/*C06
写一函数，将两个字符串连接*/

/*
* str1[],str2[]为两个字符串
*/

//#include <stdio.h>
//
//void my_strcat(char str1[], char str2[]);
//
//int main()
//{
//	char str1[100] = { 0 }, str2[100] = { 0 };
//	printf("请输入两个字符串：\n");
//	fgets(str1, 100, stdin);
//	str1[strcspn(str1, "\n")] = '\0';
//
//	fgets(str2, 100, stdin);
//    str2[strcspn(str2, "\n")] = '\0';
//	//strcat(str1, str2);
//	my_strcat(str1, str2);
//    printf("连接后的字符串为：%s\n", str1);
//	return 0;
//}
//
//void my_strcat(char str1[], char str2[])
//{
//	int i = 0, j = 0;
//	//str1字符串以\0结尾
//	while (str1[i] != '\0')
//	{
//     i++;
//	}
//	while (str2[j] != '\0')
//	{
//		str1[i] = str2[j];
//        i++;//确定最后一个字符的位置
//        j++;//str2字符串的指针后移
//	}
//	str1[i] = '\0';//在str1中添加结束符\0,标志着str1和str2连接完成
//}