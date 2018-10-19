#include<stdio.h>
#include<stdlib.h>
void main() {
	printf("请输入2个数：\n");
	int a, b;
	scanf_s("%d %d",&a,&b);
	if (a <= b) {
		int i;
		for (i = a; i > 0; i--) {
		if(	(a%i) == 0&&(b%i) == 0)
			break;
		}
		printf("最大的公约数：%d\n",i);
	}
	else
	{
		int i;
        for ( i=b; i > 0; i--) {
			if ((a%i) ==0&&(b%i) == 0)
				break;
		}
		printf("最大的公约数：%d\n",i);
	}
	
	system("pause");
}