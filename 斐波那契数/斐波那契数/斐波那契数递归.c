#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//�ݹ����n��쳲���������
int findX(int x) {
	if (x<3) {
		return 1;
	}
	else {
		return findX(x-1) + findX(x-2);
	}
}
