#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
//sizeof--��Ŀ������
int main()
{
	int arr[10] = { 0 };
	int sz = 0;
	//10*sizeof(int)=40
	printf("%d\n", sizeof(arr));
	//���������Ԫ�ظ���
	//����=�����ܴ�С/ÿ��Ԫ�صĴ�С
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("sz=%d\n", sz);



	int a = 10;
	printf("%d\n", sizeof(a));
	//sizeof--������Ǳ���/������ռ�ռ�Ĵ�С����λ���ֽ�
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof a);
	//printf("%d\n", sizeof int);//err

	return 0;
}











////��Ŀ������
////˫Ŀ������
////��Ŀ������
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//a+b;//+˫Ŀ������
//	//C���Ե���0��ʾ�٣������ʾ��
//	//int a = 0;
//	int a = -2;//-��ʾ��Ŀ������
//	int b = -a;
//	int c = +3;//+�ö���ʡ��
//	printf("%d\n", a);
//	printf("%d\n", !a);
//
//
//	return 0;
//}








//int main()
//{
//	int a = 10;
//	a = 20;//=��ֵ  ==�ж����
//	a = a + 10;
//	a += 10;
//	a = a - 10;
//	a -= 10;
//	a = a & 2;
//	a &= 2;
//	//���ϸ�ֵ��
//	//+= -= *= \= >>= <<= &= %= ^=
//	rteurn 0;
//}








//int main()
//{
//	//�������ƣ�λ���� 
//	//&--��λ��   ��0ȡ0��ȫ1ȡ1
//	//|--��λ��   ��1ȡ1
//	//^--��λ���  ��Ӧ�Ķ�����λ��ͬ��Ϊ0����Ӧ�Ķ�����λ������Ϊ1
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	int d = a | b;
//	int e = a ^ b;
//	//a= 0000 0000 0000 0000 0000 0000 0000 0011
//	//b= 0000 0000 0000 0000 0000 0000 0000 0101
//	printf("%d\n", c);//1
//	//c= 0000 0000 0000 0000 0000 0000 0000 0001
//	printf("%d\n", d);//7
//	//c= 0000 0000 0000 0000 0000 0000 0000 0111
//	printf("%d\n", e);//6
//	//c= 0000 0000 0000 0000 0000 0000 0000 0110
//	return 0;
//}










////��λ������
//int main()
//{
//	//��λ��������������λ��
//	//<<����
//	//>>����
//	int a = 1;
//	//����1ռ���ĸ��ֽ�-32������λ
//	//0000 0000 0000 0000 0000 0000 0000 0001
//	int b = a >> 2;
//	int c = a << 2;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//	return 0;
//
//}









//int main()
//{
//	int a = 5 % 2;
//	printf("%d\n", a);//ȡģ
//	return 0;
//}







////����
//int main()
//{
//	//int a=1;
//	//int b=2;
//	//int c=3;
//	//int d=4;
//	//int e=5;
//	//int f=6;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };//����һ�����10���������ֵ�����
//	//�±��0��ʼ   0 1 2 3 4 5 6 7 8 9 
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}//������ӡ1-0
//	//printf("%d", arr[4]);//�±�ķ�ʽ����Ԫ��
//	//arr[�±�]
//	//char ch[20]
//	//float arr2[5]
//	return 0;
//}















//
////�Զ��庯��
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	//sum = num1 + num2;
//	sum=Add(num1,num2);
//	printf("%d\n", sum);
//
//	return 0;
//}


//ѭ�����
//int main()
//{
//	int line = 0;
//	int i = 0;
//	printf("�������\n");
//	while (i < 200)
//	{
//		i++;
//		printf("��һ�д���\n");
//		
//	}
//	if (i >= 200)
//	{
//		printf("��offer\n");
//	}
//	return 0;
//}







//ѡ�����
//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("��offer\n");
//
//	}
//	else
//	{
//		printf("������\n");
//	}
//
//	return 0;
//}












//�ַ���+ת���ַ�+ע��
//ת���ַ�-ת��ԭ������˼
/*
int main()
{
	printf("%d\n", strlen("c:\test\32\test.c"));//13
	//\32--32�������˽�������
	//32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
	//32-->ʮ���� 26 -->��ΪASCII��ֵ������ַ�
	printf("%c\n",'\132');//132�˽���-->1*8^2+3*8^1+2*8^0
	printf("%c\n",'\x61');//6*16+1=97-->'a'
	return 0;
}*/







//int main()
//{
//	printf("%c\n", '\'');
//	printf("abc\n");//\n-����
//	printf("https:\\github.com\5baimian\C-CODE\n");
//	printf("(are you ok?\?)\n");
//	return 0;
//}





//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", strlen(arr1));//3
//								 //strlen-string length-�����ַ������ȵ�
//	printf("%d\n", strlen(arr2));//���ֵ
//	return 0;
//}








//int main()
//{
//	//�����ڼ��������洢��ʱ�򣬴洢����2����
//	//a-97
//	//A-65
//	//...
//	//ASCII����
//	//ASCII��ֵ
//
//	//char arr1[] = "abc";//����abc
//	////"abc"='a'��'b'��'c'��'\0' '\0'-�ַ����Ľ�����־
//	//char arr2[] = { 'a','b','c',0};//abc���������abc
//	////'\0'=0
//	////'a'=97
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	//return 0;
//}


//int main()
//{
//	"abcdef";
//	"hello";
//		"";//���ַ���
//	return 0;
//}












//4.ö�ٳ���
//ö��-һһ�о�
//�Ա��У�Ů������
//��ԭɫ���졢�ơ���
//���ڣ���2��3��4��5��6��7

//ö�ٹؼ���-enum
//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//
//int main()
//{
//	enum Color color = BLUE;
//	color = YELLOW;
//	//BLUE = 6;err ö�ٳ��������޸�
//	return 0;
//}






//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
////MALE��FEMALE��SECRET--ö�ٳ���
//int main()
//{
//	printf("%d\n",MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	return 0;
//}










////3.#define ����ı�ʶ������
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}












//int main()
//{
//	//2.const-������
//	//const int n = 10;//n�Ǳ��������־��г����ԣ�����˵n�ǳ�����
//	//int arr[n] = { 0 };
//	//const���εĳ�����
//	/*const int num = 1;
//	printf("%d\n",num);
//	num = 5;
//	printf("%d\n",num);*/
//
//	//3;1.���泣��
//	return 0;
//}












//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	//scanf��C�����ṩ��
//	//scanf_s���Ǳ�׼C�����ṩ�ģ���VS�������ṩ�ģ������п�ƽ̨��/����ֲ��
//	//strcpy
//	//strlen
//	//strcat
//	//...
//	//����ȫ��
//	sum = num1 + num2;
//	printf("%d\n", sum);
//
//	return 0;
//}













//int main()
//{
//	char arr[10] = {0};
//	strcpy(arr, "hello");//����ͷ�ļ� string.h
//	printf("%s\n",arr);
//	return 0;
//}













//int main()
//{
//	char arr[5] = { 0 };
//	scanf("%s", &arr);
//	printf("%s\n",arr);
//	return 0;
//}