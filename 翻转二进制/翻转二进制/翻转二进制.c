#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
//2550136832
void reverse_bit(unsigned int num) {
	int com = 31;
	printf("%u�Ķ�����Ϊ��",num);
	while (com>=0)
	{
     printf("%u",(num>>com)&1);
	 --com;
	}
	printf("\n");
	printf("%u��ת��Ķ�����Ϊ��",num);
	

	unsigned int reverse = 0;

	for (unsigned int bit = 0; bit < 32; ++bit) {
	reverse <<= 1;	
	reverse |= (num >> bit) & 1;//00000000000000000000000000011001
	printf("%d",reverse&1);
	}
	printf("\n");
	printf("���ڵ���Ϊ��%u\n",reverse);
	
}
void main() {
	 unsigned int input = 0;
	while (1)
	{
		printf("������һ���Ǹ�������");
		scanf("%d",&input);
		if (input<0) {
			printf("�����������������룡");
			continue;
		}
		reverse_bit(input);
		break;
	}
	system("pause");
}
