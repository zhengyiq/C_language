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
	//sizeof(������)����������ʾ�������飬sizeof(������)���������������Ĵ�С����λ���ֽ�
	//&����������������������������飬&������ȡ��������������ĵ�ַ��
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
//	//ȷ��ð�����������
//	int temp = 0;
//	for (int i = 0; i < sz - 1; i++)
//	{
//		//ÿһ��ð������
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
//				break;//if�����ѭ����
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
//	//������Ϊ���������Ĵ���
//	//ð������
//	int arr[] = {6,2,3,7,9,4,8,1};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort1(arr,sz);
//	bubble_sort2(arr,sz);
//	return 0;
//}

//��λ�����ʼ��
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
//��ά����ĵ�ַ
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