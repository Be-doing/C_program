#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
void print_x(int n) {
	if (n>=10){
		print_x(n/10);
	}
	printf("%d  ", n % 10);
}
void main() {
	int num = 0;
	printf("������һ����������");
	scanf("%d",&num);
	print_x(num);
	system("pause");
}