#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
int reverse_string(char *string)
{
	int len = strlen(string);
	if (len <= 1)	
		return *string;
	else
	{
		char temp = string[0];	
		string[0] = string[len - 1];
		string[len - 1] = '\0';
		reverse_string(string + 1);
		string[len - 1] = temp;	
	}
}

int main()
{
	char ch[] = "1";
	reverse_string(ch);
	printf("%s ", ch);
	printf("\n");
	system("pause");
	return 0;
}
