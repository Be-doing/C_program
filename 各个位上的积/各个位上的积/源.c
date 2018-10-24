#include<stdio.h>
void main()
{
	int a, b, c;
	printf("请输入数字：");
	scanf_s("%d", &a);
	c = 1;
	while (a > 10)
	{
		b = a % 10;
		a = a / 10;
		c = c * b;
	}

	printf("各个位上的积为%d", c*a);
}
//25              256
//b=5            =6     =5
//a=2            =25    =2
//c=5            =6     =30