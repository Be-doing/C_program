
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

//思路//
//输入k次
//第一个循环的第一次循环时候，第一个字符存储起来，然后第一个字符的位置存第二个字符，一次类推，最后一个位置会空出来
//
//然后吧第一个字符复制到最后一个位置上
//然后循环K次
void to_reversek(char* arr, int length, int k) {
	while (k) {
		char* j = arr;//存储第一个元素
		char* start = arr;

		for (int temp = 0; temp < length-1; ++temp) {

			*start = *(start + 1);
			++start;
		}
		*start = *j;
		--k;
	}
	printf("%s", arr);
}
void main() {
	char arr[] = "COMPUTER!";
	int k = 0;
	int length = strlen(arr);
	printf("原字符串为%s，长度为%d\n", arr, length);
	while (1) {
		printf("请输入要翻转字符的个数：");
		scanf("%d", &k);
		if (k < 0 || k>9) {
			printf("您输入有误，请重新输入！");
			continue;
		}
		else {
			to_reversek(arr, length, k);
			break;
		}
	}
	system("pause");
}