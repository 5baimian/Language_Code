/*C02
求方程 的根，用三个函数分别求当b^2-4ac大于0、等于0、和小于0时的根，并输出结果。
从主函数输入a、b、c的值。*/

/*
* >0 两根
* =0 二重根
* <0 无根
*/
//#include <stdio.h>
//#include <math.h>
//
//void func1(double num1, double num2, double num3, double* p1, double* p2);
//double func2(double num1, double num2, double num3);
//
//int main()
//{
//    double a, b, c;
//    printf("请依次输入a、b、c的值：");
//    scanf_s("%lf%lf%lf", &a, &b, &c);
//    if (b * b - 4 * a * c > 0)
//    {
//        //函数只可以返回一个值，但可以通过指针返回多个值
//        double x1, x2;
//        double* p1 = &x1;
//        double* p2 = &x2;
//        func1(a,b,c, p1, p2);
//        printf("方程的两个根为：%lf, %lf\n", x1, x2);
//    }
//    else if (b * b - 4 * a * c == 0)
//    {
//        double x;
//        x=func2(a,b,c);
//        printf("方程为二重根x=%lf\n",x);
//    }
//    else
//    {
//        printf("方程无根\n");
//    }
//}
//
//void func1(int num1, int num2, int num3, double* p1, double* p2)
//{
//    *p1=(-num2 + sqrt(num2 * num2 - 4 * num1 * num3)) / (2 * num1);
//    *p2 = (-num2 - sqrt(num2 * num2 - 4 * num1 * num3)) / (2 * num1);
//}
//
//double func2(int num1, int num2, int num3)
//{
//    return -num2 / (2 * num1);
//}