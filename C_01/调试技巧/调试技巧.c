#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <cassert>
 
int MyStrlen(const char* str)
{
	int count = 0;
	assert(*str != NULL);
	while (*str++ != '\0')
		count++;
	return count;
}
int main(void)
{
	char arr[] = "abcde f";
	printf("%d\n", MyStrlen(arr));
	return 0;
}

//#include <cassert>
//#include <stdio.h>
//int my_strlen(const char *str)
//{
//
//	int count = 0;
//	assert(str != NULL);
//	while (*str)//ÅÐ¶Ï×Ö·û´®ÊÇ·ñ½áÊø
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	const char* p = NULL;
//	//²âÊÔ
//	int len = my_strlen(p);
//	printf("len = %d\n", len);
//	return 0;
//}


//#include <stdio.h>
//void my_strcpy(char* arr2, char* arr1)
//{
//	while (*arr1 != '\0')
//	{
//		*arr1 = *arr1;
//		arr2++;
//		arr1++;
//	}
//	*arr2 = *arr1;
//}
//int main(void)
//{
//	char str[] = "abcdef";
//	char arr2[] = "xxxxxxxxxx";
//	my_strcpy(&arr2,&arr1);
//	printf("%s", arr2);
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	char* p = "hello world";
//	printf("%s\n", p);
//	return 0;
//}

