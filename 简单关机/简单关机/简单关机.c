#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#include<stdlib.h>

#include<string.h>


void main()

{
	char input[20] = { 0 };

	system("shutdown -s -t 60");

again:

	printf("��ĵ��Խ���һ�����ڹػ���������룺��������ȡ���ػ�\n");

	scanf("%s", input);

	if (strcmp(input, "������") == 0)
	{
		printf("������������");
		
		system("shutdown -a");
		system("pause");
	}
	else
	{
		goto again;
	}

	system("pause");

}