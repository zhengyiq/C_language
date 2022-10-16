////#define _CRT_SECURE_NO_WARNINGS 1
////
//#include <stdio.h>
//
//int main(void)
//{
//	//使用指针数组编写二位数组
//	int arr1[4] = { 1,2,3,4 };
//	int arr2[4] = { 2,3,4,5 };
//	int arr3[4] = { 3,4,5,6 };
//
//	int* parr[3] = { arr1,arr2,arr3 };
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++) 
//		{
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//

////#define _CRT_SECURE_NO_WARNINGS 1
////
//#include <stdio.h>
//
//
////二级指针
//int main(void)
//{
//	int a = 10;
//	int* pa = &a;//pa为指针变量，一级指针
//	int** ppa = &pa;//ppa为二级指针变量
//	
//	printf("**ppa = %d\n", **ppa);
//	
//	//int * pa  *说明pa为指针 int说明pa指向的对象为int类型
//	//int* * ppa *说明ppa为指针 int*说明pa指向的对象为int*类型
//
//	//*pa = 10; 
//	//printf("*pa = %d\n", *pa);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main(void)
//{
//	//数组通过指针来访问
//
//	int arr[10] = { 0 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//for (int i = 0; i < sz; i++)
//	//{
//	//	printf("%d\n", *(p+i));//或者可以写成*(arr + i)
//	//}
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%p==%p==%p\n", &arr[i], p + i, arr + i);
//	}
//
//	return 0;
//}



//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <string.h>
//
//int my_strlen(char* str)
//{
//	char* fir = str;
//	//int count = 0;
//	while (*(str) != '\0')
//	{
//		str++;
//		//count++;
//	}
//	return (str - fir);
//	//return count;
//}
//int main(void)
//{
//	//int arr[10] = { 0 };
//	//printf("%d\n", &arr[9] - &arr[0]);
//	
//	int len = my_strlen("abcdref");
//	printf("%d\n", len);
//	
//	return 0;
//}

//
//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main(void)
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//for (int  i = 0; i < sz; i++)
//	//{
//	//	arr[i] = 1;
//	//}
//
//	//int* p = arr; 
//	//for (int i = 0; i < sz; i++)
//	//{	
//	//	*p++ = 1;
//	//}
//	
//	//int* p = arr; 
//	//for (int  i = 0; i < sz; i++)
//	//{
//	//	*(p + i) = 1;
//	//}
//
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
 
//#include <stdio.h>
//
//int* test()
//{
//	int a = 10;
//	return &a;//空间销毁了
//}
//
//int main(void)
//{
//	int* p = test();//通过非法地址还能找到内现存中的空间
//	printf("hehe\n");
//	
//	if (p != NULL)
//	{
//		printf("%d\n", p);//无效判断
//	}//每次出来的结果都不相同
//
//
//	//int* p2 = NULL;
//	//*p2 = 100;//err
//
//	//int* p3 = NULL;
//	//if (p3 != NULL)
//	//{
//	//	*p3 = 100;//ok
//	//}
//
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main(void)
//{
//	//int a = 0;
//	//int* pa = &a;
//	//float* pf = &a;
//	//*pa = 100;
//	//*pf = 100;
//
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = (char*)&a;
//	printf("pa = %p\n", pa);
//	printf("pa+1 = %p\n", pa+1);
//	printf("pc = %p\n", pc);
//	printf("pc+1 = %p\n", pc+1);
//	////打印结果
//
//	//int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//	//int b = 0x44332211;
//	//char*pb = (char*)&b;
//	//*pb = 0;
//	//return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main(void)
//{
//	char* pc = NULL;
//	short* ps = NULL;
//	int* pi = NULL;
//	double* pd = NULL;
//
//	printf("%d\n", sizeof(pc));//%zu
//	printf("%d\n", sizeof(ps));
//	printf("%d\n", sizeof(pi));
//	printf("%d\n", sizeof(pd));
//	return 0;
//}