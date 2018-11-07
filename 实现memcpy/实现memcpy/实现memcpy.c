#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char* my_memcpy(void* str2,void* str1,size_t num) {
	assert(str1);
	assert(str2);
	int* start = str1;
	int* start2 = str2;
	while (num--){
		*start2 = *start;
		++start;
		++start2;
	}
	return str2;
}
void main() {
	int arr[5] = {1,2,3,4,5};
	int arr2[10] = {0};
	int num = 3;
	printf("%s\n",my_memcpy(arr2,arr,12));
	system("pause");
}