#include<stdio.h>
#include<stdlib.h>

//num�Ľ׳�֮�ͼ��㣻
//��Ҫ����С��num�����Ľ׳ˣ�
//Ȼ�����
void sum(int num) {
	int sum = 0;
	int i = 1;
	while (i <= num) {
		int j=1;
		int fac = 1;
		while(j<=i){
			fac *= j;
			j++;
	}
		sum += fac;
		i++;
	}
	printf("%d�Ľ׳�֮���ǣ�%d\n",num,sum);
}
void main() {
	int number = 0;
	printf("������һ������");
	scanf_s("%d",&number);
	sum(number);
	system("pause");
}