
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

//˼·//
//����k��
//��һ��ѭ���ĵ�һ��ѭ��ʱ�򣬵�һ���ַ��洢������Ȼ���һ���ַ���λ�ô�ڶ����ַ���һ�����ƣ����һ��λ�û�ճ���
//
//Ȼ��ɵ�һ���ַ����Ƶ����һ��λ����
//Ȼ��ѭ��K��
void to_reversek(char* arr, int length, int k) {
	while (k) {
		char* j = arr;//�洢��һ��Ԫ��
		char* start = arr;

		for (int temp = 0; temp < length-1; ++temp) {

			*start = *(start + 1);
			++start;
		}
		*start = *j;
		--k;
	}
	printf("%s", arr);
}
void main() {
	char arr[] = "COMPUTER!";
	int k = 0;
	int length = strlen(arr);
	printf("ԭ�ַ���Ϊ%s������Ϊ%d\n", arr, length);
	while (1) {
		printf("������Ҫ��ת�ַ��ĸ�����");
		scanf("%d", &k);
		if (k < 0 || k>9) {
			printf("�������������������룡");
			continue;
		}
		else {
			to_reversek(arr, length, k);
			break;
		}
	}
	system("pause");
}