/*B13
已有一个已排好的9个元素的数组，今输入一个数要求按原来排序的规律将它插入数组中。*/
//#include <stdio.h>
//int main()
//{
//    int num = 0;
//    //一维数组有十个元素，前九个元素已排好序
//    int arr[10] = { 1,2,3,4,5,6,8,9,10 };
//    //输入一个数
//    printf("请输入一个数：");
//    scanf_s("%d",&num);
//    //遍历数组，找到插入位置
//    for (int i = 0; i < 10; i++)
//    {
//        //如果输入的数小于等于当前元素，说明找到了插入位置
//        if (num <= arr[i])
//        {
//            for (int j = 9; j > i; j--)
//            {
//                arr[j] = arr[j - 1];
//            }
//            arr[i] = num;
//            break;
//        }
//        else
//        {
//            arr[9] = num; //如果输入的数大于所有元素，则放在最后一个位置
//        }
//    }
//    for (int i = 0; i < 10; i++)
//    {
//        printf("%d ",arr[i]);
//    }
//
//	return 0;
//}