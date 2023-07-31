#define ROW 3
#define COW 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void InitBoard(char board[ROW][COW], int row, int cow);
void DisplayBoard(char board [ROW] [COW],int row,int cow);
void PlayerMove(char board[ROW][COW], int row, int cow);
void DianNao(char board[ROW][COW], int row, int cow);
char IsWin(char board[ROW][COW], int row, int cow);