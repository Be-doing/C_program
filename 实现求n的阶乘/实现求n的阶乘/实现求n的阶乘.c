#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//递归和非递归分别实现求n的阶乘
int recursive(int shu) {
	if (shu==1) {
		return shu;
	}
	else {
		return shu * recursive(shu-1);
	}
}
int not_recursive(int zi) {
	int temp = 1;
	int exam = 1;
	for (temp = 1; temp <=zi;temp++) {
		exam *=temp;
	}
	return exam;
}
void main() {
	int num = 0;
	printf("请输入一个正整数：");
	scanf("%d",&num);
	printf("%d的递归阶乘是%d\n",num,recursive(num));
	printf("%d的非递归阶乘是%d\n",num,not_recursive(num));

	system("pause");
}