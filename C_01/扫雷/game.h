#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define EASY_COUNT 10



#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

//∆Â≈Ã≥ı ºªØ
void init_board(char board[ROWS][COLS], int rows, int cols, char set);

//¥Ú”°∆Â≈Ã
void print_board(char board[ROWS][COLS], int row, int col);

//≤º÷√¿◊
void set_mine(char board[ROWS][COLS], int row, int col);

//≈≈¿◊
void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);