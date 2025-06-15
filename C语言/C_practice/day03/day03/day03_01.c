/*C01
写两个函数，分别求两个整数的最大公约数和最小公倍数，用主函数调用这两个函数，并输出结果两个整数由键盘输入。*/

/*
* 提示信息：
* ​​公约数：Greatest Common Divisor (GCD)​
* 公倍数：​​Least Common Multiple (LCM)​
* num1*num2=GCD*LCM
*/

//#include <stdio.h>
//
//int GCD(int a, int b);
//int LCM(int a, int b);
//
//int main()
//{  
//	int num1 = 0, num2 = 0;
//	int gcd = 0, lcm = 0;
//	printf("请输入两个整数：");
//	scanf_s("%d %d",&num1,&num2);
//	gcd = GCD(num1, num2);
//    lcm = LCM(num1, num2);
//
//	printf("%d 和 %d 的最大公约数和最小公倍数分别为：%d %d\n",num1, num2, gcd, lcm);
//
//	return 0;
//}
//int gcd = 0,max_gcd = 0;
//int GCD(int a, int b)
//{
//	/*if (a > b)
//	{
//		for (int i = 1; i <= b; i++)
//		{
//			if (a % i == 0 && b % i == 0)
//			{
//				 gcd = i;
//			}
//		}
//		 max_gcd = gcd;
//	}
//	else
//	{
//		for (int i = 1; i <= a; i++)
//		{
//           if (a % i == 0 && b % i == 0)
//			   gcd = i;
//	    }
//		max_gcd = gcd;
//	}*/
//
//	//简化一下
//	int min = (a < b) ? a : b;
//	for (int i = 1; i <= min; i++)
//	{
//		if (a % i == 0 && b % i == 0)
//			gcd = i;
//	}
//	max_gcd = gcd;
//	return max_gcd;
//}
//int LCM(int a, int b)
//{
//	return (a * b) / GCD(a,b);
//}