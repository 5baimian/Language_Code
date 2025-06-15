/*B11
用选择法对10个整数从小到大排序。*/
/*
选择排序的思路：
按照升序的排序，设有10个元素，从第一个开始和其余九个进行比较，
最小的放在第一个数，再将第二个数和余下8个进行比较，再将最小的放在第二位，一直到排序结束。
*/
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int Num[10] = {0};
//    printf("请输入十个整数：\n");
//    for (int cal = 0; cal < 10; cal++)
//    {
//        scanf_s("%d",&Num[cal]);
//    }
// 
//    for(int i=0;i<10;i++)
//    {
//        for (int j =i+1; j < 10; j++)
//        {
//            if(Num[i]>=Num[j])
//            {
//                //需要交换两数组中的值，不然会丢失原数组当中的数据
//                int temp = Num[i];
//                Num[i] = Num[j];
//                Num[j] = temp;
//            }
//        }
//    }
//    printf("从小到大排序后的结果为：\n");
//    for (int show_num = 0; show_num < 10; show_num++)
//    {
//        printf("%d ",Num[show_num]);
//    }
//	return 0;
//}