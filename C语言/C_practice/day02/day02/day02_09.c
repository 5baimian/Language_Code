/*B09
用迭代法求 。求平方根的迭代公式为： X[n+1]=1/2(X[n]+a/X[n])
要求前后两次求出的得差的绝对值少于0.00001。 输出保留3位小数*/

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	//设定初值a=10;x=10
//	float a = 10, x = 3.0,x_next=0;
//	x_next = 1.0 / 2 * (x + a / x);
//	while (fabs(x_next - x) >= 0.00001)
//	{
//		x = x_next;
//		x_next= 1.0 / 2 * (x + a / x);
//	}
//	printf("满足要求的x值为%.3f\n",x);
//	
//	return 0;
//}