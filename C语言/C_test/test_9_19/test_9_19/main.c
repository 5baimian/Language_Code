#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//ָ��
//�ַ�
//ָ������Ĵ�С
// x86��32λ��x64��64λ���洢���ǵ�ַ����ַ��32λ��4���ֽ�
//32λƽ̨--32bit--4���ֽ�
//64λƽ̨--64bit--8���ֽ�

int main()
{
	char ch = 's';
	char* pc = &ch;
	*pc = 'd';
	printf("%p\n", &ch);
	printf("%p\n", pc);
	printf("%c\n", ch);
	printf("%d\n", sizeof(pc));//4

	return 0;
}
// 
// 
// 
// 
//����
//int main()
//
//{
//	int a = 10;//�ĸ��ֽ�
//	//&a--ȡ��ַ
//	//��һ�ֱ�����������ŵ�ַ��-ָ�����
//	int* p = &a;//��a�ĵ�ַ�����ָ�����p����
//
//	*p=20;//*-�����ò�����(ֱ�Ӷ�a���в���)
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	printf("a=%d\n", a);
//	return 0;
//}




//#define���峣���ͺ�
//#define--�����ʶ������
//#define--���Զ����-->������
//#define MAX 100
//
////��Ķ���
//#define MAX(X,Y) (X>Y?X:Y)//��Ŀ������
//int main()
//{
//	int a = 20;
//	int b = 30;
//	//������ʽ
//	int max = Max(a, b);
//	//printf("max=%d\n", max);
//    //��ķ�ʽ
//	max = MAX(a,b);
//	printf("max=%d\n", max);
//	return 0;
//}







//�ؼ���--�������������ͬ
//auto  break const continue enum extern goto register(�Ĵ���) unsigned signed struct 
//typedef union volatile 

//1.static--���κ���
//�ı��˺�������������
//�ⲿ��������--�ڲ���������

//extern int ADD(int, int);//�����ⲿ����
//int main()
//{
//	int a = 20;
//	int b = 30;
//	int sum = ADD(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}



////2.static--����ȫ�ֱ���
////�ı��˱������������þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�ԭ�ļ��ڲ�ʹ�ã�����ԭ�ļ����޷�ʹ��
//int main()
//{
//	//extern--���������ⲿ����
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;
//}

//extern--�����ⲿ����
//extern void test()
//int main()
//{
//	//3.static--���ξֲ�������ʹ�þֲ��������������ڱ䳤
//	
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//
//
//	////int float;//err
//	////typedef--���Ͷ���-�����ض���
//	//typedef unsigned int u_int;//��u_int������unsigned int����
//	//unsigned int a = 10;
//	//u_int b = 20;//�൱��u_int��unsigned int�ı���
//
//	//register int a = 10;//�����a����ڼĴ������ѱ���a����ɼĴ�������
//	//auto int a = 10;//�ֲ�����-->�Զ�������auto���ص���
//	return 0;
//}





//��ϵ������

//& * 

//extern int Max(int x,int y);//�����ⲿ����
//int main()
//{
//	//int arr[] = { 0 };
//	//arr[4];//[]--�±����ò�����
//	int a = 20;
//	int b = 30;
//	int max = Max(a, b);//()--�������ò�����
//	printf("%d\n", max);
//	return 0;
//
//}


// 
//int main()
//{
//	//��Ŀ������
//	int a = 30;
//	int b = 50;
//	int Max = a > b ? a : b;//��Ŀ������
//	printf("%d\n", Max);
//	return 0;
//}



// 
//>=  != ==(�ж����)
//��--��0 
//��--0
//�߼���--&&
//�߼���--||
//int main()
//{
//	int a = 1;
//	int b = 0;
//	//int c = a && b;
//	int c = a || b;
//	printf("%d\n", c);
//	return 0;
//}





//()-->ǿ������ת��
//int main()
//{
//	int a = (int)3.14;//������ǿ������ת��
//	printf("%\n", a);
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	//int b = a++;//����++ ����ʹ�ã���++���Ƚ�a��ֵ��ֵ��b,�ٽ�a���м�1����
//	//int b = ++a;//ǰ��++����++����ʹ�ã��Ƚ�a���м�1�������ٽ�a��ֵ��ֵ��b
//	//int b = a--;//����--����ʹ�ã���++���Ƚ�a��ֵ����b���ٽ�a���м�1����
//	int b = --a;//ǰ��--����--����ʹ�ã��Ƚ�a��ֵ���м�1������֮��ֵ����b
//	printf("a=%d b=%d", a, b);
//	return 0;
//}



//int main()
//{
//	int a = 0;//�ĸ��ֽڣ�32������λ
//	int b = ~a;//~--��λȡ����������λ��
//	//0000 0000 0000 0000 0000 0000 0000 0000
//	//1111 1111 1111 1111 1111 1111 1111 1111
//	//�����1�õ�����
//	//1111 1111 1111 1111 1111 1111 1111 1110
//	//�������λ���䣬����λȡ���õ�ԭ��
//	//1000 0000 0000 0000 0000 0000 0000 0001-->-1
//	printf("%d\n", b);//-1
//	//ԭ�룺
//	//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
//	//���룺
//	//���룺
//	//����ʾʹ�õ����������ԭ��
// //������ԭ������ͬ
// //ֻҪ���������ڴ��д洢�Ķ��Ƕ����ƵĲ���
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof (int) );//4
//	printf("%d\n", sizeof a);//4
//	//printf("%d\n", sizeof int );//err
//	printf("%d\n", sizeof(arr));//��������Ĵ�С����λ���ֽ�
//	printf("%d\n", sizeof(arr)/sizeof(arr[0]));//���������е�Ԫ�ظ���
//
//
//	return 0;
//}




//�Ƚ��������Ĵ�С
//�����ķ���
//int main()
//{
//	int max = 0;
//	max = Max(10, 20);
//	printf("�ϴ�����ǣ�%d\n",max );
//	return 0;
//}



//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("�ϴ�����ǣ�%d\n", num1);
//	else
//		printf("�ϴ�����ǣ�%d\n", num2);
//	//'\0'�ǽ����ı�־�������ַ�������
//	return 0;
//}