////#define _CRT_SECURE_NO_WARNINGS 1
////
//#include <stdio.h>
//
//int main(void)
//{
//	//ʹ��ָ�������д��λ����
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
////����ָ��
//int main(void)
//{
//	int a = 10;
//	int* pa = &a;//paΪָ�������һ��ָ��
//	int** ppa = &pa;//ppaΪ����ָ�����
//	
//	printf("**ppa = %d\n", **ppa);
//	
//	//int * pa  *˵��paΪָ�� int˵��paָ��Ķ���Ϊint����
//	//int* * ppa *˵��ppaΪָ�� int*˵��paָ��Ķ���Ϊint*����
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
//	//����ͨ��ָ��������
//
//	int arr[10] = { 0 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//for (int i = 0; i < sz; i++)
//	//{
//	//	printf("%d\n", *(p+i));//���߿���д��*(arr + i)
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
//	return &a;//�ռ�������
//}
//
//int main(void)
//{
//	int* p = test();//ͨ���Ƿ���ַ�����ҵ����ִ��еĿռ�
//	printf("hehe\n");
//	
//	if (p != NULL)
//	{
//		printf("%d\n", p);//��Ч�ж�
//	}//ÿ�γ����Ľ��������ͬ
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
//	////��ӡ���
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