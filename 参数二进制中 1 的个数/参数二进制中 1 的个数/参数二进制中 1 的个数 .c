#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1
//程序原型：
//int count_one_bits(unsigned int value)
//{
//	// 返回 1的位数
//}
int count_one_bits(int parameter) {//parameter  参数；

	if (parameter==0) {
		return parameter;
	}
	else {
		if (parameter % 2==1) {
			return count_one_bits(parameter / 2) + 1;
		}
		return count_one_bits(parameter / 2);
		
	}
	return 0;
	
}
void main() {
	int num = 0;
	while(1){
	printf("请输入一个非负数：");
	scanf("%d",&num);
	if (num<0) {
		printf("输入不规范，请重新输入！\n");
		continue;
	}
	else {
		printf("%d\n", count_one_bits(num));
		break;
	}
	}
	
	system("pause");
}