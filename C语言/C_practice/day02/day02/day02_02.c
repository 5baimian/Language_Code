/*B02
求Sn=1!+2!+3!+4!+5!+…+n!之值，其中n是一个数字(n<=20)。*/

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0,j=0, n = 0, Sn = 1, Sn1 = 0;
//restart:
//	printf("请输入n的值(n<=20)：");
//	scanf_s("%d", &n);//输入的双引号里不要写空格
//	if (n > 0 && n <= 20)
//	{
//	  for (i = 0; i < n; i++)
//	  {
//		Sn = 1;//重置Sn,确保在每次正确计算单项阶乘
//		for (j = i + 1; j > 0; j--)
//		{
//			Sn = Sn * j;
//		}
//		Sn1 = Sn1+ Sn;
//	  }
//	}
//	else
//	{
//	   goto restart;
//	}
//
//
//	printf("Sn1=%d\n", Sn1);
//	return 0;
//}