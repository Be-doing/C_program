#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void ahead_oaa(int arr[], int length) {
	int temp = 0;
	int num = 0;
	int len = length - 1;
	while (temp != len) {
		if (arr[temp] % 2 == 0) {
			num = arr[len];
			arr[len] = arr[temp];
			arr[temp] = num;
			--len;
		}
		else {
			++temp;
			continue;
		}
	}
}
void main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,3 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int show = 0;
	ahead_oaa(arr, len);
	while (show<len) {
		printf("%d ",arr[show]);
		++show;
	}
	system("pause");
}