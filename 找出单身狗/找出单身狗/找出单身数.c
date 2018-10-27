#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
void main() {
	int arr[9] = { 1,3,5,4,6,6,5,3,4 };
	int temp = 1;
	while (temp<9) {
		arr[0] = arr[0] ^ arr[temp];//01 11 10 /10 11 01 /001 100 000/ 101 100 001
		++temp;
	}
	printf("单神数是%d\n",arr[0]);
	system("pause");
}