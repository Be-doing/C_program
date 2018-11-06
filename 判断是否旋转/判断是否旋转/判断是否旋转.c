#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1，给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC

int judge_rotating(char* str1, char* str2) {
	int i = 0;
	int j = 0;
	int lenght = strlen(str1);
	
		while (lenght) {
			char j = str1[0];//存储第一个元素
			char* start = str1;

			for (int temp = 0; temp < lenght - 1; ++temp) {

				*start = *(start + 1);
				++start;
			}
			*start = j;
			--lenght;
		
		if (0 == strcmp(str1, str2))
		{
			return 1;
		}
	}
	return 0;
}


void main() {
	char s1[] = "CABED";
	char s2[] = "ABEDC";
	printf("%d\n",judge_rotating(s1,s2));//判断旋转
	system("pause");
}