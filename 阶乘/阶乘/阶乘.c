#include<stdio.h>
#include<stdlib.h>
void factor(int num) {
	int i = 1;
	int fac=1;
	while(i<=num) {
		fac*= i;
		i++;
	}
	printf("%d的阶乘是：%d\n",num,fac);
}
void main() {
	int number;
	printf("请输入一个数：");
	scanf_s("%d",&number);
	factor(number);
	system("pause");
}