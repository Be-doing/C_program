#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
void game() {
	int x = 0;
	x = rand() % 100;
	int choice = 0;
	printf("������һ��0~99�����֣�");
	scanf_s("%d", &choice);
	while (1) {
		if (choice < x) {
			printf("��������С���ϣ�������һ�Σ�");
			scanf_s("%d", &choice);
		}
		if (choice > x) {
			printf("�������ִ����ϣ�������һ�Σ�");
			scanf_s("%d", &choice);
		}
		if (choice = x) {
			printf("��ϲ���������ˣ�\n");
			break;
		}
	}

}
void menu() {
	printf("*************************\n");
	Sleep(900);
	printf("******+1.��ʼ��Ϸ+******\n");
	Sleep(900);
	printf("******+0.�˳���Ϸ+******\n");
	Sleep(900);
	printf("*************************\n");
	Sleep(900);
	int choice;

	while (1) {
		printf("����������ѡ��");
		scanf_s("%d", &choice);
		if (choice == 1) {
			printf("��ϷҪ��ʼ�ˣ���׼����\n");
			printf("\n");
			Sleep(1000);
			game();
		}
		else if (choice == 0) {
			printf("�´������ϡ���\n");
			break;
		}
		else {
			printf("�Ƿ����롣\n");
		}

	}
}
	

void main() {
	
	menu();
	system("pause");
}