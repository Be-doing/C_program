#include<stdio.h>
#include<stdlib.h>
void factor(int num) {
	int i = 1;
	int fac=1;
	while(i<=num) {
		fac*= i;
		i++;
	}
	printf("%d�Ľ׳��ǣ�%d\n",num,fac);
}
void main() {
	int number;
	printf("������һ������");
	scanf_s("%d",&number);
	factor(number);
	system("pause");
}