#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//�ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
int sum(int num) {
	if (num<10) {
		return num;
	}
	else {
		return sum(num/10)+num%10;
	}
}

void main() {
	int feifu_num = 0;
	printf("������һ���Ǹ�����");
	scanf("%d",&feifu_num);
	printf("%d�ĸ���λ�ĺ��ǣ�%d\n",feifu_num, sum(feifu_num));
	system("pause");
}