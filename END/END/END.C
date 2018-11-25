#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
void END() {
	char end[]="到这儿C 语言的初级学习已经到了尾声。写个程序作为结尾吧。虽然有点敷衍，但是形式所逼。";
	char* p = end;
	int col = 0;
	while (*p!='\0') {
		Sleep(300);
		printf("%c",*p);
		++p;
		++col;
		if ((col%10)==0) {
			printf("\n");
		}
	}
	printf("\n");
}
void main() {
	END();
	system("pause");
}