#include<stdio.h>
#include<stdlib.h>
//��ȫ������ֵ������������֮�͡�
//��forѭ�������������֮�ͣ�if�ж���ȫ����
void main() {
	int x = 1;//����ȡ0��0�����κ�������0��
	for (x = 1; x <=1000;x++) {//��1000���ڵ���ȫ��
		int sum = 0;
		for (int i = 1; i < x; i++) {
			
			if (x%i==0) {
				sum += i;
			}
		}
		if (sum==x) {
			printf("%d  ",x);
		}
	}
	system("pause");
}