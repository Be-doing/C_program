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
		while (num<3) {
			scanf("%s",password_i);
			//gets(password_i);
			if(strlen(password_i)!=6){
				printf("�������������Ч��");
				break;
			}
			if (strcmp(password_i,password) == 0) {
				printf("��½�ɹ�\n");
				break;
			}
			else {
				if (num == 2) {
				printf("�˿�������\n");
				}
				else {
                 printf("����������:");
				}
			}
			num++;
			
		}	
	system("pause");
}
