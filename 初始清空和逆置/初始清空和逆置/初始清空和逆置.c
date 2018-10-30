#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。

//先逆置，再初始化，再清空。节约时间，不用再定义数组或者初始化数组。
void reverse(int arr[],int len) {
	int right = len-1;
	int left = 0;
	printf("逆置后的数组为");
	while (left<=right) {
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		--right;
		++left;
	}
	int num = 0;
	while (num<10) {
	printf("%d ",arr[num]);
	++num;
	}
	
}
void init(int arr[],int len) {
	int num = 0;
	printf("\n");
	printf("初始化的数组为：");
	while (num<len) {
		arr[num] = 1;
		printf("%d ",arr[num]);
		++num;
	}
}
void empty(int arr[],int len) {

	int num = 0;
	printf("\n");
	printf("清空后的数组是：");
	while (num<len) {
		arr[num] = '\0';//清空就是为空值
		printf("%d ",arr[num]);
		++num;
	}
	printf("\n");
}
void main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int len=sizeof(arr) / sizeof(arr[0]);//求数组长度,这里我直接使用
	int temp = 0;
	printf("原数组为：");
	while (temp<len) {
		printf("%d ",arr[temp]);
		++temp;
	}
	printf("\n");
	reverse(arr,len);
	init(arr,len);
	empty(arr,len);
	system("pause");
}