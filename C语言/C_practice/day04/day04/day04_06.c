/*D06
有n人围成一圈，顺序排号。从第1个人开始报数（从1到3报数），
凡报到3的人退出圈子，问最后留下的是原来的第几号的那位。*/

//依次从1到3报数，最后只剩下一个人
/*
* 约瑟夫环问题（Josephus Problem）
* 
* 有 ​​n​​ 个人围成一圈，编号为 ​​1, 2, ..., n​​。从第一个人开始报数，数到 ​​k​​ 的人被淘汰出局，
* 然后从下一个人重新开始报数，直到所有人全部出局。求 ​​最后剩下的人的初始编号​​。
*/
//#include <stdio.h>
//#include <stdlib.h>
//
//int josephus(int n, int k);
//int main()
//{
//	int n = 0, k = 3;
//	printf("请输入一共有n人围成一排\n");
//	scanf_s("%d", &n);
//
//	//for (int i = 0; i < n; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//	printf("剩下的人的初始编号为%d\n", josephus(n, k));
//
//
//	return 0;
//}
//
//int josephus(int n, int k)
//{
//	int* arr = (int*)malloc(n * sizeof(int));
//	if (arr == NULL)
//	{
//		printf("内存分配失败");
//		return;
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = i + 1;
//	}
//	//定义剩余人数remaining，下标Index
//	int remaining = n, Index = 0;
//	while (remaining > 1)
//	{
//        Index = (Index + k - 1) % remaining;//计算淘汰者的位置
//
//		//%remaining是为了防止数组越界,实现环形遍历
//		for (int j = Index; j < remaining - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		remaining--;
//	}
//	//只剩一个人，其下标为0
//	int last = arr[0];//此时的下标对应值就是数组中的值，而不是arr[0]-1
//	//因为在while循环中，在去掉淘汰者的位置时会将剩余数组往前移动一位，弥补初始数组下标与对应值之间的差值，因此不需要-1
//	return last;
//
//	free(arr);
//}