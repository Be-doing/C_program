#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//递归方式实现打印一个整数的每一位
void print_x(int n) {
	if (n>=10){
		print_x(n/10);
	}
	printf("%d  ", n % 10);
}
void main() {
	int num = 0;
	printf("请输入一个正整数：");
	scanf("%d",&num);
	print_x(num);
	system("pause");
}