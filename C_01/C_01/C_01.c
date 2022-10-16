#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
int main(void)
{
	//int length;
	//char arr[] = "welcome to bit!!!";
	//int sz1 = sizeof(arr) / sizeof(arr[0]);
	//char arr2[] = "#################";
	//int sz2 = sizeof(arr2) / sizeof(arr2[0]);
	//printf("%s\n", arr);
	//printf("%s\n", arr2);
	//length = strlen(arr);

	//for (int i = 0; i < sz1; i++)
	//{
	//	arr2[i] = arr[i];
	//	arr2[sz1 - i - 2] = arr[sz1 - i - 2];
	//	Sleep(1000);
	//	system("cls");
	//	printf("%s\n", arr2);
	//}

	//-------------------------------------
	char arr[] = "welcome to bit!!!!!!";
	char arr2[] = "####################";
	int left = 0;
	int right = strlen(arr) - 1;
	while (left < right)
	{
		arr2[left] = arr[left];
		arr2[right] = arr[right];
		printf("%s\n",arr2);
		Sleep(1000);
		system("cls");
		left++;
		right--;
	}
	return 0;
}

//#include <stdio.h>

//int main()
//{
//
//	int b;
//	for (size_t i = 1; i <= 100; i++)
//	{
//		b = (i % 2);
//		if (b == 1)
//		{
//			printf("%d为奇数\n",i);
//		}
//
//	}
//	   return 0;
//}

//int main()
//{
//	int  a;
//	float b;
//	while (1)
//	{
//		printf("请输入一个数");
//		scanf("%d", &a);
//		b = (a % 2);
//		if (b == 1)
//		{
//			printf("您输入的数为奇数");
//		}
//		else
//		{
//			printf("您输入的数为偶数");
//		}
//		｝
//			return 0;
//	}

//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main(void)
//{
//	int num, n;
//	int sum = 1;
//	printf("请输入一个数");
//	scanf("%d", &num);
//	n = num + 1;
//	for (int i = 1; i < n; i++)
//	{
//		sum = i * sum;
//	}
//	printf("n的阶乘为%d", sum);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main(void)
//{
//	int sum = 1;
//	int i = 1;
//	int result = 0;
//	while (i < 11)
//	{
//		sum = sum * i;
//		i++;
//		result += sum;
//	}
//	printf("一到十的阶乘为%d", result);
//	return 0;
//}


//void binSearch(int k, int arr[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("find k is %d", arr[i]);
//		}
//	}
//}
//
//int main(void)
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//
//	printf("please import one munber:>");
//	scanf("%d", &k);
//	binSearch(k, arr, sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main(void)
//{
//	int arr[] = { 1,2,3,4,5,6,8,9,10 };
//	int left = 0;//左下标
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > 7)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < 7)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了该元素");
//			break;
//		}
//
//	}
//	if (left > right)
//	{
//		printf("找不到该元素");
//	}
//
//	return 0;
//}



//输入scanf时的空格和逗号