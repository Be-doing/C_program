#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//ģ��������������ĳ�����
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����


void main() {
	int num = 0;
	char password_i[20];
	char password[] = "618524";
	printf("��������λ���룺");
		while (num<3) 
		{
			scanf("%s",password_i);
	
			if (strcmp(password_i,password) == 0)
			{
				printf("��½�ɹ�\n");
				break;
			}
			else 
			{
				printf("������������������������:");
				if (num == 2) {
				printf("�˿�������\n");
			}
			num++;
		}	
	system("pause");
}
