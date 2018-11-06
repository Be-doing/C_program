#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//实现memmov
void* my_memmov(void* copy,void* from,size_t num) {
	char* co = (char*)copy;//需要强转
	char* fr =(char*) from;
	if (((char*)copy+num)>fr) {//最后一个元素大于要复制的第一个元素，说明重合了。
		while (num--) {
			*(co + num) = *(fr + num);
		}
	}
	else {
		while (num--) {
			*co = *fr;
		++co;
		++fr;
		}
	}
	return copy;
}
void main() {
	int arr[5] = { 1,2,3,4,5 };
	int arr2[3] = { 0 };
	my_memmov(arr2,arr,3);
	int i = 0;
	while (i<3) {
		printf("%d",arr2[i]);
		++i;
	}
	printf("\n");
	system("pause");
}