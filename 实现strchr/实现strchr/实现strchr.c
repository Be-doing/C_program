#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int my_strchr(const char* str,const char ch) {
	char* p = str;//ָ���׸�Ԫ��char* pch = ch;
	int adress = 0;//λ�ñ��
	while (*p!=ch) {
		++p;
		++adress;
		if (*p=='\0') {
			return 0;
		}
	}
	return adress+1;
}
void main() {
	char str[] = "abcdef";
	char ch = 'c';
	int num=my_strchr(str,ch);
	printf("%d",num);
	system("pause");
}