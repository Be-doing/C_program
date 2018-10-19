#include<stdio.h>
#include<stdlib.h>
void main() {
	printf("请输入两个整型数：");
	int a, b;
	scanf_s("%d %d", &a, &b);
	a = a ^ b;      
	b = b ^ a;       
	a = a ^ b;     

	printf("看：%d %d\n", a, b);
	system("pause");
}