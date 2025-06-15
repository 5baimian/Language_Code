/*C12
三角形面积=SQRT(S*(S-a)*(S-b)*(S-c)) 其中S=(a+b+c)/2，a、b、c为三角形的三边。
定义两个带参的宏，一个用来求area， 另一个宏用来求S。
写程序，在程序中用带实参的宏名来求面积area。*/

/*
* 满足三角形的三边关系：a + b > c, a + c > b, b + c > a
* 
* 海伦公式
*/

//#include <stdio.h>
//#include <math.h>
////宏定义采用的是（）,而不是{}
//#define area(a,b,c)(sqrt(S(a,b,c)*(S(a,b,c)-a)*(S(a,b,c)-b)*(S(a,b,c)-c)))
//#define S(a,b,c) ((a+b+c)/2.0)
//
//int main()
//{
//	double a, b, c, S_value, area_value;
//	printf("请输入三角形的三边长度a, b, c: ");
//	scanf_s("%lf %lf %lf", &a, &b, &c);
//	// 检查三角形的有效性
//	if (a + b <= c || a + c <= b || b + c <= a)
//	{
//		printf("输入的边长不能构成三角形。\n");
//		return 1;
//	}
//	// 计算S值
//	S_value = S(a, b, c);
//	
//	// 计算面积
//	area_value = area(a, b, c);
//	printf("三角形的面积为: %.2f\n", area_value);
//	return 0;
//}