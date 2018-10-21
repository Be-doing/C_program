#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define ROW 9//地图行数
#define COL 9//地图列数
#define MINE_COUNT 10 //地雷个数 
char mine_map[ROW + 2][COL + 2];//雷阵地图（+2表示边框，统计雷数）
char show_map[ROW + 2][COL + 2];//展示地图（+2表示边框，统计雷数）
int man_select() {
	int choice = 0;
	printf("##########扫雷游戏##########\n");
	printf(" #########1. 开始游戏######\n");
	printf(" #########2. 退出游戏######\n");
	printf("###########################\n");
	while (1) {
		printf("请输入您的选择：");
		scanf("%d", &choice);
		if (choice < 0 || choice>2) {
			printf("您输入的有问题，请重新输入！");
			continue;
		}
		break;
	}
	return choice;
}
//打印函数
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
//提示周围数量
void prompt_mine_count(char map[ROW+2][COL+2],char mmap[ROW+2][COL+2],int row,int col) {
	int mine_count = (mine_map[row - 1][col - 1] - '0') + (mine_map[row - 1][col] - '0') + (mine_map[row - 1][col + 1] - '0')//第一行
		+
		(mine_map[row][col - 1] - '0') + (mine_map[row][col + 1] - '0') +//第二行
		(mine_map[row + 1][col - 1] - '0') + (mine_map[row + 1][col] - '0')+ (mine_map[row + 1][col + 1] - '0') ;//第三行
	show_map[row][col] = '0' + mine_count;
}
//数组初始化，不知雷阵
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
	//不是地雷二点方块数
	int not_mine_count = 0;
	//初始化数组
	init_arr(mine_map,show_map);
	//打印展示地图
	print_map(show_map);
	//开始游戏
	while (1) {
		int row = 0;
		int col = 0;
		//提示用户输入
		printf("条件简陋，请输入要翻开的坐标（行 列）：");
		scanf("%d %d",&row,&col);
		//进行合法判定
		if (row<1||row>ROW||col<1||col>ROW) {
			printf("您输入的坐标超出范围，请重新输入！");
			continue;
		}
		//判断是否踩雷
		//踩雷，游戏结束
		if (mine_map[row][col]=='1') {
			printf("您踩雷了，游戏结束！\n");
			print_map(mine_map);
			break;
		}
		//没踩雷，是否胜利，为胜利提示周围雷数
		//胜利！退出循环！
		++not_mine_count;
		if (not_mine_count==ROW*COL-MINE_COUNT) {
			printf("猴赛雷！扫雷成功！\n");
			print_map(mine_map);
			break;
		}
		//没有胜利，提示周围雷数
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