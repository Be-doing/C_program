#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//����һֱ���ռ����ַ���
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������
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
	printf("�������ַ�����");
	char str[] = { 0 };
	scanf("%s",str);
	cover(str);
	system("pause");
	return 0;
}