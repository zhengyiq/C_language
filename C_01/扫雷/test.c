#define _CRT_SECURE_NO_WARNINGS 1
/*
	���������飬һ������mine������Ų��úõ��׵���Ϣ������һ���������Ų���׵���Ϣ 
	mine�����ʼ��Ϊ0��������ʱ�ĳ�1��
	show�����ʼ��Ϊ*���ų��׺����λ�ø�Ϊ�����ַ�

	���ף�
		�ݹ�չ�������겻����
		������û�б��Ų��
		��������Χû����
*/
#include "game.h"
void menu()
{
	system("cls");
	printf("                                \n");
	printf("            1.play              \n");
	printf("                                \n");
	printf("            0.exit              \n");
}

void game()
{
	//���������������Ϣ
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//��ʼ������
	//mine����ʼ��ȫ0��
	//show����ʼ��ȫ*��
	init_board(mine, ROWS, COLS, '0');
	init_board(show, ROWS, COLS, '*');

	//��ӡ����
	//print_board(mine, ROW, COL);
	//print_board(show, ROW, COL);

	//������
	set_mine(mine, ROW, COL); 
	
	//����
	print_board(mine, ROW, COL);
	print_board(show, ROW, COL);
	find_mine(mine, show, ROW, COL);
	system("pause");
}

int main(void)
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("������ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
	return 0;
}