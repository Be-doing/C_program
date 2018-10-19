#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
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
	printf("请输入一个非负数：");
	scanf("%d",&feifu_num);
	printf("%d的各个位的和是：%d\n",feifu_num, sum(feifu_num));
	system("pause");
}