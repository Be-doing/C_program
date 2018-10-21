#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define ROW 9//��ͼ����
#define COL 9//��ͼ����
#define MINE_COUNT 10 //���׸��� 
char mine_map[ROW + 2][COL + 2];//�����ͼ��+2��ʾ�߿�ͳ��������
char show_map[ROW + 2][COL + 2];//չʾ��ͼ��+2��ʾ�߿�ͳ��������
int man_select() {
	int choice = 0;
	printf("##########ɨ����Ϸ##########\n");
	printf(" #########1. ��ʼ��Ϸ######\n");
	printf(" #########2. �˳���Ϸ######\n");
	printf("###########################\n");
	while (1) {
		printf("����������ѡ��");
		scanf("%d", &choice);
		if (choice < 0 || choice>2) {
			printf("������������⣬���������룡");
			continue;
		}
		break;
	}
	return choice;
}
//��ӡ����
void print_map(char map[ROW+2][COL+2]) {
	printf("    ");
	for (int col = 1; col <= COL;col++) {
		printf("%d ",col);
	}
	printf("\n");
	for (int col = 1; col <= COL;col++) {
		printf("---");
	}
	printf("\n");
	for (int row = 1; row <= ROW;row++) {
		printf("  %d|",row);
		for (int col = 1; col <=COL;col++) {
			printf("%c ",map[row][col]);
		}
		printf("\n");
	}
}
//��ʾ��Χ����
void prompt_mine_count(char map[ROW+2][COL+2],char mmap[ROW+2][COL+2],int row,int col) {
	int mine_count = (mine_map[row - 1][col - 1] - '0') + (mine_map[row - 1][col] - '0') + (mine_map[row - 1][col + 1] - '0')//��һ��
		+
		(mine_map[row][col - 1] - '0') + (mine_map[row][col + 1] - '0') +//�ڶ���
		(mine_map[row + 1][col - 1] - '0') + (mine_map[row + 1][col] - '0')+ (mine_map[row + 1][col + 1] - '0') ;//������
	show_map[row][col] = '0' + mine_count;
}
//�����ʼ������֪����
void init_arr(char mine_map[ROW+2][COL+2], char show_map[ROW+2][COL+2]) {
	memset(mine_map, '0', (ROW+2)*(COL+2));
	memset(show_map, '*', (ROW+2)*(COL+2));
	int mine_count = MINE_COUNT;
	//srand(time(0));
	while (mine_count>0) {
		int row = rand() % 9 + 1;
		int col = rand() % 9 + 1;
		if (mine_map[row][col]=='0') {
			mine_map[row][col] = '1';
			--mine_count;
		}
	}
}
void to_game() {
	//���ǵ��׶��㷽����
	int not_mine_count = 0;
	//��ʼ������
	init_arr(mine_map,show_map);
	//��ӡչʾ��ͼ
	print_map(show_map);
	//��ʼ��Ϸ
	while (1) {
		int row = 0;
		int col = 0;
		//��ʾ�û�����
		printf("������ª��������Ҫ���������꣨�� �У���");
		scanf("%d %d",&row,&col);
		//���кϷ��ж�
		if (row<1||row>ROW||col<1||col>ROW) {
			printf("����������곬����Χ�����������룡");
			continue;
		}
		//�ж��Ƿ����
		//���ף���Ϸ����
		if (mine_map[row][col]=='1') {
			printf("�������ˣ���Ϸ������\n");
			print_map(mine_map);
			break;
		}
		//û���ף��Ƿ�ʤ����Ϊʤ����ʾ��Χ����
		//ʤ�����˳�ѭ����
		++not_mine_count;
		if (not_mine_count==ROW*COL-MINE_COUNT) {
			printf("�����ף�ɨ�׳ɹ���\n");
			print_map(mine_map);
			break;
		}
		//û��ʤ������ʾ��Χ����
		prompt_mine_count(show_map,mine_map,row,col);
		print_map(show_map);
	}
}
void start_game() {
	while (1) {
		int choice = man_select();
		if (choice == 0) {
			break;
		}
		to_game();
	}
}
void main() {
	start_game();
	system("pause");
}