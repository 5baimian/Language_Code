/*B06
有一分数序列： 2/1 3/2 5/3 8/5 13/8 21/13......
求出这个数列的前N项之和，保留两位小数。*/

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0, N = 0;
//	float Sn=0,an=0;
//    printf("请输入要求的前N项的N值：");
//	scanf_s("%d", &N);
//	if (N == 1)
//	{
//		Sn = 2;
//		printf("Sn=%.2f\n", Sn);
//	}
//	else
//	{
//		int a = 1, b = 2;
//		int numerator=a+b ;//分子
//		int denominator = b;//分母
//		Sn = 2;
//		for (i =1 ; i < N ; i++)
//		{
//			an = (float)numerator / denominator;
//			numerator= numerator + denominator;//更新分子
//			denominator = numerator - denominator;//更新分母
//
//            Sn += an;
//		}
//		printf("Sn=%.2f\n", Sn);
//	}
//
//	return 0;
//}