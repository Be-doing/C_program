#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
//���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�

//���A�٣���A�����֡�B��Dì��
//���B�٣�����C���֣�C��Dì��
//���C�٣�����
//���D�٣���B��Cì��

int find_x(char man[]) {
	
	for (int temp = 0; temp < sizeof(man) / sizeof(man[0]);temp++) {
		if (((man[temp]!='A')+(man[temp]=='C')+(man[temp]=='D')+(man[temp]!='D'))==3) {
			printf("������%c\n",man[temp]);
		}
	}
	return 0;
}
void main() {
	char xiongshou[4] = {'A','B','C','D'};
	find_x(xiongshou);
	system("pause");
}