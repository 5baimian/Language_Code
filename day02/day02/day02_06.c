/*B06
��һ�������У� 2/1 3/2 5/3 8/5 13/8 21/13......
���������е�ǰN��֮�ͣ�������λС����*/

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0, N = 0;
//	float Sn=0,an=0;
//    printf("������Ҫ���ǰN���Nֵ��");
//	scanf_s("%d", &N);
//	if (N == 1)
//	{
//		Sn = 2;
//		printf("Sn=%.2f\n", Sn);
//	}
//	else
//	{
//		int a = 1, b = 2;
//		int numerator=a+b ;//����
//		int denominator = b;//��ĸ
//		Sn = 2;
//		for (i =1 ; i < N ; i++)
//		{
//			an = (float)numerator / denominator;
//			numerator= numerator + denominator;//���·���
//			denominator = numerator - denominator;//���·�ĸ
//
//            Sn += an;
//		}
//		printf("Sn=%.2f\n", Sn);
//	}
//
//	return 0;
//}