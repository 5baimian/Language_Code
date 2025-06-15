/*C04
写一个函数，使给定的一个二维数组（３×３）转置，即行列互换。*/

/*
* 二维数组matrix[i][j] 转置后为matrix_transpose[j][i]
* 
* matrix  和 matrix_transpose
*/

//#include <stdio.h>
////静态二维数组
//
//void matrix_transpose(int matrix[3][3], int row, int col);
//int main()
//{
//    int matrix[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//
//	matrix_transpose(matrix,3,3);
//	return 0;
//}
////本质上传递的是一个指向二维数组首元素的指针。
////二维数组在传参时，并不会传递整个数组本体，而是传递一个指针，指向数组在内存中的起始位置
//void matrix_transpose(int matrix[3][3], int row, int col)
//{
//
//	for (int i = 0; i < row; i++)
//	{
//		//不必要每个数都进行转置处理，只需要处理上三角即可
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
//	printf("转置后的矩阵为：\n");
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			printf("%d ", matrix[i][j]);
//		}
//		printf("\n");
//	}
//}