//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int count = 0;
//int Fib1(int n)//问题:跑50个数时，效率低，进行了大量的重复
//{
//	//测试第三个斐波那契数列的计算次数
////	if (n == 3)
////	{
////		count++;
////	}
////
////	if (n <= 2)
////	{
////		return 1;
////	}
////	else
////	{
////		return Fib(n - 1) + Fib(n - 2);
////	}
//	int num1 = 1;
//	int num2 = 1;
//	int num3 = 0;
//	int iterate = n;
//	if (iterate > 2)
//	{
//		for (int i = 1; i <= iterate - 2; i++)
//		{
//			num3 = num1 + num2;
//			num1 = num2;
//			num2 = num3;
//		}
//		printf("第%d个斐波那契数是:%d", n, num3);
//		return 0;
//	}
//	else if((n==1)||(n==2))
//	{
//		printf("第%d个斐波那契数是:%d", n, 1);
//	}
//
//
//}
//
//
//int Fib2(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//}
//
//int main(void)
//{
//	int n;
//	int ret = 0;
//	scanf("%d",&n);
//	ret = Fib1(n);
//	//printf("ret = %d\n", ret);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int Fac1(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return Fac1(n - 1) * n;
//}
//
//int main(void)
//{
//	//求n的阶乘
//	int n = 0;
//	int ret = 0;
//	scanf("%d",&n);
//	ret = Fac1(n);
//	printf("%d\n",ret);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int strLen1(const char* str)
//{
//	static int i = 0;
//	if (*str != '\0')
//	{
//		str++;
//		i++;
//		strLen1(str);
//	}
//	//i++;
//	return i;
//}
//
//int strLen2(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int strLen3(const char* str)
//{
//	//static int i = 0;
//	if (*str != '\0')
//	{
//		str++;
//		//i++;
//		strLen3(str);
//	}
//	else
//	{
//		return 0;
//	}
//
//	//i++;
//	return strLen3(str) + 1;
//}
//
//int strLen4(char* str)
//{
//	//static int i = 0;
//	if (*str != '\0')
//	{
//		return 1 + strLen4(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//
//	//i++;
//	return strLen3(str) + 1;
//}
//
//int main(void)
//{
//	int i = 0;
//	char arr[] = "bi  t";
//	//i = strLen1(arr);
//	//printf("字符串的长度为%d",i);
//	//i = strLen2(arr);
//	//printf("字符串的长度为%d", i);
//	i = strLen3(arr);
//	//printf("字符串的长度为%d", i);
//	//i = strLen4(arr);
//	printf("字符串的长度为%d", i);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//void print1(int num)
//{
//	//int a;
//	//int b;
//	//a = num % 10;
//	
//	//num = num / 10;
//	if (num == 0)
//	{
//		return 0;
//	}
//	print1(num / 10);
//	printf("%d ",num % 10);
//	
//}
//
//void print2(int num)
//{
//	if (num > 9)
//	{
//		print2(num / 10);
//	}
//	printf("%d ",num % 10);
//}
//
//
//
//int main(void)
//{
//	int num = 0;
//	printf("请输入一个整形数字:>");
//	scanf("%d",&num);
//	print1(num);
//	//print2(num);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main(void)
//{
//	printf("%d",printf("%d",printf("%d",43)));//number of characters transmitted to the output stream
//	//On success, the total number of characters written is returned.
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//void Add(int* p)
//{
//	(*p)++;//++的优先级比*高
//}
//
//int main(void)
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n",num);
//	Add(&num);
//	printf("%d\n", num);	
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}




//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main(void)
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 6;
//	int sz = sizeof(arr) / sizeof(arr[0]);//不能放在函数体内部，函数传入的不是整个数组而是数组首元素的地址。
//
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n",ret);
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int numCount()
//{
//	static int num = 0;
//	num++;
//	return num;
//}
//
//int main(void)
//{
//	int num = 0;
//	while (num < 10)
//	{
//		num = numCount();
//
//	}
//	printf("该函数调用了%d次",num);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//void isRunnian(int year)
//{
//	if ((year % 4 == 0) && (year % 100 != 0) || year % 400 == 0)
//	{
//		printf("输入的年份是闰年");
//	}
//	else
//	{
//		printf("输入的年份不是是闰年");
//
//	}
//}
//
//int main(void)
//{
//	int year;
//	printf("请输入一个年份");
//	scanf("%d", &year);
//	isRunnian(year);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <math.h>
//int isSushu1(int a)
//{
//	for (int i = 2; i < a; i++)
//	{
//		if (a % i == 0)
//		{
//			return 0;
//		}
//	}
//	printf("这个数为素数\n");
//}
//
//
//int isPrime(int n)
//{
//	int i;
//	int flag = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n%i == 0)    // 如果不为素数返回0 
//		{
//			return 0;
//		}
//	}
//	flag = 1;
//	return flag;// 反之则返回1 
//	
//}
//
//int main(void)
//{
//	int a;
//	int flag;
//	printf("请输入一个数");
//	scanf("%d",&a);
//	isSushu1(a);
//	printf("请输入一个数");
//	scanf("%d", &a);
//	flag = isPrime(a);
//	if (flag)
//	{
//		printf("这个数为素数\n");
//	}
//	else
//	{
//		printf("这个数不为素数\n");
//	}
//	return 0;
//}