#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//函数功能：将华氏温度准换成摄氏温度
//转换公式：c=5/9*(f-32)

/*int main()
{
	float C, F;
	//scanf("%f\n",&F);//待拓展，预实现功能：可自行输入华氏温度，即可输出摄氏温度
	F = 64.0;
	C = (5.0/9) * (F-32);
	printf("华氏温度=%f\n摄氏温度=%f\n",F,C);
	return 0;
}*/

//函数功能：计算存款利息
//待拓展，实现输入年限，输出利息功能
int main()
{
	float p0 = 1000, r1 = 0.0036, r2 = 0.0225, r3 = 0.0198, p1, p2, p3;
	p1 = p0 * (1+r1);
	p2 = p0 * (1+r2);
	p3 = p0 * (1 + r3/2)*(1 + r3/2);
	printf("p1=%f\np2=%f\np3=%f\n",p1,p2,p3);
	return 0;
}