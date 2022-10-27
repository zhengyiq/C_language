#define _CRT_SECURE_NO_WARNINGS 1

//递归实现n的k次方
//#include <stdio.h>
//
//double Pow(int n, int k)
//{
//	if (k > 0)
//	{
//		return (Pow(n, k - 1) * n);
//	}
//	else if (k == 0)
//		return 1;
//	else
//	{
//		return 1.0 / Pow(n,-k);
//	}
//}
//
//int main(void)
//{
//	int n = 3;
//	int k = 0;
//	double ret = 0;
//	scanf("%d", &n,&k);
//	ret = Pow(n,k);
//	printf("%.1f", ret);
//	return 0;
//}

//写一个递归函数，输入一个非负整数返回数字之和

//#include <stdio.h>
//
//
//DigitSum(int num)
//{
//	int a, b, c, d;
//	int sum = 0;
//	//while (num > 0)
//	//{
//	//	sum += num % 10;
//	//	num /= 10;
//	//}
//	//return sum;
//	
//	if (num < 10)
//	{
//		return num;
//	}
//	else
//	{
//		return DigitSum(num / 10) + num % 10;
//	}
//}
//
//int main(void)
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("%d\n", ret);
//	return 0;
//}

//#include <stdio.h>
//
//void reserve_string(char* str)
//{
//	//int left = 0;
//	//int right = 5;
//	//while (left < right)
//	//{
//	//	int tmp = 0;
//	//	tmp = str[left];
//	//	str[left] = str[right];
//	//	str[right] = tmp;
//	//	left++;
//	//	right--;
//	//}
//
//	int len = strlen(str);
//	char* tmp = *str;
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (strlen((str+1))>1)
//	{
//		reserve_string(str + 1);
//
//	}
//	*(str + len - 1) = tmp;
//}
//
//
//int main(void)
//{
//	char arr[] = "abcdef";
//	reserve_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}