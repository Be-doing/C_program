#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
void main() {
	int arr[9] = { 1,3,5,4,6,6,5,3,4 };
	int temp = 1;
	while (temp<9) {
		arr[0] = arr[0] ^ arr[temp];//01 11 10 /10 11 01 /001 100 000/ 101 100 001
		++temp;
	}
	printf("��������%d\n",arr[0]);
	system("pause");
}