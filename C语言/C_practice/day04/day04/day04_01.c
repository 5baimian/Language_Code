/*D01
输入一行电报文字，将字母变成其下一字母（如’a’变成’b’……’z’变成’ａ’其它字符不变）。*/

/*
* 输入字符串
* 输出字符串
*/
//#include <stdio.h>
//int main()
//{
//    char str[100];
//    printf("请输入一行电报文字：");
//    fgets(str, sizeof(str), stdin);
//    str[strcspn(str, "\n")] = '\0';
//    for (int i = 0; i < strlen(str); i++)
//    {
//        if (str[i] >= 'a' && str[i] <= 'y')
//        {
//            str[i] = str[i] + 1;//字符类型中以数字形式表示,如‘a’和97一样
//        }
//        else if (str[i] == 'z')
//        {
//            str[i] = 'a';
//        }
//    }
//
//    printf("解码后的电报文字为：%s\n", str);
//
//	return 0;
//}