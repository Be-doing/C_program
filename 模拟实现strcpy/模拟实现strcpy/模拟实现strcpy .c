
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//模拟实现strcpy

//strcpy的格式是
//strcpy(str,str2)
//将str整个复制到str2
void strcpy1(const char* str,char* str2) {
	char* start = str;
	char* start2 = str2;
	int leng = strlen(str);
	while (start!=(str+leng+1)) {
		*start2 = *start;
		++start;
		++start2;
	}
	printf("复制后的字符串为：%s\n",str2);
}
void main() {
	char str[] = "0";
	char str2[] ="0";
	printf("请输入一串字符串:");
	gets(str);
	
	strcpy1(str,str2);
	system("pause");
}