#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
int recursive(int shu) {
	if (shu==1) {
		return shu;
	}
	else {
		return shu * recursive(shu-1);
	}
}
int not_recursive(int zi) {
	int temp = 1;
	int exam = 1;
	for (temp = 1; temp <=zi;temp++) {
		exam *=temp;
	}
	return exam;
}
void main() {
	int num = 0;
	printf("������һ����������");
	scanf("%d",&num);
	printf("%d�ĵݹ�׳���%d\n",num,recursive(num));
	printf("%d�ķǵݹ�׳���%d\n",num,not_recursive(num));

	system("pause");
}