#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���

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
		printf("������Ҫ��ӡ���У��У�����");
		scanf("%d",&rows);
		if (rows<0) {
			printf("�����������������룡\n");
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