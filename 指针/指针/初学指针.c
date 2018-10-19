#include<stdio.h>
#include<stdlib.h>
void main() {
	int a, b;
	int* pointer1;//定义指针
	int* pointer2;
	printf("请输入两个整数：");
	scanf_s("%d %d",&a,&b);
	pointer1 = &a;
	pointer2 = &b;
	printf("pointer1:%d,pointer2:%d\n", *pointer1, *pointer2);//指针前需要加*
	system("pause");

}