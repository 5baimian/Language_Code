/*A11
��������������m��n���������Լ������С��������*/
//int main()
//{
//	unsigned int m = 0, n = 0;
//	int arr[10] = { 0 };
//	int num = 0;
//    printf("������������������");
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
//		printf("���Լ��Ϊ��%d\n", arr[num]);
//		printf("��С������Ϊ��%d\n", m * n / arr[num]);
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
//		printf("���Լ��Ϊ��%d\n", arr[num]);
//		printf("��С������Ϊ��%d\n", m * n / arr[num]);
//	}
//
//	return 0;
//}