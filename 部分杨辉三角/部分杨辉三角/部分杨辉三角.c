#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define ROW 6
#define COL 6
void main() {
	int YHsanjiao[ROW][COL] = {1};
	for (int row = 0; row < ROW; row++) {
		YHsanjiao[row][0] =YHsanjiao[row][row]= 1;
	}
	for (int row = 2; row < ROW;row++) {
	
		for (int col = 1; col <= row;col++) {
			YHsanjiao[row][col] = YHsanjiao[row - 1][col - 1] + YHsanjiao[row - 1][col];
		}
	}
	
	for (int row = 0; row < ROW;row++) {
		for (int temp = 0; temp <= 2*(ROW -row); temp++) {
			printf(" ");
		}
		for (int col = 0; col <= row;col++) {
			printf("%4d",YHsanjiao[row][col]);
		}
		printf("\n");
	}
	system("pause");
}