/*C13
�����year������һ���꣬���б������Ƿ����ꡣ
��ʾ���������Զ���ΪLEAP_YEAR���β�Ϊy��
�ȶ�������ʽΪ #define LEAP_YEAR(y) ��������Ƶ��ַ�����*/

/*
* �ж�����Ĺ����ǣ�
* 1��d�ܱ�4���������ܱ�100����
* 2��d�ܱ�400����
*/

//#include <stdio.h>
//
//#define LEAP_YEAR(y) ((y) % 4 == 0 && (y) % 100 != 0 || (y) % 400 == 0)
//
//int main() {
//	int year;
//	printf("���������: ");
//	scanf_s("%d", &year);
//	
//	if (LEAP_YEAR(year)) {
//		printf("%d �����ꡣ\n", year);
//	} else {
//		printf("%d �������ꡣ\n", year);
//	}
//	
//	return 0;
//}