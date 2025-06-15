/*D09
现有有N个学生的数据记录，每个记录包括学号、姓名、三科成绩。
编写一个函数input,用来输入一个学生的数据记录。
编写一个函数print,打印一个学生的数据记录。
在主函数调用这两个函数，读取N条记录输入，再按要求输出。 N<100*/

/*定义结构体struct Stu*/

//#include <stdio.h>
//
//#define MAX_STUDENT_NUM 100
//struct Stu
//{
//	int id;            // 学号
//	char name[50];     // 姓名
//	float score1;      
//	float score2;
//	float score3;
//};
////声明应该放在定义之前
//void input(struct Stu *s);
//void print(struct Stu s);
//
//
//
//int main()
//{
//	int n = 0;
//	//创建一个结构体数组，存储学生数据
//	struct Stu students[MAX_STUDENT_NUM];
//	//输入学生个数N
//	printf("请输入学生个数N(N<100)=");
//	scanf_s("%d", &n);
//	printf("\n");
//	if (n >= 100 || n <= 0)
//	{
//		printf("输入错误,程序结束！");
//		return 1;
//	} 
//	//输入学生的信息
//	printf("请输入学生学号、姓名拼音以及三门成绩：\n");
//	printf("\n");
//	for (int i = 0; i < n; i++)
//	{  
//		printf("第%d个学生的信息\n", i + 1);
//		printf("\n");
//		input(&students[i]);//结构体数组也是数组，传地址
//	}
//
//	//输出学生信息
//
//	printf("**********************************\n");
//	printf("以下是输出学生的信息：\n");
//	printf("\n");
//	for (int i= 0; i < n; i++)
//	{
//		printf("第%d个的学生信息:\n", i + 1);
//		printf("\n");
//		print(students[i]);
//		printf("\n");
//	}
//	return 0;
//}
////结构体数组传参过程中是一个一个传的，在发送端要分辨结构体，在接收时只需要接收一个结构体地址即可
//void input(struct Stu *s)//需要对结构体进行操作，所以传地址
//{
//	scanf_s("%d %s %f %f %f", &s->id, &s->name,50, &s->score1, &s->score2, &s->score3);
//	printf("\n");
//}
//void print(struct Stu s)//接收整个结构体，是个结构体就行
//{
//	printf("学号:%d 姓名拼音:%s 三门成绩分别是:%.2f %.2f %.2f\n", s.id, s.name, s.score1, s.score2, s.score3);
//	printf("\n");
//}