#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//��ȡһ�������������������е�ż��λ������λ��
//�ֱ�������������С�
void show_order(int num) {
	int list[64] = { 0 };
	int temp = 0;
	int even = 0;//ż��
	int odd = 0;//����
	while (num!=0) {//temp == num 0==4  1==2  2==1  3�˳�ѭ��
	list[temp] = num % 2;
	num=num / 2;
	temp++;
	}
	even = temp-1;
	odd = temp-1;
	printf("ԭ���Ķ��������У�");
	while (temp!=0) {
		printf("%d",list[temp-1]);
		temp--;
	}
	printf("\n");
	printf("ż���������ǣ�");
	while (even>=0) {
		if (even%2==1) {
			printf("%d",list[even]);
		}
		even--;
	}
	printf("\n");
	printf("�����������ǣ�");
	while (odd>=0) {
		if (odd % 2 == 0) {
			printf("%d", list[odd]);
		}
		odd--;
	}
	printf("\n");
}
void main() {
	int num;
	while (1) {
	printf("������Ҫһ���Ǹ�������");
	scanf("%d",&num);
	if (num<0) {
		printf("���벻�淶�����������룡");
		continue;
	}
	show_order(num);
	break;
	}
	system("pause");
}