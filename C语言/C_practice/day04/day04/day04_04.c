/*D04
输入10个不相同的整数，将其中最小的数与第一个数对换，把最大的数与最后一个数对换。
写三个函数； ①输入10个数；②进行处理；③输出10个数。*/

//需要找到最大值和最小值的位置
//使用冒泡排序思想找到最小值
//使用选择法思想找到最大值

//#include <stdio.h>
//void Scanf_func(int arr[]);
//void Handle_func(int arr[]);
//void Print_func(int arr[]);
//
//int main()
//{
//	int arr[10] = { 0 };
//	Scanf_func(arr);
//	Handle_func(arr);
//	Print_func(arr);
//	return 0;
//}
//
//void Scanf_func(int arr[])
//{
//	printf("请依次输入十个整数：\n");
//	for (int i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//}
//
//void Handle_func(int arr[])
//{
//	int max = 0, max_num = 0, swap_max = 0;
//	int min = 0, min_num = 0, swap_min = 0;
//	min = arr[0];//第一个值为最小值
//
//	for (int i = 1; i < 10; i++)
//	{
//		if (arr[i] < min)
//		{
//			min = arr[i];//中间值进行存储最大值
//			min_num = i;//记录最大值的位置
//		}
//	}
//
//	//将找到的最小值放进arr[0]
//	swap_min = arr[0];
//	arr[0] = arr[min_num];
//	arr[min_num] = swap_min;
//	max = arr[0];//第一个值为最大值
//	//选择查找最大值
//	/*不要在for循环里面进行赋值*/
//	for (int i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//             max = arr[i];//中间值进行存储最大值
//			 max_num = i;//记录最大值的位置
//		}
//	}
//	//将找到的最大值放进arr[9]
//	swap_max=arr[9];
//    arr[9] = arr[max_num];
//	arr[max_num] = swap_max;
//}
//
//void Print_func(int arr[])
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	printf("\n");
//
//}