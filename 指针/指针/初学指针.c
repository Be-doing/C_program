#include<stdio.h>
#include<stdlib.h>
void main() {
	int a, b;
	int* pointer1;//����ָ��
	int* pointer2;
	printf("����������������");
	scanf_s("%d %d",&a,&b);
	pointer1 = &a;
	pointer2 = &b;
	printf("pointer1:%d,pointer2:%d\n", *pointer1, *pointer2);//ָ��ǰ��Ҫ��*
	system("pause");

}