#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "game.h"


void menu()
{
	printf("*************************************************************\n");
	printf("********     1.play                        0.exit    ********\n");
	printf("*************************************************************\n");
}
void game()
{
	char ret = 0;
	char board[ROW][COW] = {0};
	InitBoard(board, ROW, COW);
	DisplayBoard(board, ROW, COW);
	while (1)
	{
		PlayerMove(board, ROW, COW);
		DisplayBoard(board, ROW, COW);
		ret = IsWin(board, ROW, COW);
		if (ret != 'C')
		{
			break;
		}
		DianNao(board, ROW, COW);
		DisplayBoard(board, ROW, COW);
		ret = IsWin(board, ROW, COW);
		if (ret != 'C')
		{
			break;
		}
	}
		if (ret == '*')
		{
			printf("玩家赢\n");
		}
		else if (ret == '#')
		{
			printf("电脑赢\n");
		}
		else
		{
			printf("平局\n");
		}
	
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		
		menu();
		printf("请选择:>");
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
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}


