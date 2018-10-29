#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。

void  chengfa_plus(int rows) {
	int row = 1;
	
	while (row<=rows) {
		int col = 1;
	     while (col<=row) {
	    	printf("%d * %d = %d\t",col,row,col*row);
		    ++col;
	     }
		 printf("\n");
		 ++row;
	}
	
}
void main() {
	int rows = 0;
	while (1) {
		printf("请输入要打印的行（列）数：");
		scanf("%d",&rows);
		if (rows<0) {
			printf("输入有误，请重新输入！\n");
			continue;
		}
		else if (rows==0) {
			printf("0 * 0 = 0\n");
		}
		chengfa_plus(rows);
		break;
	}
	system("pause");
}