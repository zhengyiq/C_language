#include <stdio.h>
int main()
{
	int a, b, c;
	a = 5;
	c = ++a;// c = 6 a = 6
	b = ++c, c++, ++a, a++;//c = 8 b = 7 a = 8
	b += a++ +  c;
	printf("a = %d b = %d c = %d\n:", a, b, c);
	return 0;
}