#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//编写一个函数，该函数能置换一个数的二进制的某一位未0或1
//int trans_bit(int num,int position)
void trans_bit(int num,int position,int flag) {
	int temp = 32;
	int ret = 0;
	while (temp--){
		ret <<= temp;
		if (temp!=position) {
			ret |= ((num >> temp) & 1);
		}
		else {
			if (flag==1) {
				ret |= ((num >> temp) ^ 1);
			}
			else {
				ret |= ((num >> temp) & 0);
			}
		}
		
	}
	printf("%d\n",ret);
}
void main() {
	int num = 15;
	trans_bit(num,4,0);
	system("pause");
}