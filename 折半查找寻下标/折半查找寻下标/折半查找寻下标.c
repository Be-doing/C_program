//在整型有序数组中查找想要的数字，
//找到了返回下标，找不到返回 - 1.（折半查找
#include<stdio.h>
#include<stdlib.h>
void findx() {
	int x_amount[10] = { 0 };
	int x=0;
	int left = 0;
	int right = 9;
	printf("请由小到大输入十个数，用空格隔开 ：");
	for (int i = 0; i < 10;i++) {
    scanf_s("%d",&x_amount[i]);
	}

	printf("请输入您要找的数字 ：");
	scanf_s("%d",&x);

	while (x_amount[left]<=x_amount[right]) {
		int mid = (left + right + 1) / 2;
		if (x> x_amount[mid]) {
			left = mid+1;
		}
		if(x<x_amount[mid]) {
			right = mid-1;
		}
		if (x == x_amount[mid]) {
			printf("%d\n",mid);
			break;
		}
	}
	if (x_amount[left] > x_amount[right]) {
	printf("没找到！");
     }
}
	
void main() {
	findx();
	system("pause");
}