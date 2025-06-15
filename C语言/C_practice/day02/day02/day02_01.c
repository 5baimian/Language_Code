
/*B01
求Sn=2+22+222+…+22…222（有n个2）之值。
例如：2+22+222+2222+22222（n=5），n由键盘输入。(n<=6)*/

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0, n = 0, Sn = 0, Sn1 = 0;
//restart:
//	printf("请输入n的值：n= ");
//	scanf_s("%d", &n);
//	if (n > 0 && n <= 6)
//	{
//		for (i = 0; i < n; i++)
//		{
//			Sn = Sn + 2 * pow(10, i);
//			Sn1 = Sn1 + Sn;
//		}
//	}
//	else
//		goto restart;
//
//
//	printf("Sn1=%d\n", Sn1);
//	return 0;
//}