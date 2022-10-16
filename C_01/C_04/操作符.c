//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <math.h>
//int main(void)
//{
//	//变种水仙花数
//	int i = 0;
//	for (size_t i = 10000; i < 99999; i++)
//	{
//		int sum = 0;
//		int j = 0;
//		for (int  j = 1; j <= 4; j++)
//		{
//			int k = (int)pow(10, j);
//			sum += (i%k)*(i / k);
//		}
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}
//
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main(void)
//{
//	//判断是否是字母
//	char ch = 0; 
//	//在%c的前面加空格的作用就是跳过下一个字符之前的所有字符
//	//isalpha()
//	while (scanf(" %c", &ch) == 1)
//	{
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//		{
//			printf("%c is an alphabet\n",ch);
//		}
//		else
//		{
//			printf("%c is not an alphabet\n",ch);
//		}
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <ctype.h>
//int main(void)
//{
//	//scanf读取失败的返回值是EOF -1
//	//scanf读取成功的返回值是读取数据的个数
//	//char ch = 0;
//	//while (scanf("%c", &ch)==1)
//	//{
//	//	if (ch>='a' && ch<='z')
//	//	{
//	//		printf("%c\n", ch - 32);
//	//	}
//	//	if (ch >= 'A' && ch <= 'Z')
//	//	{
//	//		printf("%c\n", ch + 32);
//	//	}
//	//	//getchar()
//	//}
//
//	char ch = 0;
//	while (scanf("%c", &ch) != EOF)
//	{
//		if (islower(ch))
//		{
//			printf("%c\n", toupper(ch));
//		}
//		if (isupper(ch))
//		{
//			printf("%c\n", tolower(ch));
//		}
//		//getchar()
//	}
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main(void)
//{
//	//最高分和最低分之差
//	int max,min;
//	int arr[7] = {11,22,434,44,6,2,23};
//	max = arr[0];
//	min = arr[0];
//
//	//在循环输入的时候就可以进行判断。
//	//int max = 0;
//	//int min = 100;
//	//for ( i = 0; i < n; i++)
//	//{
//	//	scanf("%d",&arr[i]);
//	//	if (arr[i] > max)
//	//	{
//	//		max = arr[i];
//	//	}
//	//	if (arr[i] < min)
//	//	{
//	//		min = arr[i];
//	//	}
//	//}
//	for (int i = 0; i < 7; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//	printf("%d",max-min);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main(void)
//{
//	int arr[50] = { 1,2,3,3,5,6,3 };
//	int del = 3;
//	int j = 0;
//	for (int i = 0; i < 7; i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j++] = arr[i];
//		}
//	}
//	for (int i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return n;
//	}
//	else
//	{
//		return Fib(n-1) + Fib(n-2);
//	}
//}
//
//int main(void)
//{
//	//小乐乐走台阶
//	int n;
//	int ret = 0;
//	//输入
//	scanf("%d", &n);
//	//计算
//	ret = Fib(n);
//	//输出
//	printf("%d",ret);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
////整形提升
////无符号数和有符号数
//int main(void)
//{
//	char a = 5;
//	//00000000000000000000000000000101 a
//	//00000101
//
//	char b = 126;
//	//00000000000000000000000000111110 b
//	//01111110
//	
//	//00000000000000000000000000000101
//	//00000000000000000000000001111110
//	//00000000000000000000000010000011
//	
//	//10000011 c
//	//11111111111111111111111110000011 补码 = 反码 +1
//	//11111111111111111111111110000010 反码
//	//10000000000000000000000001111101 原码
//	char c = a + b;
//	printf("%d\n", c);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main(void)
//{
//	int arr[10] = { 0 };
//	arr[7] = 8;//*(arr+7)
//	7[arr] = 9;//同样可以正常赋值 
//
//	//a = get_val();
//	//count_vel(a);
//	//while (a > 0)
//	//{
//	//	a = get_vel();
//	//	count_vel();
//	//}
//	////使用逗号表达式进行改写
//	//while (a = get_vel(), count_val(a), a>0)
//	//{
//	//	;
//	//}
//
//	//逗号表达式从左向右依次执行整个表达式的结果是最后一个表达式的结果
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, b = a + 1);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main(void)
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	i = a++ || ++b || d++;
//
//	printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
//	return 0;
//	//当逻辑运算符 && 左边已经判断为假之后后面的就不会再运算
//	//当逻辑运算符 || 左边已经判断为真之后后面的就不会再运算
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a);
//	a = a & ~(1 << 2);
//	printf("%d\n", a);
//
//
//
//	//int a = 0;
//	//printf("%d\n",~a);
//	//在计算机中存储的是补码
//	//使用"%d"打印出来的是原码
//	//00000000000000000000000000000000 
//	//11111111111111111111111111111111 补码
//	//11111111111111111111111111111110 反码
//	//符号位不变，其他位取反
//	//10000000000000000000000000000001
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main(void)
//{
//	int num1 = 0;
//	int num2 = 0;
//
//	printf("num1 = %d\n", ++num1);
//	printf("num2 = %d\n",num2++);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(2)
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)
//	printf("%d\n", sizeof(ch));//(3)
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main(void)
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n",sizeof(short));
//	printf("%d\n",sizeof(s = a + 5));
//	printf("%d\n",s);
//	//sizeof中的表达式不会实际运行
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>

//int main(void)
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d",&num);
//	//统计num的补码中二进制位的个数
//	//while (num)
//	//{
//	//	if (num % 2 == 1)
//	//	{
//	//		count++;
//	//		num = num / 2;
//	//	}
//	//}
//	
//	for (int i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("该数的二进制数中共有%d个1\n",count);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 3;
//	int b = 5;
//	//加减法,可能会溢出
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	//异或
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main(void)
//{
//	int num1 = 2;
//	int num2 = 5;
//	printf("%d\n", num1 & num2);
//	printf("%d\n", num1 | num2);
//	printf("%d\n", num1 ^ num2);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main(void)
//{
//	int a = -1;
//	int b = a >> 1;
//	printf("%d\n",b);//-1,当前采用的是的算术移位，
//	
//	//整数的二进制表示有，原码，反码，bu'ma
//	//计算机存储的是负数的补码
//	//-1的原码10000000000000000000000000000001
//	//-1的反码11111111111111111111111111111110
//	//-1的补码11111111111111111111111111111111
//	//移位移动的就是补码，所以结果为-1.
//	return 0;
//}