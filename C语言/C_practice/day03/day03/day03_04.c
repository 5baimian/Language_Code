/*C04
дһ��������ʹ������һ����ά���飨��������ת�ã������л�����*/

/*
* ��ά����matrix[i][j] ת�ú�Ϊmatrix_transpose[j][i]
* 
* matrix  �� matrix_transpose
*/

//#include <stdio.h>
////��̬��ά����
//
//void matrix_transpose(int matrix[3][3], int row, int col);
//int main()
//{
//    int matrix[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//
//	matrix_transpose(matrix,3,3);
//	return 0;
//}
////�����ϴ��ݵ���һ��ָ���ά������Ԫ�ص�ָ�롣
////��ά�����ڴ���ʱ�������ᴫ���������鱾�壬���Ǵ���һ��ָ�룬ָ���������ڴ��е���ʼλ��
//void matrix_transpose(int matrix[3][3], int row, int col)
//{
//
//	for (int i = 0; i < row; i++)
//	{
//		//����Ҫÿ����������ת�ô���ֻ��Ҫ���������Ǽ���
//		//for (int j = 0; j < col; j++)
//		//{    int temp= matrix[i][j];
//		//	matrix[i][j] =matrix[j][i] ;
//		//	matrix[j][i]= temp;
//		//}
//		for (int j = i+1; j < col; j++)
//		{    int temp= matrix[i][j];
//			matrix[i][j] =matrix[j][i] ;
//			matrix[j][i]= temp;
//		}
//	}
//	printf("ת�ú�ľ���Ϊ��\n");
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			printf("%d ", matrix[i][j]);
//		}
//		printf("\n");
//	}
//}