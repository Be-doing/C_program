#include<stdio.h>
#include<stdlib.h>

//num的阶乘之和计算；
//需要计算小于num的数的阶乘；
//然后相加
void sum(int num) {
	int sum = 0;
	int i = 1;
	while (i <= num) {
		int j=1;
		int fac = 1;
		while(j<=i){
			fac *= j;
			j++;
	}
		sum += fac;
		i++;
	}
	printf("%d的阶乘之和是：%d\n",num,sum);
}
void main() {
	int number = 0;
	printf("请输入一个数：");
	scanf_s("%d",&number);
	sum(number);
	system("pause");
}