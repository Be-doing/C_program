#include<stdio.h>
#include<stdlib.h>
//��ɫ�����⣺һ���ڴ��з���12������֪����3���Ǻ�ģ�3���ǻƵģ�
//6�����̵ģ��ִ�����ȡ8�����ʹ��ж����ֿ��ܵ���ɫ���䣿
//������ȡ0/1������ͻ����ܹ���6������������8��
//�������ȡ8-red-green����С��7��
void main()
{
int red = 0;//��������
int yellow = 0;//��������
int number = 1;//�����ԵĴ���
printf("\t����\t����\t����\n");
printf("\n");
for (red= 0; red <= 3; red++)
{
	for (yellow= 0; yellow<= 3; yellow++)
	{
		if (8 - red- yellow <= 6)
		{
			printf("%2d:\t%d\t%d\t%d\n", number, red, yellow, 8 - red - yellow);
			number++;
		}
	}
}
system("pause");

}

