#define  _CRT_SECURE_NO_WARNINGS
#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
//初始化数组
void start(char move[ROW][COL]) {
	int i = 0;
		int j = 0;
		for (i = 0; i < ROW; i++)
		{
			for (j = 0; j < COL; j++)
			{
				move[i][j] = ' ';
			}
		}
}
//打印3X3棋盘
void print_chessboard(char move[ROW][COL]){
	
	for (int row = 0; row < ROW; row++)
	{
		printf(" %c | %c | %c ",move[row][0], move[row][1], move[row][2]);
         printf("\n");
		if (row!=2) {
		printf("---|---|---");
		}
		printf("\n");
		
	}
}

//玩家落子
void player_move(char move[ROW][COL]) {
	int row=0;
	int col=0;
	while (1) {
		printf("玩家请输入坐标（横 纵）：");
		scanf("%d %d", &row, &col);
		if ((row<0)||(row>3)||(col<0)||(col>3)) {
			printf("您输入的坐标不存在，请重新输入！\n");
			continue;
		}
		else if (move[row][col] != ' ') {
			printf("你输入的坐标已经有子了，请重新输入！\n");
			continue;
		}
		else {
			move[row][col] = '*';
			break;
		}

	}
	
}
//判断是否和棋
int IS_full(char move[ROW][COL]) {
	int count = 0;
	for (int row = 0; row < 3; row++) {
		for (int col = 0; col < 3; col++) {
			if (move[row][col] == '*'||move[row][col]=='O') {
				count++;
				if (count == 9)
					return 1;
			}
		}
	}
	return 0;
}
//检查游戏
char check_chess(char move[ROW][COL]) {
	for (int i = 0; i < 3;i++) {
	    if (move[i][0]==move[i][1]&&move[i][1]==move[i][2] &&move[i][0]!=' ') {
			return move[i][1];
		    break;
	    }
	}
	for (int i = 0; i < 3; i++) {
		if (move[0][i] == move[1][i]&&move[1][i] == move[2][i]&&move[0][i]!=' ') {
			return move[0][i];
			break;
		}
	}
	if (move[0][0]==move[1][1]&&move[1][1]==move[2][2]&&move[1][1]!=' ') {
		return move[1][1];
	}
	if (move[0][2]==move[1][1]&&move[0][2]==move[2][0]&&move[1][1]!=' ') {
		return move[1][1];
	}
	if(IS_full(move)) {
		return 'n';
	}
	return ' ';
}
//电脑落子
void computer_move(char move[ROW][COL]) {
	while (1) {
		srand((unsigned int )(time(0)));
		int row = rand() % 3;
		int col = rand() % 3;
		if (move[row][col] != ' ') {
			continue;
		}
		else {
			move[row][col] ='O';
			break;
		}

	}

}
void main() {
	char winner = 0;
	char move[ROW][COL] = { 0 };
	start(move);
	int choice = 0;
	char str[] = "仰天大笑出门去，我辈岂是蓬蒿人。少侠是否来对弈一局";
	//char* p = str;
	for (int p = 0; p < 50; p++) {
		Sleep(50);
		printf("%c", str[p]);
	}
	printf("\n");
	printf("=====================\n");
	printf("====1.开始游戏=======\n");
	printf("====2.退出游戏=======\n");
	printf("=====================\n");
	print_chessboard(move);
	while (1) {
		printf("请输入您的选择：");
		scanf("%d", &choice);
		if (choice < 0 || choice>1) {
			printf("少侠输入有问题，请重新输入！\n");
			continue;
		}
		else if (choice == 1) {
			goto game;
			break;
		}
		else {
			printf("少侠慢走！");
			break;
		}
	}
	game:
	while (1) {
		player_move(move);
        print_chessboard(move);
		winner = check_chess(move);
		if (winner!=' ') {
			break;
		}
		computer_move(move);
		print_chessboard(move);
		winner=check_chess(move);
		if (winner!=' ') {
			break;
		}
	
	}
		if (winner == '*') {
			printf("player胜利！\n");
		}
		else if (winner == 'O') {
			printf("电脑胜利！\n");
		}
	    else if(winner=='n'){
		    printf("此次对局和局，谢谢参与！");
	    }
		else {
			printf("程序出错\n");
		}
	system("pause");
}