/*C12
���������=SQRT(S*(S-a)*(S-b)*(S-c)) ����S=(a+b+c)/2��a��b��cΪ�����ε����ߡ�
�����������εĺ꣬һ��������area�� ��һ����������S��
д�����ڳ������ô�ʵ�εĺ����������area��*/

/*
* ���������ε����߹�ϵ��a + b > c, a + c > b, b + c > a
* 
* ���׹�ʽ
*/

//#include <stdio.h>
//#include <math.h>
////�궨����õ��ǣ���,������{}
//#define area(a,b,c)(sqrt(S(a,b,c)*(S(a,b,c)-a)*(S(a,b,c)-b)*(S(a,b,c)-c)))
//#define S(a,b,c) ((a+b+c)/2.0)
//
//int main()
//{
//	double a, b, c, S_value, area_value;
//	printf("�����������ε����߳���a, b, c: ");
//	scanf_s("%lf %lf %lf", &a, &b, &c);
//	// ��������ε���Ч��
//	if (a + b <= c || a + c <= b || b + c <= a)
//	{
//		printf("����ı߳����ܹ��������Ρ�\n");
//		return 1;
//	}
//	// ����Sֵ
//	S_value = S(a, b, c);
//	
//	// �������
//	area_value = area(a, b, c);
//	printf("�����ε����Ϊ: %.2f\n", area_value);
//	return 0;
//}