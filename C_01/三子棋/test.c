/*
	ʵ��������
	test.c ������Ϸ���߼�

	game.c ��Ϸ�����ʵ��
	game.h ��Ϸ���������
	
*/
#define _CRT_SECURE_NO_WARNINGS 1


#include "game.h"
void menu()
{
	printf("******************************\n");
	printf("*********** 1.play ***********\n");
	printf("*********** 0.exit ***********\n");
}

void game()
{
	printf("������\n");
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	//����
	while(1)
	{
		PlayerMove(board, ROW, COL);
		//�ж���Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
		ComputerMove(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");

	}
	else if(ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
		DisplayBoard(board, ROW, COL);
	system("pause");
	system("cls");
}


int main(void)
{
	srand((unsigned int)time(NULL));//������������ɵ����
	int input = 1;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d",&input);
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