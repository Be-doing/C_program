#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
int power(int n,int pow) {
	if (pow==0) {
		return 1;
	}
	if (pow>=1) {
		if (pow==1) {
			return n;
		}
		return n*power(n,pow-1);
	}
	return 0;
}
void main() {
	int num = 0;
	int pow_x = 0;
	while (1) {
		printf("���������ֺͷǸ����η���num pow_x����");
		scanf("%d %d", &num, &pow_x);
		if (num <= 0 || pow_x <= 0) {
			printf("������û�дﵽ�߶ȣ������¿�ʼ��\n");
			continue;
		}
		printf("%d��%d�η���%d\n", num, pow_x, power(num, pow_x));
		break;
	}
	system("pause");
}