/*D10
��N��ѧ����ÿ��ѧ�������ݰ���ѧ�š�������3�ſεĳɼ���
�Ӽ�������N��ѧ�������ݣ�Ҫ���ӡ��3�ſε���ƽ���ɼ���
�Լ���߷ֵ�ѧ�������ݣ�����ѧ�š�������3�ſγɼ���*/

/*
*   1������ṹ������ struct Stu
*   2���������飬����ѧ����Ϣ
*   3�������ƽ���ɼ��Լ���߷ֵ�ѧ����Ϣ
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
//	//�����ṹ��
//	struct Stu student[MAX_STUDENT_NUM];
//	//����ѧ������N
//	int n = 0;
//	printf("������ѧ��������N(N<100)��");
//	scanf_s("%d",&n);
//	printf("\n");
//	if (n >= 100 || n <= 0)
//	{
//		printf("�������,���������");
//		return 1;
//	} 
//
//	//����һ����̬���飬���ڴ���ƽ������Ϣ
//	float* average = (float*)malloc(n*sizeof(float));
//	//\0���ַ���ר�ý�����־�����಻��ҪԤ���ռ�
//
//	//����ѧ����Ϣ
//	printf("������ѧ������Ϣ������ѧ�š������Լ����Ƴɼ���\n");
//	printf("\n");
//	for (int i = 0; i < n; i++)
//	{
//		//��ʾ��Ϣ
//		printf("��%d��ѧ������Ϣ: ", i + 1);
//		input(&student[i]);
//	}
//
//	printf("***********************************\n");
//	printf("���������ƽ���ɼ���\n");
//	for (int i = 0; i < n; i++)
//	{
//		cal_print(&student[i]);//�����ݴ��ؽṹ�壬Ӧ����ַ
//		average[i] = student[i].ave_score;
//	}
//	//����ȴ�С
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
//	//�����߷�ѧ������Ϣ
//	printf("��߷ֳɼ���ѧ����Ϣ�ǣ�\n");
//	printf("ѧ�ţ�%d ������%s �ɼ�1��%.2f �ɼ�2��%.2f �ɼ�3��%.2f\n", student[MAX_AVE_INDEX].id,
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
