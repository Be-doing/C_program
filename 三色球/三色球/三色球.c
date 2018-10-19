#include<stdio.h>
#include<stdlib.h>
//三色球问题：一个口袋中放有12个球，已知其中3个是红的，3个是黄的，
//6个是绿的，现从中任取8个，问共有多少种可能的颜色搭配？
//绿球不能取0/1；红球和黄球总共才6个。不能满足8个
//绿球个数取8-red-green，且小于7个
void main()
{
int red = 0;//红球数量
int yellow = 0;//黄球数量
int number = 1;//可能性的次数
printf("\t红球\t黄球\t绿球\n");
printf("\n");
for (red= 0; red <= 3; red++)
{
	for (yellow= 0; yellow<= 3; yellow++)
	{
		if (8 - red- yellow <= 6)
		{
			printf("%2d:\t%d\t%d\t%d\n", number, red, yellow, 8 - red - yellow);
			number++;
		}
	}
}
system("pause");

}

