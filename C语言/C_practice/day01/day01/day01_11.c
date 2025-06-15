/*A11
输入两个正整数m和n，求其最大公约数和最小公倍数。*/
//int main()
//{
//	unsigned int m = 0, n = 0;
//	int arr[10] = { 0 };
//	int num = 0;
//    printf("请输入两个正整数：");
//    scanf_s("%d %d", &m, &n);
//
//	if (m > n)
//	{
//		for (int i = 1; i < n+1; i++)
//		{
//			if (m % i == 0 && n % i == 0)
//			{    
//
//				arr[i] = i;
//				printf("%d\n",arr[i]);
//				num = i;
//		    }	
//		}
//		printf("最大公约数为：%d\n", arr[num]);
//		printf("最小公倍数为：%d\n", m * n / arr[num]);
//	}
//	else
//	{
//		for (int i = 1; i < m+1; i++)
//		{
//			if (m % i == 0 && n % i == 0)
//			{
//				arr[i] = i;
//				printf("%d\n", arr[i]);
//				num = i;
//			}
//		}
//		printf("最大公约数为：%d\n", arr[num]);
//		printf("最小公倍数为：%d\n", m * n / arr[num]);
//	}
//
//	return 0;
//}