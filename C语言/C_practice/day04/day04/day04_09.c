/*D09
������N��ѧ�������ݼ�¼��ÿ����¼����ѧ�š����������Ƴɼ���
��дһ������input,��������һ��ѧ�������ݼ�¼��
��дһ������print,��ӡһ��ѧ�������ݼ�¼��
��������������������������ȡN����¼���룬�ٰ�Ҫ������� N<100*/

/*����ṹ��struct Stu*/

//#include <stdio.h>
//
//#define MAX_STUDENT_NUM 100
//struct Stu
//{
//	int id;            // ѧ��
//	char name[50];     // ����
//	float score1;      
//	float score2;
//	float score3;
//};
////����Ӧ�÷��ڶ���֮ǰ
//void input(struct Stu *s);
//void print(struct Stu s);
//
//
//
//int main()
//{
//	int n = 0;
//	//����һ���ṹ�����飬�洢ѧ������
//	struct Stu students[MAX_STUDENT_NUM];
//	//����ѧ������N
//	printf("������ѧ������N(N<100)=");
//	scanf_s("%d", &n);
//	printf("\n");
//	if (n >= 100 || n <= 0)
//	{
//		printf("�������,���������");
//		return 1;
//	} 
//	//����ѧ������Ϣ
//	printf("������ѧ��ѧ�š�����ƴ���Լ����ųɼ���\n");
//	printf("\n");
//	for (int i = 0; i < n; i++)
//	{  
//		printf("��%d��ѧ������Ϣ\n", i + 1);
//		printf("\n");
//		input(&students[i]);//�ṹ������Ҳ�����飬����ַ
//	}
//
//	//���ѧ����Ϣ
//
//	printf("**********************************\n");
//	printf("���������ѧ������Ϣ��\n");
//	printf("\n");
//	for (int i= 0; i < n; i++)
//	{
//		printf("��%d����ѧ����Ϣ:\n", i + 1);
//		printf("\n");
//		print(students[i]);
//		printf("\n");
//	}
//	return 0;
//}
////�ṹ�����鴫�ι�������һ��һ�����ģ��ڷ��Ͷ�Ҫ�ֱ�ṹ�壬�ڽ���ʱֻ��Ҫ����һ���ṹ���ַ����
//void input(struct Stu *s)//��Ҫ�Խṹ����в��������Դ���ַ
//{
//	scanf_s("%d %s %f %f %f", &s->id, &s->name,50, &s->score1, &s->score2, &s->score3);
//	printf("\n");
//}
//void print(struct Stu s)//���������ṹ�壬�Ǹ��ṹ�����
//{
//	printf("ѧ��:%d ����ƴ��:%s ���ųɼ��ֱ���:%.2f %.2f %.2f\n", s.id, s.name, s.score1, s.score2, s.score3);
//	printf("\n");
//}