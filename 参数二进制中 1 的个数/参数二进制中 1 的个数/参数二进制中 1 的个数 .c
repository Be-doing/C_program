#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//дһ���������ز����������� 1 �ĸ���
//���磺 15 0000 1111 4 �� 1
//����ԭ�ͣ�
//int count_one_bits(unsigned int value)
//{
//	// ���� 1��λ��
//}
int count_one_bits(int parameter) {//parameter  ������

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
	printf("������һ���Ǹ�����");
	scanf("%d",&num);
	if (num<0) {
		printf("���벻�淶�����������룡\n");
		continue;
	}
	else {
		printf("%d\n", count_one_bits(num));
		break;
	}
	}
	
	system("pause");
}