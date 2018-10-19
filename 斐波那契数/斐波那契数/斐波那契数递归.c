#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//递归求第n个斐波那契数。
int findX(int x) {
	if (x<3) {
		return 1;
	}
	else {
		return findX(x-1) + findX(x-2);
	}
}
