#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int recursive(char* str) {
	if (*str == '\0') {
		return 0;
	}
	else {
		return 1 + recursive(str+1);
	}
}
int not_recursive(char* str) {
	char* p=str;
	int num = 0;
	while (*p!='\0') {
		++num;
		*p++;
	}
	return num;
}
void main() {
	char test[] = "20160606";
	int test1 = recursive(test);
	int test2 = not_recursive(test);
	printf("递归方法实现长度：%d\n",test1);
	printf("非递归方法实现长度：%d\n", test2);
	system("pause");
}