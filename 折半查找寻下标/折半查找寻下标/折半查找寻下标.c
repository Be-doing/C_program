//���������������в�����Ҫ�����֣�
//�ҵ��˷����±꣬�Ҳ������� - 1.���۰����
#include<stdio.h>
#include<stdlib.h>
void findx() {
	int x_amount[10] = { 0 };
	int x=0;
	int left = 0;
	int right = 9;
	printf("����С��������ʮ�������ÿո���� ��");
	for (int i = 0; i < 10;i++) {
    scanf_s("%d",&x_amount[i]);
	}

	printf("��������Ҫ�ҵ����� ��");
	scanf_s("%d",&x);

	while (x_amount[left]<=x_amount[right]) {
		int mid = (left + right + 1) / 2;
		if (x> x_amount[mid]) {
			left = mid+1;
		}
		if(x<x_amount[mid]) {
			right = mid-1;
		}
		if (x == x_amount[mid]) {
			printf("%d\n",mid);
			break;
		}
	}
	if (x_amount[left] > x_amount[right]) {
	printf("û�ҵ���");
     }
}
	
void main() {
	findx();
	system("pause");
}