/*D05
��n��������ʹǰ�����˳�������m��λ�ã����m�������ǰ��m��������ͼ��
дһ������ʵ�����Ϲ��ܣ���������������n����������������n������*/

/*
* ���ܷ�����
*	* 1��������ǰm�����������m�������н���
*   * 2����������
*   * 3���������
*/

//ʹ�ö�̬�ڴ����

//#include <stdio.h>
//
//#include <stdlib.h>
//void Handle_arr(int arr[], int size_arr);
//
//int main()
//{
//    //��ǰ���������ƶ�mλ��������m�������ǰ��m����
//    int m = 0;
//    printf("��������Ҫ�ƶ���λ��m��ֵ��\n");
//    scanf_s("%d", &m);
//
//	//�����ַ���
//    //����������n�Ĵ�С����̬��������ռ�
//    //����д����int* arr = (int*)malloc(capacity * sizeof(int));���죬��malloc����ֵ˼��
//    int* arr = NULL;
//    int size_arr = 0;
//    int capacity = 2;  // ��ʼ����
//    arr = (int*)malloc(capacity * sizeof(int));
//    //�ж��Ƿ����ɹ�
//    if (arr == NULL)
//    {
//        printf("�ڴ����ʧ�ܣ�\n");
//        return;
//    }
//
//    printf("������һ���������Է����ֽ���������ĸ����\n");
//
//    int x;
//    while (scanf_s("%d", &x) == 1)
//    {
//        if (size_arr >= capacity)
//        {
//            capacity *= 2;  // ����
//            arr = (int*)realloc(arr, capacity * sizeof(int));
//        }
//        arr[size_arr++] = x;
//    }
//    int num_int = 0;
//    //num_int = sizeof(arr) / sizeof(arr[0]);//error
//    // printf("����һ��int ��������%d\n",size_arr);
//
//    Handle_arr(arr, size_arr, m);
//
//
//
//    //��ӡ���
//    for (int i = 0; i < size_arr; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//
//
//    free(arr);
//	return 0;
//}
//
//void Handle_arr(int arr[], int size_arr,int m)
//{
//    if (size_arr == 0 || m <= 0) return;
//
//    m = m % size_arr;  // ���� m ���� size_arr ʱ����Խ��
//
//
//    //��ǰ���������ƶ�mλ��������m�������ǰ��m����
// 
//    //Ϊtemp���䶯̬�ڴ�
//   // ����һ�� temp ����洢��� m ����
//    int* temp = (int*)malloc(m * sizeof(int));
//    if (temp == NULL) {
//        printf("�ڴ����ʧ�ܣ�\n");
//        return;
//    }
//    //��m������ı����������ڷ���ռ�ʱ��Ҫ��̬�����ڴ棬ʹ��malloc����
//
//
//    // ������� m ������ temp
//    for (int i = 0; i < m; i++)
//    {
//        temp[i] = arr[size_arr - m + i];
//    }
//    // ��ǰ���������ƶ� m λ
//    for (int i = size_arr - m - 1; i >= 0; i--)
//    {
//        arr[i + m] = arr[i];
//    }
//
//    for (int i = 0; i < m; i++)
//    {
//        arr[i] = temp[i];
//    }
//
//    free(temp);//������̬�ڴ�ǵ��ͷ�
//
//}