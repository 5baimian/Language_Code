/*B07
一球从M米高度自由下落，每次落地后返回原高度的一半，再落下。
它在第N次落地时反弹多高？共经过多少米？ 保留两位小数*/

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	float M=0, N=0;
//    float h = 0, sum=0;
//    int i = 0;
//    printf("请输入初始高度M：\n");
//    scanf_s("%f", &M);
//    printf("请输入第N次落地：\n");    
//    scanf_s("%f", &N);
//
//
//    h= M / pow(2, N);
//    for (i = 1; i <= N; i++)
//    {
//        sum= sum + M / pow(2, i-1)+ M / pow(2, i);//注意此处的sum
//    }
//    printf("第N次落地时反弹的高度h=%.2f\n共经过的米数sum=%.2f\n",h,sum);
//
//	return 0;
//}