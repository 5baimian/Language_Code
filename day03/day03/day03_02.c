/*C02
�󷽳� �ĸ��������������ֱ���b^2-4ac����0������0����С��0ʱ�ĸ�������������
������������a��b��c��ֵ��*/

/*
* >0 ����
* =0 ���ظ�
* <0 �޸�
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
//    printf("����������a��b��c��ֵ��");
//    scanf_s("%lf%lf%lf", &a, &b, &c);
//    if (b * b - 4 * a * c > 0)
//    {
//        //����ֻ���Է���һ��ֵ��������ͨ��ָ�뷵�ض��ֵ
//        double x1, x2;
//        double* p1 = &x1;
//        double* p2 = &x2;
//        func1(a,b,c, p1, p2);
//        printf("���̵�������Ϊ��%lf, %lf\n", x1, x2);
//    }
//    else if (b * b - 4 * a * c == 0)
//    {
//        double x;
//        x=func2(a,b,c);
//        printf("����Ϊ���ظ�x=%lf\n",x);
//    }
//    else
//    {
//        printf("�����޸�\n");
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