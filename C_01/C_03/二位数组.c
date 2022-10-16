#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void)
{
	int arr[] = { 1,2,3,4,5,6,7 };
	printf("%p\n", arr);
	printf("%p\n", arr+1);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);
	printf("%p\n", &arr);
	printf("%p\n", &arr+1);
	//sizeof(数组名)，数组名表示整个数组，sizeof(数组名)计算的是整个数组的大小，单位是字节
	//&数组名，数组名代表的是整个数组，&数组名取出的是整个数组的地址。
	return 0;
}

//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//void bubble_sort1(int arr[], int size)
//{
//	int temp = 0;
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size -1; j++)
//		{
//			if (arr[j] > arr[j+1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = temp;
//			}
//		}
//	}
//	for (int m = 0; m < size; m++)
//	{
//		printf("%d ", arr[m]);
//	}
// }
//
//void bubble_sort2(int arr[], int sz)
//{
//	//确定冒泡排序的趟数
//	int temp = 0;
//	for (int i = 0; i < sz - 1; i++)
//	{
//		//每一趟冒泡排序
//		for (int j = 0; j < sz-1-i; j++)
//		{
//			int flag = 1;
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;
//			}
//			if (flag == 1)
//			{
//				break;//if语句在循环中
//			}
//		}
//	}
//	for (int m = 0; m < sz; m++)
//	{
//		printf("%d ", arr[m]);
//	}
//}
//
//int main(void)
//{
//	//数组作为函数参数的传递
//	//冒泡排序法
//	int arr[] = {6,2,3,7,9,4,8,1};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort1(arr,sz);
//	bubble_sort2(arr,sz);
//	return 0;
//}

//二位数组初始化
//int arr1[][4] = { 1,2,3,4,5,6,7,8 };
//int arr[3][4] = { {1,2,3},{4,5,6} };
//for (int i = 0; i < 3; i++)
//{
//	for (int j = 0; j < 4; j++)
//	{
//		printf("%d ",arr[i][j]);
//	}
//	printf("\n");
//}
//二维数组的地址
//int arr1[][4] = { 1,2,3,4,5,6,7,8 };
//int arr[3][5] = { {1,2,3},{4,5,6} };
//for (int i = 0; i < 3; i++)
//{
//	for (int j = 0; j < 5; j++)
//	{
//		printf("%p ", &arr[i][j]);
//	}
//	printf("\n");
//}