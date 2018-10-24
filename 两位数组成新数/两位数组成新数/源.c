#include<stdio.h>
void main()
{
	int a, b, c, d, i;
	printf("请输入两个两位数：");
	scanf_s("%d %d", &a, &b);
	c = a / 10;
	a = a % 10;
	d = b / 10;
	b = b % 10;
	i = c * 1000 + d * 100 + a * 10 + b;
	printf("%d", i);

}
//20 45 = 2405