#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832
void reverse_bit(unsigned int num) {
	int com = 31;
	printf("%u的二进制为：",num);
	while (com>=0)
	{
     printf("%u",(num>>com)&1);
	 --com;
	}
	printf("\n");
	printf("%u翻转后的二进制为：",num);
	

	unsigned int reverse = 0;

	for (unsigned int bit = 0; bit < 32; ++bit) {
	reverse <<= 1;	
	reverse |= (num >> bit) & 1;//00000000000000000000000000011001
	printf("%d",reverse&1);
	}
	printf("\n");
	printf("现在的数为：%u\n",reverse);
	
}
void main() {
	 unsigned int input = 0;
	while (1)
	{
		printf("请输入一个非负整数：");
		scanf("%d",&input);
		if (input<0) {
			printf("输入有误，请重新输入！");
			continue;
		}
		reverse_bit(input);
		break;
	}
	system("pause");
}
