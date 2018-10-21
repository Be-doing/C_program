#define  _CRT_SECURE_NO_WARNINGS
#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
//��ʼ������
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
//��ӡ3X3����
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

//�������
void player_move(char move[ROW][COL]) {
	int row=0;
	int col=0;
	while (1) {
		printf("������������꣨�� �ݣ���");
		scanf("%d %d", &row, &col);
		if ((row<0)||(row>3)||(col<0)||(col>3)) {
			printf("����������겻���ڣ����������룡\n");
			continue;
		}
		else if (move[row][col] != ' ') {
			printf("������������Ѿ������ˣ����������룡\n");
			continue;
		}
		else {
			move[row][col] = '*';
			break;
		}

	}
	
}
//�ж��Ƿ����
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
//�����Ϸ
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
//��������
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
	char str[] = "�����Ц����ȥ���ұ����������ˡ������Ƿ�������һ��";
	//char* p = str;
	for (int p = 0; p < 50; p++) {
		Sleep(50);
		printf("%c", str[p]);
	}
	printf("\n");
	printf("=====================\n");
	printf("====1.��ʼ��Ϸ=======\n");
	printf("====2.�˳���Ϸ=======\n");
	printf("=====================\n");
	print_chessboard(move);
	while (1) {
		printf("����������ѡ��");
		scanf("%d", &choice);
		if (choice < 0 || choice>1) {
			printf("�������������⣬���������룡\n");
			continue;
		}
		else if (choice == 1) {
			goto game;
			break;
		}
		else {
			printf("�������ߣ�");
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
			printf("playerʤ����\n");
		}
		else if (winner == 'O') {
			printf("����ʤ����\n");
		}
	    else if(winner=='n'){
		    printf("�˴ζԾֺ;֣�лл���룡");
	    }
		else {
			printf("�������\n");
		}
	system("pause");
}