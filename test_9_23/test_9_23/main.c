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
//ctrl+z 退出程序


//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：");
//		scanf("%s", password);
//		//getchar();
//		while ((ch = getchar()) != '\n')
//		{
//			;//此时这是一条空语句
//		}
//	printf("请确认（Y/N）：");
//	ret = getchar();
//	if (ret == 'Y')
//		printf("确认成功\n");
//	else
//		printf("放弃确认\n");
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
//}//ctrl+z结束程序


/*int main()
{
	int x, y;
	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
	{
		printf("haha\n");
	}
	return 0;
}*///打印两个haha



//do-while循环
//int main()
//{
//	int i = 1;
//	do//后面接一个语句，当后面有多条时，用大括号括起来
//	{
//      if(5==i)
//	  {
//		  break;//跳出循环
//		  continue;//死循环
//       }
//		printf("%d ", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}

//练习
//1.计算n的阶乘(不考虑溢出)
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;//初值不能为零
//
//	printf("请输入n：");
//		scanf("%d", &n);
//	for (i = 1; i < n + 1; i++)
//	{
//		ret = ret * i;
//	}
//	printf("求得n的阶乘n!=%d\n", ret);
//
//	return 0;
//} 


//2.计算1！+2！+3！+.....+10！
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	int i = 0;
//	int ret = 1;//初值不能为零
//
//	for (n = 1; n < 11; n++)//循环嵌套
//	{
//		ret = 1;//将ret中的数据初始化，保证求的数是n!
//		for (i = 1; i < n + 1; i++)//采用前闭后开区间的写法
//		{
//			ret = ret * i;//ret中的数据没有初始化
//		}
//		sum = sum + ret;
//	}
//	printf("sum=%d\n",sum);
//	
//
//	return 0;
//}效率不高,造成资源的浪费，可以优化

//每次都从1开始乘，造成资源的浪费，可以优化
// 
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	int i = 0;
//	int ret = 1;//初值不能为零
//
//	for (n = 1; n < 11; n++)//循环嵌套
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//  return 0;
//}

//3.在一个有序数组中查找具体的某个数字n.编写int binsrarch(int x,int v[],int n);
// 功能：在v[0]<=v[1]<=...<=v[n-1]的数组中查找
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k =7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组中的元素个数
//	int i = 0;
//	for (i = 0; i < sz ; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了,下标是：%d\n ",i);
//			break;
//		}
//		
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}
//最坏的情况查找n次，在有序的情况下，效率不高

//优化：
//折半查找算法/二分查找算法--有序情况下使用
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组中元素个数
//	int left = 0;//左下标
//	int right = sz-1;//右下标
//		
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//mid的表达式得放在循环体内参与循环
//	     //mid中间元素下标
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
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right) 
//	{
//        printf("找不到");
//	}
//		
//	return 0;
//}



//4.编写代码，演示多个字符从两端移动，向中间汇聚。
// 达到的效果：
//例如  welcome to ahpu!!!
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
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 1;//err,没计算结束标志符(\0)的下标
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//right,这种求法容易忘记算结束标志符,还可以用函数求
//	int right = strlen(arr1) - 1;//strlen函数用来求字符串长度，不包含结束标志符,减一操作是因为下标等于元素个数减一
//		while (left <= right)
//		{
//			arr2[left] = arr1[left];
//	        arr2[right] = arr1[right];
//		    printf("%s\n", arr2);
//			left++;
//		    right--;
//
//			//休息1s
//			Sleep(1000);//实现休息一秒之后再打印，需要引用头文件#include<windows.h>
//			system("cls");//执行命令的一个函数--cls--作用是清空屏幕，需引入头文件#include<stdlib.h>
//			
//		}
//		printf("%s", arr2);
//	return 0;
//}


//5.编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则提示登录成功，\
如果三次均输入错误，则退出程序）

//#include<string.h>
//int main()
//{
//	int i = 0;
//	int password[20] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", password);//应该包含在for循环内部
//		//if (password ==123456)/==不能用来比较两个字符串是否相等，应该使用一个库函数-strcmp(引用头文件#include<string.h>)
//		if (strcmp(password, "123456") == 0)//表示两个字符串相等
//		{
//			printf("登录成功");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码均错误，退出程序\n");
//
//	}
//
//	return 0;
//
//}



//循环与分支+作业+练习
//1.从大到小输出三个值
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入：\n");
//	scanf("%d%d%d", &a,&b,&c);//什么都不加，输入空格就可以
//	//算法实现
//	//a中放最大值
//	//b次之
//	//c中放最小值
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
//	//保证a中存放的是最大值
//	
//  		if (c > b)
//		{
//			int qwe = b;
//			b = c;
//			c = qwe;
//		}
// //保证c当中存放最小值
//	
//	printf("从大到小排列是：%d,%d,%d", a, b, c);
//	return 0;
//}


//2.打印1--100之内3的倍数
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

//3.给定两个数，求这两个数的最大公约数
//辗转相除法
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



//4.打印1000--2000之间的闰年
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year < 2001; year++)
//	{
//		//判断闰年的规则
//		//1.能被4整除并且不能被100整除
//		//2.能被400整除是闰年
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



////两行代码搞定
//for ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
//{
//	printf("%d ", year);
//	count++;
//}


//5.打印100--200之间的素数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <=200; i++)
//	{
//		//判断i是否为素数（除了自身和1可以整除）
//		//素数判断规则
//		//1.试除法
//		//产生2到i-1
//		int j = 0;
//		for (j = 2; j < i; j++)//j最大取i-1
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
//}//这种算法效率太低,可以优化

//优化：
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	
//	for (i = 100; i <=200; i++)
//	{
//		//判断i是否为素数（除了自身和1可以整除）
//		//素数判断规则
//		//1.试除法
//		//产生2到i-1
// 
//      //i=a*b -->a和b中至少有一个数字小于等于开平方i
//      //只需要找2到开平方i之间的数字即可
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)//sqrt--开平方的数学库函数，要引入头文件<math.h>
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


//再优化试除法
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 199; i+=2)//偶数不会是素数
//	{
//		//判断i是否为素数（除了自身和1可以整除）
//		//素数判断规则
//		//1.试除法
//		//产生2到i-1
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
//(素数求解的n种境界)




//找工作
//1.找实习
//大三上（11,12），下（3.4.5.6）
//大厂（腾讯，阿里，百度，头条，滴滴，美团）
// 实习乘早，积累实习经验
// a.提前批（内推）
// b.正式批
//2.校招找工作
// 大四（9.10.11.12）--金九银十
// a.提前批
// b.正式批
// 
//

//1.编写一段程序数一下1--100的所有整数中出现多少个数字9
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


//计算1/1-1/2+1/3-1/4+1/5-.......+1/99-1/100的值，打印出结果
//int main()
//{
//	int i = 0;
//	double sum = 0.0;//定义sum是小数
//	for (i = 1; i <= 100; i++)
//	{
//		if(i%2==0)
//		{
//			sum -= 1.0 / i;//此时也让sum变为小数表示 
//		}
//		
//		else
//		{
//			sum += 1.0 / i;
//		}
//
//	}
//	printf("%lf\n", sum);//打印sum用%lf进行打印
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	double sum = 0.0;//定义sum是小数
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//	 
//		sum += flag*1.0 / i;
//		flag = -flag;
//
//
//	}
//	printf("%lf\n", sum);//打印sum用%lf进行打印
//	return 0;
//}

//求10个整数中的最大值
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
//上面代码有问题，不对

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


//9*9乘法表
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
//			printf(" %d*%d=%2d", i, j, n);//%2d是右对齐，%-2是左对齐
//		}
//		printf("\n");
//
//	}
//	return 0;
//}


//编写代码在一个整型有序数组中查找某个准确数/
//要求：找到了就打印数字所在的下标，找不到则输出找不到
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
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//
//	}
//	if (i == sz)
//	{
//		printf("找不到");
//	}
//
//	return 0;
//}

//猜数字游戏
// 1.电脑会生成一个随机数
// 2.猜数字
//

//#include <stdlib.h>
//#include<time.h>
//void game()//void--无参
//{
//	//1.生成一个随机数
//	//srand((unsigned int)time(NULL));//time函数需要提供头文件<time.h>
//	//时间戳:当前计算机的时间-计算机的起始时间（1970.1.1.0.0.0）=（****）秒
//	//拿时间戳来设置随机数的生成起始点
//	int ret = 0;
//	int guess = 0;
//	printf("猜数字\n");
//	ret = rand() % 100 + 1;//生成1--100之间的数
//   //printf("%d\n", ret);
//
//   //rand();//生成随机数字，需要引入头文件<stdlib.h>,rand()随机数的范围在0--32767
//   //2.猜数字
//	while (1)
//	{
//		printf("请猜数字:\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对啦\n");
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
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}

//goto语句
//容易造成逻辑混乱，出bug
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

//用goto实现关机程序
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	shutdown-s-t 60  -s用来设置关机，-t用来设置时间关机,shutdown -a取消
//	在电脑搜索栏中输入cmd可尝试
//	system()--执行系统命令的
//	char input[20] = { 0 };
//	system("shutdown -s -t 180");
//	again:
//	printf("请注意，你的电脑将在三分钟后关机，如果输入：我是猪，就取消关机\n请输入：");
//		scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)//比较两个字符串--strcmp
//	{
//		system("shutdown -a");//头文件是<stdlib.h>
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}

//不用goto语句
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	//shutdown-s-t 60  -s用来设置关机，-t用来设置时间关机,shutdown -a取消
//	//在电脑搜索栏中输入cmd可尝试
//	//system()--执行系统命令的
//	char input[20] = { 0 };
//	system("shutdown -s -t 180");
//	while (1) 
//	{
//		printf("请注意，你的电脑将在三分钟后关机，如果输入：我是猪，就取消关机\n请输入：");
//	    scanf("%s", input);
//	    if (strcmp(input, "我是猪") == 0)//比较两个字符串--strcmp
//	      {
//		     system("shutdown -a");//头文件是<stdlib.h>
//		      break;
//	       }
//
//	}
//	
//	
//
//	return 0;
//}