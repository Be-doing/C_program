#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
char* my_memcpy(void* str2,void* str1,int num) {
	char* start = str1;
	char* start2 = str2;
	while (num--){
		*start2 = *start;
		++start;
		++start2;
	}
	return str2;
}
void main() {
	char arr[] = "abcdef";
	char arr2[10] = "0";
	int num = 3;
	printf("%s\n",my_memcpy(arr2,arr,num));
	system("pause");
}