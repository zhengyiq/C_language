/*
	实现三子棋
	test.c 测试游戏的逻辑

	game.c 游戏代码的实现
	game.h 游戏代码的声明
	
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
	printf("三子棋\n");
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	//下棋
	while(1)
	{
		PlayerMove(board, ROW, COL);
		//判断输赢
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
		//判断输赢
	}
	if (ret == '*')
	{
		printf("玩家赢\n");

	}
	else if(ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
		DisplayBoard(board, ROW, COL);
	system("pause");
	system("cls");
}


int main(void)
{
	srand((unsigned int)time(NULL));//设置随机数生成的起点
	int input = 1;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d",&input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("输入错误\n");
				break;
		}
	} while (input);
	return 0;
}