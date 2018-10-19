#include<stdio.h>
#include<stdlib.h>
  void main() {
	printf("请输入两个整型数：");
	int a, b, c;
	scanf_s("%d %d", &a, &b);
	c = a;
	a = b;
	b = c;
	printf("看：%d %d\n",a,b);
	system("pause");
}
	