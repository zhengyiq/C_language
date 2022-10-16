#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//������˾ͷ���1�����򷵻�0
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
	//�������� 
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			
			printf(" %c ", board[i][j]);
			if (j < row - 1)
				printf("|");
		}
		//�ָ���Ϣ
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
		printf("�������:>\n");
		printf("�����������λ��(x,y):>");
		scanf("%d%d", &chase[0], &chase[1]);
		if (((chase[0] > 3) || (chase[0] < 0)) || ((chase[1] > 3) || (chase[1] < 0)))
		{
			printf("�������λ�ò���ȷ������������\n");
			printf("�������(�����������λ��(x,y)):>\n");
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
				printf("��λ���Ѿ������ӣ�����������\n");
				printf("�����������λ��(x,y):>");
				scanf("%d%d", &chase[0], &chase[1]);
			}
		}
	}

}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("��������:>\n");
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
	//��
	for (size_t i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	//��
	for (size_t i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	//�Խ���

	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//û����Ӯ
	if (IsFull(board, row, col))
	{
		return 'Q';
	}
	return 'c';
}