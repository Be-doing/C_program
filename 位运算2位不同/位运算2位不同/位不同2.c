#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//4.���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
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
		printf("������������(num1 num2)��");
		scanf("%d %d",&num1,&num2);
		if (num1<0||num2<0) {
			printf("�����������������룡\n");
		}
		to_different_bit(num1,num2);
		break;
	}
	system("pause");
}