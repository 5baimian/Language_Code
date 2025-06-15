/*D10
有N个学生，每个学生的数据包括学号、姓名、3门课的成绩，
从键盘输入N个学生的数据，要求打印出3门课的总平均成绩，
以及最高分的学生的数据（包括学号、姓名、3门课成绩）*/

/*
*   1、定义结构体类型 struct Stu
*   2、创建数组，输入学生信息
*   3、输出总平均成绩以及最高分的学生信息
*/
//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX_STUDENT_NUM 100
//
//struct Stu
//{
//	int id;
//	char name[50];
//	float score1;
//	float score2;
//	float score3;
//	float ave_score;
//};
//
//void input(struct Stu* s);
//void cal_print(struct Stu *s);
//
//int main()
//{
//	//创建结构体
//	struct Stu student[MAX_STUDENT_NUM];
//	//输入学生个数N
//	int n = 0;
//	printf("请输入学生总人数N(N<100)：");
//	scanf_s("%d",&n);
//	printf("\n");
//	if (n >= 100 || n <= 0)
//	{
//		printf("输入错误,程序结束！");
//		return 1;
//	} 
//
//	//创建一个动态数组，用于储存平均数信息
//	float* average = (float*)malloc(n*sizeof(float));
//	//\0是字符串专用结束标志，其余不需要预留空间
//
//	//输入学生信息
//	printf("请输入学生的信息，包括学号、姓名以及三科成绩：\n");
//	printf("\n");
//	for (int i = 0; i < n; i++)
//	{
//		//提示信息
//		printf("第%d个学生的信息: ", i + 1);
//		input(&student[i]);
//	}
//
//	printf("***********************************\n");
//	printf("以下是输出平均成绩：\n");
//	for (int i = 0; i < n; i++)
//	{
//		cal_print(&student[i]);//有数据传回结构体，应传地址
//		average[i] = student[i].ave_score;
//	}
//	//数组比大小
//	float MAX_AVE = average[0];
//	int MAX_AVE_INDEX = 0;
//	for (int i = 1; i < n; i++)
//	{
//		if (average[i] > MAX_AVE)
//		{
//			MAX_AVE = average[i];
//			MAX_AVE_INDEX = i;
//		}
//	}
//	printf("\n");
//	//输出最高分学生的信息
//	printf("最高分成绩的学生信息是：\n");
//	printf("学号：%d 姓名：%s 成绩1：%.2f 成绩2：%.2f 成绩3：%.2f\n", student[MAX_AVE_INDEX].id,
//		student[MAX_AVE_INDEX].name,
//		student[MAX_AVE_INDEX].score1,
//		student[MAX_AVE_INDEX].score2,
//		student[MAX_AVE_INDEX].score3);
//
//	free(average);
//	return 0;
//}
//
//void input(struct Stu* s)
//{
//	scanf_s("%d %s %f %f %f", &s->id,
//		s->name,
//		(unsigned)_countof(s->name),
//		&s->score1,
//		&s->score2,
//		&s->score3);
//}
//
//void cal_print(struct Stu *s)
//{
//	s->ave_score = (s->score1+s->score2+s->score3) / 3;
//	printf("%f\n", s->ave_score);
//}
