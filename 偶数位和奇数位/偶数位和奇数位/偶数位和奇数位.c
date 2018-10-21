#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。
void show_order(int num) {
	int list[64] = { 0 };
	int temp = 0;
	int even = 0;//偶数
	int odd = 0;//奇数
	while (num!=0) {//temp == num 0==4  1==2  2==1  3退出循环
	list[temp] = num % 2;
	num=num / 2;
	temp++;
	}
	even = temp-1;
	odd = temp-1;
	printf("原来的二进制数列：");
	while (temp!=0) {
		printf("%d",list[temp-1]);
		temp--;
	}
	printf("\n");
	printf("偶数的序列是：");
	while (even>=0) {
		if (even%2==1) {
			printf("%d",list[even]);
		}
		even--;
	}
	printf("\n");
	printf("奇数的序列是：");
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
	printf("请输入要一个非负整数：");
	scanf("%d",&num);
	if (num<0) {
		printf("输入不规范，请重新输入！");
		continue;
	}
	show_order(num);
	break;
	}
	system("pause");
}