#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1������s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC

int judge_rotating(char* str1, char* str2) {
	int i = 0;
	int j = 0;
	int lenght = strlen(str1);
	
		while (lenght) {
			char j = str1[0];//�洢��һ��Ԫ��
			char* start = str1;

			for (int temp = 0; temp < lenght - 1; ++temp) {

				*start = *(start + 1);
				++start;
			}
			*start = j;
			--lenght;
		
		if (0 == strcmp(str1, str2))
		{
			return 1;
		}
	}
	return 0;
}


void main() {
	char s1[] = "CABED";
	char s2[] = "ABEDC";
	printf("%d\n",judge_rotating(s1,s2));//�ж���ת
	system("pause");
}