#define _CRT_SECURE_NO_WARNINGS 1

//дһ���������ض�������1�ĸ���

//#include <stdio.h>
//
//
//int count(int n) 
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (1 == ((n >> i) & 1))
//			count++;
//	}
//	return count;
//}
//
//	//ģ2��2���������ڸ���Ҫ��
//
//int count2(unsigned int m)
//{
//	int count = 0;
//	while (m)
//	{
//		if (m % 2 == 1)
//		{
//			count++;
//		}
//		m /= 2;
//	}
//	return count;
//}
//
//int count3(int n)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (1 == (n & 1))
//			count++;
//		n >>= 1;
//	}
//	return count;
//}

//int count4(int m)
//{
//	int count = 0;
//	while (m)
//	{
//		m = m & (m - 1);
//		count++;
//	}
//	return 
//}
//
//int main(void)
//{
//	int num = { 0 };
//	scanf("%d", &num);
//	int ret = count4(num);
//	printf("%d",ret);
//	return 0;
//}
//
//int count4(int m)
//{
//	int count = 0;
//	while (m)
//	{
//		m = m & (m - 1);
//		count++;
//	}
//	return count;
//}
//
//int main(void)
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	m = m ^ n;
//	int ret = count4(m);
//	printf("%d",ret);
//	return 0;
//}


//#include <stdio.h>
//
////���ڲ������������ȼ�
//int main(void)
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d", ret);//12
//	return 0;
//}
////��Linux�±������//10


//ȫ�ֱ�������̬��������ʼ��Ĭ��Ϊ0
//����ھ�̬��

//�ֲ���������ʼ��Ĭ��Ϊ���ֵ
//int i;
//int main()
//{
//	//printf("%d", i);
//	i--;
//	if (i>sizeof(i))//sizeof�������ռ�ÿռ�Ĵ�С���ǲ����и����ģ����ص�ֵΪsize_t���ͣ��ᷢ������ת��
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//
//	}
//	return 0;
//}


//��ȡһ�������Ķ��������������е�ż��λ������λ��ӡ������������

//#include <stdio.h>
//
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 32; i >= 0; i--)
//	{
//		if (1 == (i % 2))
//		{
//			printf("%d ", (n >> i) & 1);
//		}
//		//else
//		//{
//		//	printf("%d ", (n >> i) & 1);
//
//		//}
//	}
//	return 0;
//}


//������ת��
//#include <stdio.h>
//int main()
//{
//	long long n = 0;
//	scanf("%lld", &n);
//	long long ret = 0;
//	long long count = 1;
//	while ((n / 6) >= 0)
//	{
//		ret += (n % 6) * count;
//		if (n == 0)
//		{
//			break;
//		}
//		n = n / 6;
//		count = count * 10;
//	}
//	printf("%lld", ret);
//}

//������ɾ��ָ������
//˫ָ��
//#include <stdio.h>
//
//int main() {
//	int n = 0;
//	int del = 0;
//	int j = 0;
//	int count = 0;
//	scanf("%d", &n);
//	int arr[n];
//	int arr2[n];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//	scanf("%d", &del);
//	for (int i = 0; i < n; i++)
//	{
//		if (del != arr[i])
//		{
//			count++;
//			arr2[j] = arr[i];
//			j++;
//		}
//	}
//	for (int i = 0; i < count; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//
//	return 0;
//}

//շת����������Լ��
//int main()
//{
//	long long n = 0;
//	long long m = 0;
//	scanf("%lld %lld", &n, &m);
//	long long m2 = m;
//	long long n2 = n;
//	long long r = 0;
//	while (r = n2 % m2)
//	{
//		n2 = m2;
//		m2 = r;
//	}
//	printf("%lld", m*n/m2+m2);
//
//}

//С������̨��
//#include <stdio.h>
//
//int Walk(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else if (n == 2)
//	{
//		return 2;
//	}
//	return Walk(n - 1) + Walk(n - 2);
//}
//
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Walk(n);
//	printf("%d", ret);
//	return 0;
//}