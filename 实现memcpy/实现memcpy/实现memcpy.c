#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char* my_memcpy(void* str2,void* str1,size_t num) {
	assert(str1);
	assert(str2);
	void* ret = str2;
	
	while (num--){
		*(char*)str2 = *(char*)str1;
		++(char*)str2;
		++(char*)str1;
	}
	return ret;
}
void main() {
	int arr[5] = {1,2,3,4,5};
	int arr2[10] = {0};
	int num = 3;
	my_memcpy(arr2, arr, 12);
	while (num--) {
		printf("%d\n", arr2[num]);
	}
	
	system("pause");
}