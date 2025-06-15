#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//循环
//do ...while()
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//		{
//			//break;//跳出循环
//			continue;//死循环
//		}
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}






//for循环--较while()循环更简洁
//九九乘法表
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

//变种2
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("haha\n");
//	}
//	return 0;
//}




//for变种1
//int main()
//{
//	for (;;);//for循环的初始化、判断、调整都可以省略
//	//当省略判断条件时，那条件判断恒为真，会陷入死循环
//	//不建议省略
//	{
//		printf("haha\n");
//	}
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	//   初始化  判断  调整
//	for (i = 0; i < 10; i++)//tips:在循环控制变量的取值建议采用"前闭后开"区间的写法
//		                    //     写成i<10,不建议写成i<=9
//	{
//		if (i == 5)//tips:不可以在循环体内更改循环变量，防止for循环失去控制
//		{
//			continue;//for循环不会造成死循环
//			//break;//跳出循环
//		}
//		printf("%d\n",i);
//
//	}
//	return 0;
//}



//int main()
//{
//	int i = 0;//初始化
//	while (i < 100)//判断
//	{
//		//.....
//		//i++;//调整
//	}
//	return 0;
//}




//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')//只打印字符0-9，其余不打印
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
//	printf("请输入密码：");
//	scanf("%s", &password);//输入密码，并存放在password数组中
//	//缓冲区还剩余一个'\n'
//	//读取一下'\n'
//	while (ch = getchar() != '\n')
//	{
//		;//空语句，什么也不操作，往后读
//	}
//	printf("请确认（Y/N）:");
//	ret = getchar();//Y/N
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//
//
//
//	//int ch = 0;
//	////EOF--end of file--文件结束标志
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);
//	//}
//	//return 0;
//}