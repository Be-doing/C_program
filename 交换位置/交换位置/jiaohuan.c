#include<stdio.h>
#include<stdlib.h>
  void main() {
	printf("������������������");
	int a, b, c;
	scanf_s("%d %d", &a, &b);
	c = a;
	a = b;
	b = c;
	printf("����%d %d\n",a,b);
	system("pause");
}
	