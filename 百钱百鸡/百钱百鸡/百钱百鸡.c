#include<stdio.h>
#include<stdlib.h>
void main() {
	printf("�����򼦼ƻ����£�\n");
	int i=0;
	int j=0;
	int k=0;
	int num = 1;
	for (i=0; i<=100;i++) {
		for (j=0; j<=100;j++) {
			for (k=0; k<=100;k++) {
				if (5*i+3*j+k/3==100&&k%3==0&&i+j+k==100) {
					printf("%d��  ����%dֻ   ĸ��%dֻ   С��%dֻ\n",num,i,j,k);
					num++;
				}
			}
		}
	}
	system("pause");
}