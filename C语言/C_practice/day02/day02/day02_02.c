/*B02
��Sn=1!+2!+3!+4!+5!+��+n!ֵ֮������n��һ������(n<=20)��*/

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0,j=0, n = 0, Sn = 1, Sn1 = 0;
//restart:
//	printf("������n��ֵ(n<=20)��");
//	scanf_s("%d", &n);//�����˫�����ﲻҪд�ո�
//	if (n > 0 && n <= 20)
//	{
//	  for (i = 0; i < n; i++)
//	  {
//		Sn = 1;//����Sn,ȷ����ÿ����ȷ���㵥��׳�
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