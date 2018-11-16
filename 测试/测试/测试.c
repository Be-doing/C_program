#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
//1. 逆转整数：Reverse Integer
//
//Example1 : x = 123, return 321
//	Example2 : x = -123, return -321
//	处理溢出：  比如整数最大值2147483647逆转之后的整数值不存在
//	要求所有值逆转之后再判断是否溢出
int Reverse_Integer(int num) {
	long long sum = 0;
	while (num!=0){
		sum = sum * 10 + num % 10;
		num /= 10;
	}
	if (sum>INT_MAX) {
		return 0;
	}
	else if (sum<INT_MAX+1) {
		return 0;
	}
	else {
		return sum;
	}
	
}



	//2. 判断一个字符串是否为回文字符串：abcdcba
	//要求：不能使用额外数组，额外字符串

int judge_rev(char* str) {
	int len = strlen(str);
	char* start = str;
	char* end = str + len-1;
	while (start<end)
	{
		if (*start!=*end) {
			return 0;
		}
		++start;
		--end;
	}
	return 1;
}
	//3. 判断一个数字是否为回文数（负数不是回文数）
	//要求：不能使用额外数组，不允许计算中出现溢出
int judge_num(int num) {//323
	int div = 1;
	while (num / div >= 10){
		div *= 10;
	}
	while (num>0) {
		if (num/div!=num%10) {
			return 0;
		}
		num %= div;
		num /= 10;
		div /= 100;
	}
	return 1;
}
	//4. 从0到n之间取出n个数，找出漏掉的那个数，这n个数乱序
	//要求：不使用额外数组
int find_num(int arr[],int n) {
	int i = 0;
	int res = 0;
	for (i = 0; i < n;++i) {
		res^i;
	}
	for (i = 0; i < n; ++i) {
		res^arr[i];
	}
	return res;
}

	//5. 给出一个整数，判断它是否是2的幂
int judge_tow(int num) {
//16 1 0000
	int temp = 0;
	int count = 0;

	while (temp<32){
		if (((num >> temp) & 1) == 1) {
			++count;
		}
		++temp;
	}
	if (count==1) {
		return 1;
	}
	else {
		return 0;
	}
}