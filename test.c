#define _CRT_SECURE_NO_WARNINGS
//1.������ʲô��
	// ά���ٿƶԺ����Ķ��壺�ӳ���
	// ��һ�����ͳ����е�һ���ִ��룬��һ������������ɣ����������ĳ���ض����񣬶����������������
	// �߱���ԵĶ����ԡ�
	
#include<stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}
    // 2.c�����к����ķ��ࣺ
	// a.�⺯��
	// ���õĿ⺯�����У�
	// ��IO����
	// ���ַ�����������
	// ���ַ���������
	// ���ڴ��������
	// ��ʱ��/���ں���
	// ����ѧ����
//#include<string.h>
//int main()
//{
//	//strcpy--string copy--�ַ�������,��\0Ҳ���п���
//	//strlen--string length--�ַ��������й�
//	char arr1[] = {"bit"};
//	char arr2[20] = { "#########" };
//	strcpy(arr2, arr1);
//	printf("%s", arr2);//\0�Ǵ�ӡ�ַ����Ľ�����־
//
//	return 0;
//}

//memset--memory-�ڴ�  set-����
//#include<string.h>
//int main()
//{
//	char arr[] = { "hello world!" };
//	memset(arr, '*', 5);
//	printf("%s", arr);
//	return 0;
//}
	// https://en.cppreference.com/w/
	// cplusplus
	


	
// b.�Զ��庯��
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//	
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//������ʹ��
//	int max = get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//	}

//дһ���������Խ����������ͱ���������
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int temp = 0;
//	printf("a=%d,b=%d\n", a, b);
//	temp = b;
//	b = a;
//	a = temp;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}


//��ʵ�δ����βε�ʱ��
// �β���ʵ��ʵ�ε�һ����ʱ����
// ���βε��޸��ǲ���ı�ʵ�ε�

//void Swap(int x, int y)
//{
//	int temp = 0;
//	temp = y;
//	y = x;
//	x = temp;
//}
////x,y������һ���ռ䣬��a��b��ŵ�ַ��ͬ
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d,b=%d\n", a, b);
//	Swap(a, b);// ��ֵ����
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}//�������ˣ������⣨��ַ��ͬ��

//3.�����Ĳ���

// b.��ʽ����
// ��ʽ������ָ�������������еı�������Ϊ��ʽ����ֻ���ں��������õĹ����в�ʵ�����������ڴ浥Ԫ��/
// ���Խ���ʽ��������ʽ�����������������֮����Զ������ˣ������ʽ����ֻ�ں�������Ч��
//�β��൱��ʵ�ε�һ����ʱ�������βθı䲻��ı�ʵ��

//void Swap2(int* pa, int* pb)//int*--ָ�����������ŵ�ַ
//{
//	int temp = 0;
//	temp = *pa;//*pa---��pa��ַ��ŵ���ֵ���н����ã���ô�ŵ���ֵ
//	*pa=*pb;
//	*pb = temp;
//}
////a.ʵ�ʲ���
// ��ʵ���������Ĳ�����ʵ���ǣ����������������ʽ�������ȣ�����ʵ���Ǻ������͵������ڽ��к���/
// ����ʱ���Ƕ�������ȷ����ֵ���Ա����Щֵ���͸��β�
// int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d,b=%d\n", a, b);
//	Swap2(&a, &b);//���ú���--��ַ����
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}//�൱���ǽ�����a,b�ĵ�ַ





// 
// 
// 
// 4.�����ĵ���
// a.��ֵ����
// �������βκ�ʵ�ηֱ�ռ�ò�ͬ���ڴ�飬���βε��޸Ĳ���Ӱ��ʵ��
// b.��ַ����
// ����ַ�����ǰѺ����ⲿ�����������ڴ��ַ���ݸ�����������һ�ֵ��ú����ķ�ʽ��
// �����ִ��η�ʽ�����ú����ͺ�����ߵı�����������������ϵ��Ҳ���Ǻ����ڲ�����ֱ�Ӳ�������/
// �ⲿ�ı���
// 

//һ������1����Ȼ�����������1���������⣬���ܱ�������Ȼ����������ô�����������������������
// ����������Ϊ�������涨1�Ȳ�������Ҳ���Ǻ�����
//�� дһ�����������ж�һ�����ǲ�������
//#include<math.h>
//
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j<=sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;//return 0�����ñ�breakǿ
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	��ӡ100-200֮�������
//	int i = 0;
//	int sum = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			sum++;
//			printf("%d ", i);
//		}	
//	}
//	printf("\nsum=%d ",sum);
//	return 0;
//}


//��дһ�������ж�ĳһ���ǲ�������
//int is_leap_year(int x)
//{
//	
//	if ((x % 4 == 0 && x % 100 != 0 )|| (x % 400 == 0))
//		return 1;
//
//	else
//	return 0;
//}
////���������ʱ����Ҫ��һ����,��ʹ�ô�ӡ����������ֲ�ԽϺ�
//
//int main()
//{
////��ӡ1000-2000֮�������
//	 int year = 0;
//	 int sum = 0;
//	 for (year = 1000; year <= 2000; year++)
//	 {
//		 //�ж��Ƿ�Ϊ����
//		 
//		 if(is_leap_year(year)==1)
//		 { 
//			 printf("%d ", year);
//		     sum++;
//		 }
//		 
//	 }
//	 printf("\nsum=%d", sum);
//	return 0;
//}



//��дһ��������ʵ��һ��������������Ķ��ֲ���
// �����ʱ����ȥ����һ��ָ�룬���������е�һ��Ԫ�ص��±�ĵ�ַ����������������
//int binary_search(int arr[], int k,int sz)//binary search--���ֲ��ҷ�
//{
//	//ʵ���㷨
//
//	int left = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);//��������ֻ��һ��ָ�룬
//	//�������Զ��庯���м���������Ԫ�ظ���
//	int right =sz-1;
//	
//	while(left<=right)  //�ж�������<=
//	{ 
//		int mid = (left + right) / 2;  //�м�Ԫ�ص��±꣬mid�����ѭ������
//		if (arr[mid] < k)
//	   {
//		left = mid + 1;
//	   }
//	else if (arr[mid] > k)
//	   {
//		right = mid - 1;
//	   }
//	else
//	   {
//		return  mid;
//	    }	
//	}
//
//	return -1;
//	}
//
// int main()
// {
//	 //���ֲ���
//	 //��һ�������������ҵ������ĳ����
//	 //����ҵ�������������±꣬�Ҳ�������-1
//	 int arr[] = {1,2,3,4,5,6,7,8,9,10 };
//	 int k = 7;
//	 //���ݵ�ֻ������ĵ�һ��Ԫ�صĵ�ַ
//	 int sz = sizeof(arr) / sizeof(arr[0]);  //�������������ĸ���
//	 int ret =binary_search(arr, k, sz);
//	 if (ret == -1)
//	 {
//		 printf("�Ҳ���ָ��������\n");
//	 }
//	 else
//	 {
//		 printf("�ҵ��ˣ��±���%d\n", ret);
//	 }
//	 return 0;
// }



//��дһ��������ÿ����һ������������ͻὫnum1��ֵ����1
//  void Ad(int* p)
//{
//	(*p)++;//++�����ȼ�����*��������������
//}
//int main()
// {
//	int num = 0;
//	Ad(&num);
//	printf("num=%d\n", num);
//	Ad(&num);
//	printf("num=%d\n", num);
//	Ad(&num);
//	printf("num=%d\n", num);
//
//	 return 0;
// }

//������Ƕ�׵��ú���ʽ����
// �����ͺ���֮������л������

// Ƕ�׵���
 //void new_line()
 //{
 //printf("hehe\n");
 //}

 //void three_line()
 //{
 //int i=0;
 //for(i=0;i<3;i++)
 // {
 //   new_line();//��������ʱ���ܼ�void���ͣ����򷵻ؿ����ͣ���ִ�в���
 // }
 //}

 //int main()
 //{
 //  three_line();
 //  
 //  return 0;
 //}
 

// 	��ʽ����--��һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
//int main()
//{
//	int len = 0;
//	//1.
//	//len = strlen("abc");
//	//printf("%d\n", len);
//	//2.
//	printf("%d\n", strlen("abc"));
//	return 0;
//}


//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43))); //printf��scanf�����ķ���ֵ�Ǵ�ӡ�ַ��ĸ���
//	
//    //printf("%d", printf("%d",2))//��ӡ43
//	//printf("%d",1)//��ӡ432
//	//��ӡ4321
//	return 0;
//}



#include"Add.h"
//����������
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	//�����ĵ���
	sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}
//�����Ķ���
//int Ad(int x, int y)
//{	
//	int z = x + y;
//	return z;
//}
//���һ�٣������������������õ�




//#include"add.h" //�����Լ������ͷ�ļ���""
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	//�����ĵ���
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}  


//add.h��ź�������
//add.c��ź����Ķ���

