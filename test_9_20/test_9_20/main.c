#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//c������һ�Žṹ���ĳ����������
//1.˳��ṹ
//2.ѡ��ṹ
//3.ѭ���ṹ 

//ѭ�����

int main()
{
	int ch = 0;
	//ctrl+z--��������
	//EOF--end of file->-1
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}





//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		i++;
//		if (5 == i)
//			//break;//ֹͣ������whileѭ��
//			continue;//������ֹ����ѭ����ֱ�ӽ���while���жϲ��֣�������һ��ѭ��
//		printf("%d\n", i);
//		
//	}
//	return 0;
//}







//��֧��䣨ѡ��ṹ��
//switch���--�����ڶ��֧�����
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;//m=3
//	case 2:n++;//n=2
//	case 3:
//		switch (n)
//		{
//			//switch����Ƕ��ʹ��
//		case 1:n++;
//		case 2:m++; n++; break;//m=4,n=3
//		}
//	case 4:m++;//m=5,n=3
//		break;
//	default:
//		break;
//	}
//	printf("m=%d  n=%d\n",m,n);
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	int n = 1;
//	scanf("%d", &day);
//	switch (day)//day--����������
//	{
//	case 1://1--���ͳ������ʽ
//	//	printf("����һ\n");
//	//	break;
//		if (n == 1)
//		{
//			printf("hehe\n");
//		}
//	case 2:
//	//	printf("���ڶ�\n");
//	//	break;
//	case 3:
//	//	printf("������\n");
//	//	break;
//	case 4:
//	//	printf("������\n");
//	//	break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	//	printf("������\n");
//	//	break;
//	case 7:
//		printf("��Ϣ��\n");
//		break;//��break;,���õı�̷��
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}




//1.�ж�һ����������
//2.���1-100֮�������

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		int a = i % 2;
//		if (a == 1)
//		{
//			printf("iΪ������i=%d\n", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int num = 4;
//	if (num = 5)//��ֵ=���ж����==����ʱ����ִ�кǺ�
//		//���жϳ����ͱ������бȽ�ʱ�������������
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("haha\n");
//		else//�������if����
//			printf("hehe\n");
//	return 0;
//}


//if���
//int main()
//{
//	int age = 0;
//	printf("���������䣺\n");
//	scanf("%d", &age);
//    //���֧
//	if (age < 18)
//	{
//		printf("δ����\n");
//	}
//	else if (age >= 18 && age < 28)
//	{
//		printf("����\n");
//	}
//	else if (age >= 28 && age < 50)
//	{
//		printf("׳��\n");
//	}
//	else if (age >= 50 && age <= 90)
//	{
//		printf("����\n");
//	}
//	else
//		printf("�ϲ���\n");
//
//	//˫��֧
//	/*if (age < 18)
//	{
//		printf("δ����\n");
//	}//{}--�����
//	else
//	{
//		printf("�ѳ���\n");
//	}*/
//
//	//����֧
//	/*if (age < 18)
//	{
//		printf("δ����\n");
//	}*/
//	return 0;
//}




//�ṹ��
//char int double...
//��--����+���+����+���֤����...
//��--����+������+����+���...
//�������Ӷ���--�ṹ��--�����Լ����������һ������

//����һ���ṹ������
//struct Book
//{
//	char name[20];//c���Գ������
//	short price;//55
//};
//int main()
//{
//	//���ýṹ������-����һ�������͵Ľṹ�����
//	struct Book b1 = { "c���Գ������",55 };
//	//����pb��ӡ��������ֺͼ۸�
//	struct Book* pb = &b1;
//	//.--�ṹ�����.��Ա
//	//->--�ṹ��ָ��->��Ա
//	//printf("%s\n", pb->name);
//	//printf("%d\n", pb->price);
//	
////��θ�����
//	//b1.name = "C++";//�ַ���������ͬ����ֵ����
//	strcpy(b1.name, "C++");//string-copy--�ַ�������-�⺯��-string.h
//	printf("������%s\n",pb->name);
//	//b1.price = 15;//��ֵ�������Ը���
//
//
//
//
//	/*printf("������%s\n", (*pb).name);
//	printf("�۸�%d\n", (*pb).price);
//	(*pb).price = 15;
//	printf("�޸ĺ�ļ۸�:%d\n", (*pb).price);*/
//	
//
//	/*printf("������%s\n", b1.name);
//	printf("�۸�%d\n", b1.price);
//	b1.price = 15;
//	printf("�޸ĺ�ļ۸�%d\n", b1.price);*/
//	return 0;
//}



   
//int main()
//{
//	printf("%d\n", sizeof(char*));//4
//	printf("%d\n", sizeof(short*));//4
//	printf("%d\n", sizeof(int*));//4
//	printf("%d\n", sizeof(double*));//4
//	//ָ�����ʹ�ŵ��ǵ�ַ�Ĵ�С��ֻҪ��32λƽ̨�ϣ���ռ��4���ֽ�                                                                                            
//	
//	/*double d = 3.14;
//	double* pd = &d;
//	*pd = 5.5;
//	printf("%lf\n", d);
//	printf("%lf\n", *pd);
//	printf("%d\n", sizeof(pd));*/
//	return 0;
//}




//int main()
//{
//	int a = 10;//�������ĸ��ֽ�
//	int* p = &a;//p--ָ�����--������ŵ�ַ
//    //p��������int*,c��ʱ��*����Ϊ��˵������
//	*p = 20;//�����ò�����/������ò�����
//	//��ʱ��*�ǽ����ò�����
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	printf("%d\n", a);
//
//	return 0;
//}