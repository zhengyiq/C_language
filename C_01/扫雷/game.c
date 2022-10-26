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
//		//列号
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
//		//打印棋盘
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
	//列号
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
	//布置几个雷
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
	//将中间的数置零
	int count = get_mine_count(mine, x, y);
	show[x][y] = ' ';//数字加字符'0'就可以换算成该数字的字符
	//print_board(show, ROW, COL);
	//将该数周围的数置零
	if (count == 0)
	{
		for (int i = x - 1; i <= x + 1; i++)
		{
			for (int j = y - 1; j <= y + 1; j++)
			{
				if (show[i][j] == '*')    //限制递归条件，防止已经排查过的坐标再次递归，从而造成死递归
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
//	if (x >= 1 && x <= row && y >= 1 && y <= col)  //判断坐标是否为排查范围内
//	{
//		int num = get_mine_count(mine, x, y);   //获取坐标周围雷的个数
//		if (num == 0)
//		{
//			(*pw)++;
//			show[x][y] = ' ';   //如果该坐标周围没有雷，就把该坐标置成空格，并向周围八个坐标展开
//			int i = 0;
//			int j = 0;
//			for (i = x - 1; i <= x + 1; i++)
//			{
//				for (j = y - 1; j <= y + 1; j++)
//				{
//					if (show[i][j] == '*')    //限制递归条件，防止已经排查过的坐标再次递归，从而造成死递归
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
		printf("请输入要排查雷的坐标:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] == '*')
			{

				if (mine[x][y] == '1')
				{
					printf("很遗憾，你被炸死了\n");
					print_board(mine, ROW, COL);
					break;
				}
				else//未被排查过且不为雷
				{

					Re_ex(mine, show, row, col, x, y);
					//int count = get_mine_count(mine, x, y);
					//show[x][y] = count + '0';//数字加字符'0'就可以换算成该数字的字符
					//print_board(show, ROW, COL);
					print_board(show, ROW, COL);
					win++;
				}
			}
			else 
			{
				printf("该坐标已经被排查过\n");
			}
		}
		else
		{
			printf("非法坐标\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		print_board(mine, ROW, COL);
	}
}
