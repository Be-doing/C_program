#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
void main() {
	int i;
	printf("**************************************\n");
	printf("**�㲻����սʤ��ʤ���������������ԣ�**\n");
	printf("**************************************\n");
	Sleep(2000);
	printf("***<1>���Ծ�����***********\n");
	printf("***<0>·������������*******\n");
	printf("����������ѡ��");
	scanf_s("%d",&i);
	if (i==0) {
		printf("��С�����ټ���\n");
		
	}else{
	printf("**********��Ϸ��ʼ������**************\n");
	int computer=0;
	int human=0;
	int money=21;
	while (1) {
		printf("��ʱ����%d��Ǯ\n��������Ǯ\n",money);
		scanf_s("%d", &human);
		printf("��������%d��Ǯ\n",human);
			if (human<1||human>4) {
			printf("�㷸���ˣ���������");
			continue;
		}
		money = money - human;
		if (money==0) {
			printf("��ʤ����ʤ����\n");
			break;
		}
		computer = 5 - human;
		money = money - computer;
		printf("��ʤ����������%d����\n",computer);
	}
	}
	system("pause");
}