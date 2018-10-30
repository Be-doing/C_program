#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//4.编程实现：
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
void to_different_bit(int num1,int num2) {
	int bit = 0;
	int count = 0;
	int dif = num1 ^ num2;
	while (bit < 32) {
		if (((dif>>bit)&1)==1) {
			++count;
		}
		++bit;
	}
	printf("different count=%d",count);
}
void main() {
	int num1 = 0;
	int num2 = 0;
	while (1){
		printf("请输入两个数(num1 num2)：");
		scanf("%d %d",&num1,&num2);
		if (num1<0||num2<0) {
			printf("输入有误，请重新输入！\n");
		}
		to_different_bit(num1,num2);
		break;
	}
	system("pause");
}