/*B03
求以下三数的和,保留2位小数 1~a之和 1~b的平方和 1~c的倒数和*/

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int a = 0,b = 0,c = 0;
//	int Sa = 0, Sb = 0;
//	float Sc = 0,S = 0;
//	printf("请输入a,b,c的值：");
//	scanf_s("%d %d %d", &a, &b, &c);
//	for (int i = 1; i < a + 1; i++)
//	{
//		Sa = Sa + i;
//	}
//	for (int j = 1; j < b + 1; j++)
//	{
//        Sb = Sb + pow(j, 2);
//	}
//	for (int k = 1; k < c + 1; k++)
//	{
//        		Sc = Sc + 1.0 / k;
//	}
//    	S = Sa + Sb + Sc;
//     printf("S=%.2f\n", S);
//
//	return 0;
//}