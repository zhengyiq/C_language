#define _CRT_SECURE_NO_WARNINGS 1

//获取月份天数
//switch
//#include <stdio.h>
//
//int main(void)
//{
//	int y = 0;
//	int m = 0;
//	while ((scanf("%d %d" , &y, &m)) == 2)
//	{
//		switch (m)
//		{
//			case 1:
//			case 3:
//			case 5:
//			case 7:
//			case 8:
//			case 10:
//			case 12:
//				printf("%d\n", 31);
//				break;
//			case 4:
//			case 6:
//			case 9:
//			case 11:
//				printf("%D", 10);
//				break;
//			case 2:
//				if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//				{
//					printf("%d\n", 29);
//				}
//				else
//				{
//					printf("28");
//				}
//				break;
//		default:
//			break;
//		}
//	}
//	return 0;
//}

//使用数组实现
//#include <stdio.h>
//
//is_leap_year(int y)
//{
//	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
//}
//
//int main(void)
//{
//	int y = 0;
//	int m = 0;
//	int Day = 0;
//	int day[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	while ((scanf("%d %d", &y, &m)) == 2)
//	{
//		Day = day[2];
//		if (is_leap_year(y))
//		{
//			Day++;
//		}
//		printf("%d", Day);
//	}
//	return 0;
//}

//判断是否是字母
#include <stdio.h>
//
//int main(void)
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if ((ch >= 'a' && ch <= 'z')|| (ch >= 'A' && ch <= 'Z'))
//		{
//			printf("%c is an alphabet\n", ch);
//		}
//		else
//		{
//			printf("%c is not an alphabet\n", ch);
//		}
//		getchar();
//	}
//	return 0;
//}
//int main(void)
//{
//	int ch = 0;
//	while (scanf(" %c",&ch) == 1)//scanf("%c\n",&ch)
//	{
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//		{
//			printf("%c is an alphabet\n", ch);
//		}
//		else
//		{
//			printf("%c is not an alphabet\n", ch);
//		}
//		getchar();
//	}
//	return 0;
//}

//逆置字符串
//#include <stdio.h>
//int main()
//{
//	char arr[10001] = { 0 };
//	gets(arr);
//	//scanf("%[^\n]", arr)
//	int len = strlen(arr);
//	int left = 0;
//	int right = len - 1;
//	char  tmp = 0;
//	while (left < right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	printf("%s", arr);
//	return 0;
//}

//打印菱形
//#include <stdio.h>
//
//int main(void)
//{
//	int line = 0;
//	scanf("%d", &line);
//	for (int i = 0; i < line; i++)
//	{
//		for (int  j = 0; j < line-1-i; j++)
//		{
//			printf(" ");
//		}
//		for (int  j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	for (int i = 0; i < line-1; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * (line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}

//判断自幂数
#include <stdio.h>
#include <math.h>
int main(void)
{
	int i = 0;
	for (int  i = 0; i < 10000; i++)
	{
		//判断是否为自幂数
		int n = 1;
		int tmp = i;
		while (tmp /= 10)
		{
			n++;
		}
		tmp = i;
		int sum = 0;
		while (tmp)
		{
			sum += (int)pow(tmp % 10, n);
			tmp /= 10;
		}
		if (sum==i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}