
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Ժȶ�����ˮ��
//���ʵ�֡�
void main() {
	int drink = 20;//20Ԫ��20ƿ drink e  20  
	int count = 20;//��ʼƿ��20�� 
	//20ƿ���Ի�10ƿ  20+10
	//10ƿ��5ƿ 20+10+5
	//5ƿ��2ƿ��һ����ƿ�� 20+10+5+2
	//3��ƿ
	//������ƿ��һƿ�� 20+10+5+1
	//����ԭ����һ������һƿ 
	//�����Ļ��ͻ�  odd-1ƿ
	//20+10+5++2+1+1==39
	while (1)
	{
		if (drink % 2 != 0)
		{
			count = count + drink - 1;
			break;
		}
		else
		{
			drink = drink / 2;
			count += drink;
		}
	}
	printf("���Ժ�%dƿ��ˮ\n", count);

	system("pause");
}