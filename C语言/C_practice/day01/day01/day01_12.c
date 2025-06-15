/*A12
����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ�����֡��ո�������ַ��ĸ�����*/
#include <stdio.h>

int main() {
    char arr[100];  // ���ڴ洢������ַ���
    int alphabet = 0, number = 0, space = 0, other = 0;

    printf("������һ���ַ�����");
    fgets(arr, sizeof(arr), stdin);  // ʹ�� fgets ����ȡ�����ո���ַ���
    // fgets() �������ȡһ���ַ����������ո�ֱ���������з����ļ���������
    /*
    * arr���洢��ȡ���ַ��������顣
    * sizeof(arr)����ȡ���� arr �Ĵ�С�����ֽ�Ϊ��λ��
    * stdin����׼��������ͨ����ָ�������롣
    */

    // ȥ��ĩβ�Ļ��з�
    arr[strcspn(arr, "\n")] = 0;
    /*
    * 
    * strcspn() �������ڲ����ַ����е�һ�����ֵ�ָ���ַ���
    * 
    * ����ԭ�ͣ�
    * size_t strcspn(const char *str1, const char *str2);
    * 
    * ����ֵ��str1 �е�һ�������� str2 �е��ַ���λ�ã��������� 0 ��ʼ����
    *         ��� str1 �в����� str2 �е��κ��ַ������� str1 �ĳ��ȡ�
    */

    // �����ַ���������ͳ���ַ�
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if ((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z')) 
        {
            alphabet++;
        }
        else if (arr[i] >= '0' && arr[i] <= '9')
        {
            number++;
        }
        else if (arr[i] == ' ') 
        {
            space++;
        }
        else
        {
            other++;
        }
    }

    // ������
    printf("Ӣ����ĸ������%d\n", alphabet);
    printf("���ֵĸ�����%d\n", number);
    printf("�ո�ĸ�����%d\n", space);
    printf("�����ַ��ĸ�����%d\n", other);

    return 0;
}