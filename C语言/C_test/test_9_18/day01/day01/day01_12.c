/*A12
输入一行字符，分别统计出其中英文字母、数字、空格和其他字符的个数。*/
#include <stdio.h>

int main() {
    char arr[100];  // 用于存储输入的字符串
    int alphabet = 0, number = 0, space = 0, other = 0;

    printf("请输入一段字符串：");
    fgets(arr, sizeof(arr), stdin);  // 使用 fgets 来读取包含空格的字符串
    // fgets() 函数会读取一行字符串，包括空格，直到遇到换行符或文件结束符。
    /*
    * arr：存储读取的字符串的数组。
    * sizeof(arr)：获取数组 arr 的大小，以字节为单位。
    * stdin：标准输入流，通常是指键盘输入。
    */

    // 去除末尾的换行符
    arr[strcspn(arr, "\n")] = 0;
    /*
    * 
    * strcspn() 函数用于查找字符串中第一个出现的指定字符。
    * 
    * 函数原型：
    * size_t strcspn(const char *str1, const char *str2);
    * 
    * 返回值：str1 中第一个出现在 str2 中的字符的位置（索引，从 0 开始）。
    *         如果 str1 中不包含 str2 中的任何字符，返回 str1 的长度。
    */

    // 遍历字符串并分类统计字符
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if ((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z')) 
        {
            alphabet++;
        }
        else if (arr[i] >= '0' && arr[i] <= '9')
        {
            number++;
        }
        else if (arr[i] == ' ') 
        {
            space++;
        }
        else
        {
            other++;
        }
    }

    // 输出结果
    printf("英文字母个数：%d\n", alphabet);
    printf("数字的个数：%d\n", number);
    printf("空格的个数：%d\n", space);
    printf("其他字符的个数：%d\n", other);

    return 0;
}