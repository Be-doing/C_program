
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//1.дһ���������ز����������� 1 �ĸ���
//���磺 15 0000 1111 4 �� 1
//����ԭ�ͣ�
//int count_one_bits(unsigned int value)
//{
//	// ���� 1��λ��
//}
//
//2.��ȡһ�������������������е�ż��λ������λ���ֱ�������������С�
//

void to_count_one_bits(int num) {
	int count = 0;
	int bit = 0;
	printf("%d�Ķ�����(��˳��)�ǣ�",num);
	while (bit<32) {
		if (((num>>bit)&1)==1) {
			++count;
		}
		printf("%d",(num>>bit)&1);
		++bit;
	}
	printf("\n");
	printf("%d�Ķ�����1�ĸ���Ϊ��%d\n",num,count);
}
void to_show_odd_even(int num) {
	printf("%d��ż��λ�ǣ�",num);
	int bit = 0;
	while (bit<32) {
		printf("%d",(num>>bit)&1);//0��ż��λ
		bit += 2;
	}
	printf("\n");
	printf("%d������λ�ǣ�",num);
	bit = 1;//��ʼ��bit
	while (bit<32) {
		printf("%d",(num>>bit)&1);
		bit += 2;
	}
	printf("\n");
}
void main() {
	int num = 0;
	while (1) {
		printf("������һ���Ǹ�������");
		scanf("%d",&num);
		if (num<0) {
			printf("�����������������룡\n");
			continue;
		}
		to_count_one_bits(num);
		to_show_odd_even(num);
		break;
	}
	system("pause");
}