
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//ģ��ʵ��strcpy

//strcpy�ĸ�ʽ��
//strcpy(str,str2)
//��str�������Ƶ�str2
void strcpy1(const char* str,char* str2) {
	char* start = str;
	char* start2 = str2;
	int leng = strlen(str);
	while (start!=(str+leng+1)) {
		*start2 = *start;
		++start;
		++start2;
	}
	printf("���ƺ���ַ���Ϊ��%s\n",str2);
}
void main() {
	char str[] = "0";
	char str2[] ="0";
	printf("������һ���ַ���:");
	gets(str);
	
	strcpy1(str,str2);
	system("pause");
}