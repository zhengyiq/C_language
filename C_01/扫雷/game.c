#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void init_board(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < rows; i++)
	{
		for ( j = 0; j < cols; j++)
		{
			board[i][j] = set;  
		}
	}
}

void print_board(char board[ROWS][COLS], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= row ; i++)
//	{
//		//if (i == 1)
//		//{
//		//	printf("  ");
//		//}
//		//�к�
//		for (j = 0; j <= col ; j++)
//		{
//			if (i == 1)
//			{
//				printf("%d ", j);
//			}
//		}
//		if (i == 1)
//		{
//			printf("\n");
//		}
//		//��ӡ����
//		printf("%d ", i);
//		for (j = 1; j <= col; j++)
//		{
//			printf("%c ", board[i][j]);
//		}
//		printf("\n");
//	}
//}

{
	int i = 0;
	int j = 0;
	//�к�
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void set_mine(char mine[ROWS][COLS], int row, int col)
{
	//���ü�����
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % row + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}


int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x - 1][y + 1] +
		mine[x][y + 1] +
		mine[x][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x + 1][y - 1] - 8 * '0';
}

void Re_ex(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y)
{
	//���м��������
	int count = get_mine_count(mine, x, y);
	show[x][y] = ' ';//���ּ��ַ�'0'�Ϳ��Ի���ɸ����ֵ��ַ�
	//print_board(show, ROW, COL);
	//��������Χ��������
	if (count == 0)
	{
		for (int i = x - 1; i <= x + 1; i++)
		{
			for (int j = y - 1; j <= y + 1; j++)
			{
				if (show[i][j] == '*')    //���Ƶݹ���������ֹ�Ѿ��Ų���������ٴεݹ飬�Ӷ�������ݹ�
					Re_ex(mine, show, row, col, i, j);
			}
		}
	}
	else
	{
		show[x][y] = count + '0';
	}
}


//void ExplosionSpread(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y, int* pw)
//{
//	if (x >= 1 && x <= row && y >= 1 && y <= col)  //�ж������Ƿ�Ϊ�Ų鷶Χ��
//	{
//		int num = get_mine_count(mine, x, y);   //��ȡ������Χ�׵ĸ���
//		if (num == 0)
//		{
//			(*pw)++;
//			show[x][y] = ' ';   //�����������Χû���ף��ͰѸ������óɿո񣬲�����Χ�˸�����չ��
//			int i = 0;
//			int j = 0;
//			for (i = x - 1; i <= x + 1; i++)
//			{
//				for (j = y - 1; j <= y + 1; j++)
//				{
//					if (show[i][j] == '*')    //���Ƶݹ���������ֹ�Ѿ��Ų���������ٴεݹ飬�Ӷ�������ݹ�
//						ExplosionSpread(mine, show, row, col, i, j, pw);
//				}
//			}
//		}
//		else
//		{
//			(*pw)++;
//			show[x][y] = num + '0';
//		}
//	}
//}




void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row * col - EASY_COUNT)
	{
		printf("������Ҫ�Ų��׵�����:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] == '*')
			{

				if (mine[x][y] == '1')
				{
					printf("���ź����㱻ը����\n");
					print_board(mine, ROW, COL);
					break;
				}
				else//δ���Ų���Ҳ�Ϊ��
				{

					Re_ex(mine, show, row, col, x, y);
					//int count = get_mine_count(mine, x, y);
					//show[x][y] = count + '0';//���ּ��ַ�'0'�Ϳ��Ի���ɸ����ֵ��ַ�
					//print_board(show, ROW, COL);
					print_board(show, ROW, COL);
					win++;
				}
			}
			else 
			{
				printf("�������Ѿ����Ų��\n");
			}
		}
		else
		{
			printf("�Ƿ�����\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		print_board(mine, ROW, COL);
	}
}
