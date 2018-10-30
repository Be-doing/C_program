
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//1.写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1
//程序原型：
//int count_one_bits(unsigned int value)
//{
//	// 返回 1的位数
//}
//
//2.获取一个数二进制序列中所有的偶数位和奇数位，分别输出二进制序列。
//

void to_count_one_bits(int num) {
	int count = 0;
	int bit = 0;
	printf("%d的二进制(反顺序)是：",num);
	while (bit<32) {
		if (((num>>bit)&1)==1) {
			++count;
		}
		printf("%d",(num>>bit)&1);
		++bit;
	}
	printf("\n");
	printf("%d的二进制1的个数为：%d\n",num,count);
}
void to_show_odd_even(int num) {
	printf("%d的偶数位是：",num);
	int bit = 0;
	while (bit<32) {
		printf("%d",(num>>bit)&1);//0是偶数位
		bit += 2;
	}
	printf("\n");
	printf("%d的奇数位是：",num);
	bit = 1;//初始化bit
	while (bit<32) {
		printf("%d",(num>>bit)&1);
		bit += 2;
	}
	printf("\n");
}
void main() {
	int num = 0;
	while (1) {
		printf("请输入一个非负整数：");
		scanf("%d",&num);
		if (num<0) {
			printf("输入有误，请重新输入！\n");
			continue;
		}
		to_count_one_bits(num);
		to_show_odd_even(num);
		break;
	}
	system("pause");
}