#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void swap(char* one, char* other, size_t width) {
	size_t temp = 0;
	while (temp < width)
	{
		char some = *one;
		*one = *other;
		*other = some;
		++one;
		++other;
		++temp;
	}
}
int compare(const void* min,const void* max) {
	return *(char*)min > *(char*)max;
}
void bubble_sort(void* any,size_t num,size_t width, int(__cdecl*compare)(const void*, const void*)) {
	size_t row = 0;

	while (row < num)
	{
		size_t col = 0;
		while (col < num - 1 - row)
		{
			if ((compare((char*)any + col * width, (char*)any + (col + 1)*width)) > 0) {
				swap((char*)any + col * width, (char*)any + (col + 1)*width, width);
			}
			++col;
		}
		++row;
	}
}


void main() {
	int arr[] = { 1,2,5,7,8,9 };
	bubble_sort(arr, 6,4, compare);
	int num = 0;
	while (num<6) {
		printf("%d\t",arr[num]);
		++num;
	}
	printf("\n");
	system("pause");
}