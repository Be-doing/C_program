#include<stdio.h>
void main()
{
	int a, b, c;
	printf("���������֣�");
	scanf_s("%d", &a);
	c = 1;
	while (a > 10)
	{
		b = a % 10;
		a = a / 10;
		c = c * b;
	}

	printf("����λ�ϵĻ�Ϊ%d", c*a);
}
//25              256
//b=5            =6     =5
//a=2            =25    =2
//c=5            =6     =30