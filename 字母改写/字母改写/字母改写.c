#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//可以一直接收键盘字符，
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。
void cover(char str[]) {
	char*p = str;
	while (*p != '\0')
	{
		if ('a' <= *p &&*p < 'z')
		{
			*p -= 32;
		}
		else if ('A' <= *p &&*p < 'Z')
		{
			*p += 32;
		}
		else if (48 <= *p&&*p <= 57) {
			*p = ' ';
		}
		p++;
	}
	printf("%s\n", str);
}
int main(){
	printf("请输入字符串：");
	char str[] = { 0 };
	scanf("%s",str);
	cover(str);
	system("pause");
	return 0;
}