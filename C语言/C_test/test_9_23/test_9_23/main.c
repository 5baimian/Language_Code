#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while((ch = getchar())!= EOF)
//	{
//		putchar(ch);
//	}
//	
//	return 0;
//}
//ctrl+z �˳�����


//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("���������룺");
//		scanf("%s", password);
//		//getchar();
//		while ((ch = getchar()) != '\n')
//		{
//			;//��ʱ����һ�������
//		}
//	printf("��ȷ�ϣ�Y/N����");
//	ret = getchar();
//	if (ret == 'Y')
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("����ȷ��\n");
//	return 0;
//}



//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}//ctrl+z��������


/*int main()
{
	int x, y;
	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
	{
		printf("haha\n");
	}
	return 0;
}*///��ӡ����haha



//do-whileѭ��
//int main()
//{
//	int i = 1;
//	do//�����һ����䣬�������ж���ʱ���ô�����������
//	{
//      if(5==i)
//	  {
//		  break;//����ѭ��
//		  continue;//��ѭ��
//       }
//		printf("%d ", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}

//��ϰ
//1.����n�Ľ׳�(���������)
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;//��ֵ����Ϊ��
//
//	printf("������n��");
//		scanf("%d", &n);
//	for (i = 1; i < n + 1; i++)
//	{
//		ret = ret * i;
//	}
//	printf("���n�Ľ׳�n!=%d\n", ret);
//
//	return 0;
//} 


//2.����1��+2��+3��+.....+10��
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	int i = 0;
//	int ret = 1;//��ֵ����Ϊ��
//
//	for (n = 1; n < 11; n++)//ѭ��Ƕ��
//	{
//		ret = 1;//��ret�е����ݳ�ʼ������֤�������n!
//		for (i = 1; i < n + 1; i++)//����ǰ�պ������д��
//		{
//			ret = ret * i;//ret�е�����û�г�ʼ��
//		}
//		sum = sum + ret;
//	}
//	printf("sum=%d\n",sum);
//	
//
//	return 0;
//}Ч�ʲ���,�����Դ���˷ѣ������Ż�

//ÿ�ζ���1��ʼ�ˣ������Դ���˷ѣ������Ż�
// 
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	int i = 0;
//	int ret = 1;//��ֵ����Ϊ��
//
//	for (n = 1; n < 11; n++)//ѭ��Ƕ��
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//  return 0;
//}

//3.��һ�����������в��Ҿ����ĳ������n.��дint binsrarch(int x,int v[],int n);
// ���ܣ���v[0]<=v[1]<=...<=v[n-1]�������в���
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k =7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//���������е�Ԫ�ظ���
//	int i = 0;
//	for (i = 0; i < sz ; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ���,�±��ǣ�%d\n ",i);
//			break;
//		}
//		
//	}
//	if (i == sz)
//		printf("�Ҳ���\n");
//	return 0;
//}
//����������n�Σ������������£�Ч�ʲ���

//�Ż���
//�۰�����㷨/���ֲ����㷨--���������ʹ��
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����������Ԫ�ظ���
//	int left = 0;//���±�
//	int right = sz-1;//���±�
//		
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//mid�ı��ʽ�÷���ѭ�����ڲ���ѭ��
//	     //mid�м�Ԫ���±�
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right) 
//	{
//        printf("�Ҳ���");
//	}
//		
//	return 0;
//}



//4.��д���룬��ʾ����ַ��������ƶ������м��ۡ�
// �ﵽ��Ч����
//����  welcome to ahpu!!!
//#################
//w###############!
//we#############!!
//.................
//welcome to ahpu!!!

//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to  NEU !!!";
//	char arr2[] = "###################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 1;//err,û���������־��(\0)���±�
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//right,���������������������־��,�������ú�����
//	int right = strlen(arr1) - 1;//strlen�����������ַ������ȣ�������������־��,��һ��������Ϊ�±����Ԫ�ظ�����һ
//		while (left <= right)
//		{
//			arr2[left] = arr1[left];
//	        arr2[right] = arr1[right];
//		    printf("%s\n", arr2);
//			left++;
//		    right--;
//
//			//��Ϣ1s
//			Sleep(1000);//ʵ����Ϣһ��֮���ٴ�ӡ����Ҫ����ͷ�ļ�#include<windows.h>
//			system("cls");//ִ�������һ������--cls--�����������Ļ��������ͷ�ļ�#include<stdlib.h>
//			
//		}
//		printf("%s", arr2);
//	return 0;
//}


//5.��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ����ʾ��¼�ɹ���\
������ξ�����������˳�����

//#include<string.h>
//int main()
//{
//	int i = 0;
//	int password[20] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", password);//Ӧ�ð�����forѭ���ڲ�
//		//if (password ==123456)/==���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��-strcmp(����ͷ�ļ�#include<string.h>)
//		if (strcmp(password, "123456") == 0)//��ʾ�����ַ������
//		{
//			printf("��¼�ɹ�");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("��������������˳�����\n");
//
//	}
//
//	return 0;
//
//}



//ѭ�����֧+��ҵ+��ϰ
//1.�Ӵ�С�������ֵ
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("�����룺\n");
//	scanf("%d%d%d", &a,&b,&c);//ʲô�����ӣ�����ո�Ϳ���
//	//�㷨ʵ��
//	//a�з����ֵ
//	//b��֮
//	//c�з���Сֵ
//	if (a < b)
//	{
//		int temp = a;
//		a = b;
//		b= temp;
//	}
//	 if (a < c)
//	{
//		int asd = a;
//		a = c;
//		c = asd;
//	}
//	//��֤a�д�ŵ������ֵ
//	
//  		if (c > b)
//		{
//			int qwe = b;
//			b = c;
//			c = qwe;
//		}
// //��֤c���д����Сֵ
//	
//	printf("�Ӵ�С�����ǣ�%d,%d,%d", a, b, c);
//	return 0;
//}


//2.��ӡ1--100֮��3�ı���
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//
//	}
//	return 0;
//}

//3.���������������������������Լ��
//շת�����
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r=m % n)
//	{
//		//r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d", n);
//	return 0;
//
//}



//4.��ӡ1000--2000֮�������
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year < 2001; year++)
//	{
//		//�ж�����Ĺ���
//		//1.�ܱ�4�������Ҳ��ܱ�100����
//		//2.�ܱ�400����������
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}



////���д���㶨
//for ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
//{
//	printf("%d ", year);
//	count++;
//}


//5.��ӡ100--200֮�������
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <=200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ���������������1����������
//		//�����жϹ���
//		//1.�Գ���
//		//����2��i-1
//		int j = 0;
//		for (j = 2; j < i; j++)//j���ȡi-1
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if(i==j)
//		
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}//�����㷨Ч��̫��,�����Ż�

//�Ż���
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	
//	for (i = 100; i <=200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ���������������1����������
//		//�����жϹ���
//		//1.�Գ���
//		//����2��i-1
// 
//      //i=a*b -->a��b��������һ������С�ڵ��ڿ�ƽ��i
//      //ֻ��Ҫ��2����ƽ��i֮������ּ���
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)//sqrt--��ƽ������ѧ�⺯����Ҫ����ͷ�ļ�<math.h>
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if(j>sqrt(i))
//		
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}


//���Ż��Գ���
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 199; i+=2)//ż������������
//	{
//		//�ж�i�Ƿ�Ϊ���������������1����������
//		//�����жϹ���
//		//1.�Գ���
//		//����2��i-1
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}
//(��������n�־���)




//�ҹ���
//1.��ʵϰ
//�����ϣ�11,12�����£�3.4.5.6��
//�󳧣���Ѷ������ٶȣ�ͷ�����εΣ����ţ�
// ʵϰ���磬����ʵϰ����
// a.��ǰ�������ƣ�
// b.��ʽ��
//2.У���ҹ���
// ���ģ�9.10.11.12��--�����ʮ
// a.��ǰ��
// b.��ʽ��
// 
//

//1.��дһ�γ�����һ��1--100�����������г��ֶ��ٸ�����9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;//9,19,29,39,49,59,69,79,89,99
//			printf("%d ", i);
//		}
//		if (i / 10 == 9)
//			count++;//91,92,93,94,95,96,97,98,99
//	}
//	printf("\ncount=%d\n", count);
//	
//	
//	return 0;
//
//}


//����1/1-1/2+1/3-1/4+1/5-.......+1/99-1/100��ֵ����ӡ�����
//int main()
//{
//	int i = 0;
//	double sum = 0.0;//����sum��С��
//	for (i = 1; i <= 100; i++)
//	{
//		if(i%2==0)
//		{
//			sum -= 1.0 / i;//��ʱҲ��sum��ΪС����ʾ 
//		}
//		
//		else
//		{
//			sum += 1.0 / i;
//		}
//
//	}
//	printf("%lf\n", sum);//��ӡsum��%lf���д�ӡ
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	double sum = 0.0;//����sum��С��
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//	 
//		sum += flag*1.0 / i;
//		flag = -flag;
//
//
//	}
//	printf("%lf\n", sum);//��ӡsum��%lf���д�ӡ
//	return 0;
//}

//��10�������е����ֵ
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	int max = 0;
//	
//	scanf("%d%d%d%d%d%d%d%d%d%d", &arr[i]);
//	int sz = sizeof(arr) / sizeof(arr(0));
//	for (i = 0; i < sz; i++)
//	{
//		int max = arr[0];
//		
//		if (arr[i] >max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//
//	return 0;
//}
//������������⣬����

//int main()
//{
//	
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int max = arr[0];
//    int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i <= sz; i++)
//	{
//
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//
//	return 0;
//}


//9*9�˷���
//int main()
//{
//	int i = 0;
//	int n = 0;
//	
//	for (i = 1; i <= 9; i++)
//	{
//	    int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			n = i * j;
//			printf(" %d*%d=%2d", i, j, n);//%2d���Ҷ��룬%-2�������
//		}
//		printf("\n");
//
//	}
//	return 0;
//}


//��д������һ���������������в���ĳ��׼ȷ��/
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ���������Ҳ���
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ���");
//	}
//
//	return 0;
//}

//��������Ϸ
// 1.���Ի�����һ�������
// 2.������
//

//#include <stdlib.h>
//#include<time.h>
//void game()//void--�޲�
//{
//	//1.����һ�������
//	//srand((unsigned int)time(NULL));//time������Ҫ�ṩͷ�ļ�<time.h>
//	//ʱ���:��ǰ�������ʱ��-���������ʼʱ�䣨1970.1.1.0.0.0��=��****����
//	//��ʱ����������������������ʼ��
//	int ret = 0;
//	int guess = 0;
//	printf("������\n");
//	ret = rand() % 100 + 1;//����1--100֮�����
//   //printf("%d\n", ret);
//
//   //rand();//����������֣���Ҫ����ͷ�ļ�<stdlib.h>,rand()������ķ�Χ��0--32767
//   //2.������
//	while (1)
//	{
//		printf("�������:\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//
//	}
//
//}
//void menu()
//{
//	printf("****************************************\n");
//	printf("*****   1.play      0.exit         *****\n");
//	printf("****************************************\n");
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//��������Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}

//goto���
//��������߼����ң���bug
//int main()
//{
//	goto again;
//	printf("haha\n");
//	
//
//again:
//	printf("hehe\n");
//	return 0;
//}

//��gotoʵ�ֹػ�����
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	shutdown-s-t 60  -s�������ùػ���-t��������ʱ��ػ�,shutdown -aȡ��
//	�ڵ���������������cmd�ɳ���
//	system()--ִ��ϵͳ�����
//	char input[20] = { 0 };
//	system("shutdown -s -t 180");
//	again:
//	printf("��ע�⣬��ĵ��Խ��������Ӻ�ػ���������룺��������ȡ���ػ�\n�����룺");
//		scanf("%s", input);
//	if (strcmp(input, "������") == 0)//�Ƚ������ַ���--strcmp
//	{
//		system("shutdown -a");//ͷ�ļ���<stdlib.h>
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}

//����goto���
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	//shutdown-s-t 60  -s�������ùػ���-t��������ʱ��ػ�,shutdown -aȡ��
//	//�ڵ���������������cmd�ɳ���
//	//system()--ִ��ϵͳ�����
//	char input[20] = { 0 };
//	system("shutdown -s -t 180");
//	while (1) 
//	{
//		printf("��ע�⣬��ĵ��Խ��������Ӻ�ػ���������룺��������ȡ���ػ�\n�����룺");
//	    scanf("%s", input);
//	    if (strcmp(input, "������") == 0)//�Ƚ������ַ���--strcmp
//	      {
//		     system("shutdown -a");//ͷ�ļ���<stdlib.h>
//		      break;
//	       }
//
//	}
//	
//	
//
//	return 0;
//}