#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
//1. ��ת������Reverse Integer
//
//Example1 : x = 123, return 321
//	Example2 : x = -123, return -321
//	���������  �����������ֵ2147483647��ת֮�������ֵ������
//	Ҫ������ֵ��ת֮�����ж��Ƿ����
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



	//2. �ж�һ���ַ����Ƿ�Ϊ�����ַ�����abcdcba
	//Ҫ�󣺲���ʹ�ö������飬�����ַ���

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
	//3. �ж�һ�������Ƿ�Ϊ���������������ǻ�������
	//Ҫ�󣺲���ʹ�ö������飬����������г������
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
	//4. ��0��n֮��ȡ��n�������ҳ�©�����Ǹ�������n��������
	//Ҫ�󣺲�ʹ�ö�������
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

	//5. ����һ���������ж����Ƿ���2����
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