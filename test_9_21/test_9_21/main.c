#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//ѭ��
//do ...while()
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//		{
//			//break;//����ѭ��
//			continue;//��ѭ��
//		}
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}






//forѭ��--��while()ѭ�������
//�žų˷���
int main()
{
	int i = 1;
	int j = 1;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			if (i >= j)
			{
              printf("%d*%d=%2d  ", i, j, i*j);	
			  if (i==j)
			   {
				printf("\n");
			   } 
			}			
		}	
	}
	return 0;
}

//����2
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("haha\n");
//	}
//	return 0;
//}




//for����1
//int main()
//{
//	for (;;);//forѭ���ĳ�ʼ�����жϡ�����������ʡ��
//	//��ʡ���ж�����ʱ���������жϺ�Ϊ�棬��������ѭ��
//	//������ʡ��
//	{
//		printf("haha\n");
//	}
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	//   ��ʼ��  �ж�  ����
//	for (i = 0; i < 10; i++)//tips:��ѭ�����Ʊ�����ȡֵ�������"ǰ�պ�"�����д��
//		                    //     д��i<10,������д��i<=9
//	{
//		if (i == 5)//tips:��������ѭ�����ڸ���ѭ����������ֹforѭ��ʧȥ����
//		{
//			continue;//forѭ�����������ѭ��
//			//break;//����ѭ��
//		}
//		printf("%d\n",i);
//
//	}
//	return 0;
//}



//int main()
//{
//	int i = 0;//��ʼ��
//	while (i < 100)//�ж�
//	{
//		//.....
//		//i++;//����
//	}
//	return 0;
//}




//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')//ֻ��ӡ�ַ�0-9�����಻��ӡ
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}




//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("���������룺");
//	scanf("%s", &password);//�������룬�������password������
//	//��������ʣ��һ��'\n'
//	//��ȡһ��'\n'
//	while (ch = getchar() != '\n')
//	{
//		;//����䣬ʲôҲ�������������
//	}
//	printf("��ȷ�ϣ�Y/N��:");
//	ret = getchar();//Y/N
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//
//
//
//	//int ch = 0;
//	////EOF--end of file--�ļ�������־
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);
//	//}
//	//return 0;
//}