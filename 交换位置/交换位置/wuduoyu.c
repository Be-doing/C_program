#include<stdio.h>
#include<stdlib.h>
void main() {
	printf("������������������");
	int a, b;
	scanf_s("%d %d", &a, &b);
	a = a ^ b;      
	b = b ^ a;       
	a = a ^ b;     

	printf("����%d %d\n", a, b);
	system("pause");
}