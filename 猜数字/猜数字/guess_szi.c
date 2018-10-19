#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
void game() {
	int x = 0;
	x = rand() % 100;
	int choice = 0;
	printf("请输入一个0~99的数字：");
	scanf_s("%d", &choice);
	while (1) {
		if (choice < x) {
			printf("您的数字小了呦！请再输一次：");
			scanf_s("%d", &choice);
		}
		if (choice > x) {
			printf("您的数字大了呦！请再输一次：");
			scanf_s("%d", &choice);
		}
		if (choice = x) {
			printf("恭喜您！真幸运！\n");
			break;
		}
	}

}
void menu() {
	printf("*************************\n");
	Sleep(900);
	printf("******+1.开始游戏+******\n");
	Sleep(900);
	printf("******+0.退出游戏+******\n");
	Sleep(900);
	printf("*************************\n");
	Sleep(900);
	int choice;

	while (1) {
		printf("请输入您的选择：");
		scanf_s("%d", &choice);
		if (choice == 1) {
			printf("游戏要开始了，请准备！\n");
			printf("\n");
			Sleep(1000);
			game();
		}
		else if (choice == 0) {
			printf("下次再来呦。。\n");
			break;
		}
		else {
			printf("非法输入。\n");
		}

	}
}
	

void main() {
	
	menu();
	system("pause");
}