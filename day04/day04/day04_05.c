/*D05
有n个整数，使前面各数顺序向后移m个位置，最后m个数变成前面m个数，见图。
写一函数：实现以上功能，在主函数中输入n个数和输出调整后的n个数。*/

/*
* 功能分析：
*	* 1、将数组前m个数与最后面m个数进行交换
*   * 2、输入数组
*   * 3、输出数组
*/

//使用动态内存分配

//#include <stdio.h>
//
//#include <stdlib.h>
//void Handle_arr(int arr[], int size_arr);
//
//int main()
//{
//    //将前面各数向后移动m位，将后面m个数变成前面m个数
//    int m = 0;
//    printf("请输入想要移动的位数m的值：\n");
//    scanf_s("%d", &m);
//
//	//输入字符串
//    //不输入数组n的大小，动态分配数组空间
//    //下面写法与int* arr = (int*)malloc(capacity * sizeof(int));无异，从malloc返回值思考
//    int* arr = NULL;
//    int size_arr = 0;
//    int capacity = 2;  // 初始容量
//    arr = (int*)malloc(capacity * sizeof(int));
//    //判断是否分配成功
//    if (arr == NULL)
//    {
//        printf("内存分配失败！\n");
//        return;
//    }
//
//    printf("请输入一串整数，以非数字结束（如字母）：\n");
//
//    int x;
//    while (scanf_s("%d", &x) == 1)
//    {
//        if (size_arr >= capacity)
//        {
//            capacity *= 2;  // 扩容
//            arr = (int*)realloc(arr, capacity * sizeof(int));
//        }
//        arr[size_arr++] = x;
//    }
//    int num_int = 0;
//    //num_int = sizeof(arr) / sizeof(arr[0]);//error
//    // printf("计算一下int 的数量：%d\n",size_arr);
//
//    Handle_arr(arr, size_arr, m);
//
//
//
//    //打印输出
//    for (int i = 0; i < size_arr; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//
//
//    free(arr);
//	return 0;
//}
//
//void Handle_arr(int arr[], int size_arr,int m)
//{
//    if (size_arr == 0 || m <= 0) return;
//
//    m = m % size_arr;  // 避免 m 大于 size_arr 时出现越界
//
//
//    //将前面各数向后移动m位，将后面m个数变成前面m个数
// 
//    //为temp分配动态内存
//   // 创建一个 temp 数组存储最后 m 个数
//    int* temp = (int*)malloc(m * sizeof(int));
//    if (temp == NULL) {
//        printf("内存分配失败！\n");
//        return;
//    }
//    //因m是输入的变量，所以在分配空间时需要动态分配内存，使用malloc函数
//
//
//    // 复制最后 m 个数到 temp
//    for (int i = 0; i < m; i++)
//    {
//        temp[i] = arr[size_arr - m + i];
//    }
//    // 将前面的数向后移动 m 位
//    for (int i = size_arr - m - 1; i >= 0; i--)
//    {
//        arr[i + m] = arr[i];
//    }
//
//    for (int i = 0; i < m; i++)
//    {
//        arr[i] = temp[i];
//    }
//
//    free(temp);//创建动态内存记得释放
//
//}