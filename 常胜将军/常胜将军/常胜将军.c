#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
void main() {
	int i;
	printf("**************************************\n");
	printf("**你不可能战胜常胜将军！不信您试试！**\n");
	printf("**************************************\n");
	Sleep(2000);
	printf("***<1>试试就试试***********\n");
	printf("***<0>路过，溜了溜了*******\n");
	printf("请输入您的选择：");
	scanf_s("%d",&i);
	if (i==0) {
		printf("胆小鬼！！再见！\n");
		
	}else{
	printf("**********游戏开始！！！**************\n");
	int computer=0;
	int human=0;
	int money=21;
	while (1) {
		printf("此时还有%d块钱\n现在你拿钱\n",money);
		scanf_s("%d", &human);
		printf("我拿走了%d块钱\n",human);
			if (human<1||human>4) {
			printf("你犯规了！重新输入");
			continue;
		}
		money = money - human;
		if (money==0) {
			printf("常胜将军胜利！\n");
			break;
		}
		computer = 5 - human;
		money = money - computer;
		printf("常胜将军拿走了%d根！\n",computer);
	}
	}
	system("pause");
}