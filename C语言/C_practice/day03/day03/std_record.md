#day03_05
## fgets()
```
#fgets() 是一个安全的字符串输入函数，从文件或标准输入中读取一行（包括空格）
#最多读取 n-1 个字符，并在末尾自动加上 \0（字符串结束符）。
#fgets() 函数的原型如下：
#char *fgets(char *str, int n, FILE *stream);
#参数说明：
#str：字符数组，用于存储读取的字符串。
#n：读取的最大字符数，包括字符串结束符 \0。
#stream：文件指针，指向要读取的文件。一般是键盘输入stdin

#fgets()函数计算的字符串包括\n,进行下一步操作获得纯净字符串
#str[strcspn(str, "\n")] = 0;
```
