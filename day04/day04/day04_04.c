/*D04
����10������ͬ����������������С�������һ�����Ի����������������һ�����Ի���
д���������� ������10�������ڽ��д��������10������*/

//��Ҫ�ҵ����ֵ����Сֵ��λ��
//ʹ��ð������˼���ҵ���Сֵ
//ʹ��ѡ��˼���ҵ����ֵ

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
//	printf("����������ʮ��������\n");
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
//	min = arr[0];//��һ��ֵΪ��Сֵ
//
//	for (int i = 1; i < 10; i++)
//	{
//		if (arr[i] < min)
//		{
//			min = arr[i];//�м�ֵ���д洢���ֵ
//			min_num = i;//��¼���ֵ��λ��
//		}
//	}
//
//	//���ҵ�����Сֵ�Ž�arr[0]
//	swap_min = arr[0];
//	arr[0] = arr[min_num];
//	arr[min_num] = swap_min;
//	max = arr[0];//��һ��ֵΪ���ֵ
//	//ѡ��������ֵ
//	/*��Ҫ��forѭ��������и�ֵ*/
//	for (int i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//             max = arr[i];//�м�ֵ���д洢���ֵ
//			 max_num = i;//��¼���ֵ��λ��
//		}
//	}
//	//���ҵ������ֵ�Ž�arr[9]
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