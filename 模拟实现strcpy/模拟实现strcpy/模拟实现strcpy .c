
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
//ģ��ʵ��strcpy

//strcpy�ĸ�ʽ��
//strcpy(str,str2)
//��str�������Ƶ�str2
char* strcpy1(char* str2, const char* str) {
	assert(str);
	assert(str2);
	char* start = str;
	char* start2 = str2;
	int leng = strlen(str);
	while (start!=(str+leng+1)) {
		*start2 = *start;
		++start;
		++start2;
	}
	return str;
}
void main() {
	char str[] = "0";
	char str2[] ="0";
	printf("������һ���ַ���:");
	gets(str);
	
	printf("���ƺ�%s\n",strcpy1(str2,str));
	system("pause");
}