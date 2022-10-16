#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

struct Peo
{
	char name[10];
	char num[15];
	char sex[5];
	int heigh;
};

struct St
{
	struct Peo p;
	int num;
	float f;
};

void Print(struct Peo* p1)
{
	printf("%s %s %s %d\n", p1->name, p1->num, p1->sex, p1->heigh);

}

int main(void)
{
	struct Peo p1 = { "张三","13624157884","男",181 };
	struct St s = { {"王五","12345968512","女",176},15, 6.65 };
	printf("%s %s %s %d\n",p1.name,p1.num,p1.sex,p1.heigh);
	printf("%s %s %s %d %d %f\n",s.p.name,s.p.num,s.p.sex,s.p.heigh,s.num,s.f);
	
	Print(&p1);
	
	return 0;
}