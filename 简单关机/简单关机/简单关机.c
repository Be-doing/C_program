#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#include<stdlib.h>

#include<string.h>


void main()

{
	char input[20] = { 0 };

	system("shutdown -s -t 60");

again:

	printf("你的电脑将在一分钟内关机，如果输入：我是猪，则取消关机\n");

	scanf("%s", input);

	if (strcmp(input, "我是猪") == 0)
	{
		printf("你是猪！略略略");
		
		system("shutdown -a");
		system("pause");
	}
	else
	{
		goto again;
	}

	system("pause");

}