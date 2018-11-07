#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//实现memmov
void* my_memmov(void* copy,void* from,size_t num) {
	void* ret = copy;
	if (copy <= from || ((char*)from + num)) {
		while (num--) {
			*(char*)copy = *(char*)from;
			copy = (char*)copy + 1;
			from = (char*)from + 1;
		}
	}
	else {//区间重合
		copy = (char*)copy + num - 1;
		from = (char*)from + num - 1;

		while (num--) {
			*(char*)copy = *(char*)from;
			copy = (char*)copy - 1;
			from = (char*)from - 1;

		}
	}
	
	return ret;
}
void main() {
	int arr[5] = { 1,2,3,4,5 };
	int arr2[3] = { 0 };
	my_memmov(arr2,arr,16);
	int i = 0;
	while (i<4) {
		printf("%d\t",arr2[i]);
		++i;
	}
	printf("\n");
	system("pause");
}