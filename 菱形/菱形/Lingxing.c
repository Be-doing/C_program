#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
void Diamond(int line) {
	if (line % 2 == 0) {
		printf("菱形的行数为奇数，请输入奇数！\n");
	}
	else
	{
		int hang = line / 2 + 1;
		int col = line / 2;
		for (int i = 1; i <= hang; i++) {
			for (int j = 1; j <= col - i + 1; j++) {
				printf(" ");
			}
			for (int k = 1; k <= 2 * i - 1; k++) {
				printf("*");
			}
			printf("\n");
			Sleep(500);
		}
		for (int i = 1; i < hang; i++) {
			for (int j = 0; j < i; j++) {
				printf(" ");
			}
			for (int k = 0; k < line - (2 * i - 1) - 1; k++) {
				printf("*");
			}
			printf("\n");
			Sleep(500);
		}
	}
		system("pause");
	
}
void main() {
	int line;
	printf("请输入行数：");
	scanf_s("%d",&line);
	Diamond(line);
}