#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//如果满了就返回1，否则返回0
int IsFull(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}


void InitBoard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
 }

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	//棋盘数据 
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			
			printf(" %c ", board[i][j]);
			if (j < row - 1)
				printf("|");
		}
		//分割信息
		if (i < row - 1)
		{
			printf("\n");
			for (int m = 0; m < col; m++)
			{
				if (m < col-1)
				{
					printf("---|");
				}
				else
				{
					printf("---");
				}
			}
			printf("\n");
		}
	}
	printf("\n");
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	while (1)
	{
		int chase[2];
		printf("玩家下棋:>\n");
		printf("请输入下棋的位置(x,y):>");
		scanf("%d%d", &chase[0], &chase[1]);
		if (((chase[0] > 3) || (chase[0] < 0)) || ((chase[1] > 3) || (chase[1] < 0)))
		{
			printf("您输入的位置不正确，请重新输入\n");
			printf("玩家下棋(请输入下棋的位置(x,y)):>\n");
			scanf("%d%d", &chase[0], &chase[1]);
		}
		else
		{
			if (board[chase[0] - 1][chase[1] - 1] == ' ')
			{
				board[chase[0] - 1][chase[1] - 1] = '*';
				break;
			}
			else
			{
				printf("该位置已经有棋子，请重新输入\n");
				printf("请输入下棋的位置(x,y):>");
				scanf("%d%d", &chase[0], &chase[1]);
			}
		}
	}

}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋:>\n");
	int x;
	int y;

	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}

	}
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//行
	for (size_t i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	//列
	for (size_t i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	//对角线

	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//没有人赢
	if (IsFull(board, row, col))
	{
		return 'Q';
	}
	return 'c';
}