#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//编写一个函数实现n^k，使用递归实现
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
		printf("请输入数字和非负数次方（num pow_x）：");
		scanf("%d %d", &num, &pow_x);
		if (num <= 0 || pow_x <= 0) {
			printf("本程序还没有达到高度，请重新开始！\n");
			continue;
		}
		printf("%d的%d次方是%d\n", num, pow_x, power(num, pow_x));
		break;
	}
	system("pause");
}