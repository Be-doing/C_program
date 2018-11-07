#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int my_strcmp(const char* str1,const char* str2) {
	assert(str1);
	assert(str2);
	char* p1 = str1;
	char* p2 = str2;
	while (*p1==*p2) {
		++p1;
		++p2;
	}
	if (*p1<*p2) {
		return -1;
	}
	else if (*p1==*p2) {
		return 0;
	}
	else {
		return 1;
	}
}
void main() {
	char arr[] = "compare";
	char arr1[] = "computer";
	int num=my_strcmp(arr,arr1);
	printf("%d",num);
	system("pause");
}