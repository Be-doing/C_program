#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
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
