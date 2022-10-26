#define _CRT_SECURE_NO_WARNINGS 1
/*
	有两个数组，一个数组mine用来存放布置好的雷的信息，另外一个数组存放排查出雷的信息 
	mine数组初始化为0；布置雷时改成1；
	show数组初始化为*，排除雷后具体位置改为数字字符

	进阶：
		递归展开该坐标不是雷
		该坐标没有被排查过
		该坐标周围没有雷
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
	//设计两个数组存放信息
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//初始化棋盘
	//mine：初始化全0；
	//show：初始化全*；
	init_board(mine, ROWS, COLS, '0');
	init_board(show, ROWS, COLS, '*');

	//打印棋盘
	//print_board(mine, ROW, COL);
	//print_board(show, ROW, COL);

	//布置雷
	set_mine(mine, ROW, COL); 
	
	//排雷
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
		printf("请输入选择:>");
		scanf("%d", &input);
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