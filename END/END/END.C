#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
void END() {
	char end[]="到这儿C 语言的初级学习已经到了尾声。江湖路，还在继续！";
	char* p = end;
	int col = 0;
	while (*p!='\0') 
	{
		Sleep(300);
		printf("%c",*p);
		++p;
		++col;
		if ((col%10)==0) 
		{
			printf("\n");
		}
	}
	printf("\n");
}
void main() 
{
	END();
	system("pause");
}