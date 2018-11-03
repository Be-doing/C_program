
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以喝多少汽水。
//编程实现。
void main() {
	int drink = 20;//20元买20瓶 drink e  20  
	int count = 20;//初始瓶子20个 
	//20瓶可以换10瓶  20+10
	//10瓶换5瓶 20+10+5
	//5瓶换2瓶多一个空瓶子 20+10+5+2
	//3空瓶
	//两个空瓶换一瓶。 20+10+5+1
	//加上原本的一个又是一瓶 
	//奇数的话就换  odd-1瓶
	//20+10+5++2+1+1==39
	while (1)
	{
		if (drink % 2 != 0)
		{
			count = count + drink - 1;
			break;
		}
		else
		{
			drink = drink / 2;
			count += drink;
		}
	}
	printf("可以喝%d瓶汽水\n", count);

	system("pause");
}