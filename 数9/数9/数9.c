//��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9��
#include<stdio.h>
#include<stdlib.h>
void main() {
	int k = 0;
	for (int i = 1; i <= 100; i++) {
		if ((i+1)%10==0) {
			k++;
		}
        
	}
         printf("���ŵ�������%d��\n",k);
	system("pause");
}