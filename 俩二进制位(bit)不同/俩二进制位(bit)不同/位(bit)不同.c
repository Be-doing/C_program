#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
void different_order(int num1, int num2) {
	int bit1[32] = { 0 };
	int bit2[32] = { 0 };
	int examp = 0;
	int count = 0;
	int memory1 = num1;
	int memory2 = num2;
	int temp = 0;
	int temp2 = 0;
	for (temp=0; temp < 32;temp++) {
		bit1[temp] = num1 % 2;
		num1 /= 2;
	}
	printf("\n");
	printf("%d��32λ�������ǣ�",memory1);
	while (temp>0) {
		printf("%d", bit1[temp-1]);
		temp--;
		if (temp % 4 == 0) {
			printf(" ");
		}
	}
	printf("\n");
	printf("\n");
	for (temp2 = 0; temp2< 32; temp2++) {
		bit2[temp2] = num2 % 2;
		num2 /= 2;
	}
	printf("%d��32λ�������ǣ�",memory2);
	while (temp2 > 0) {
		printf("%d", bit2[temp2-1]);
		temp2--;
		if (temp2%4==0) {
			printf(" ");
		}
	}
	printf("\n");
	printf("\n");
	while (examp<32) {
		if (bit1[examp]!=bit2[examp]) {
			count++;
		}
		examp++;
	}
	printf("�� %d ���͡� %d ���Ķ�������  %d  ��λ��ͬ��\n",memory1,memory2,count);
	printf("\n");
}
void main() {
	int test1 = 0;
	int test2 = 0;
	while (1) {
		printf("�����������Ǹ�����( X Y):");
		scanf("%d %d", &test1, &test2);
		if (test1 < 0 || test2 < 0) {
			printf("����������������⣬���������룡\n");
			continue;
		}
		else {
			different_order(test1, test2);
			break;
		}
	}
	system("pause");
}