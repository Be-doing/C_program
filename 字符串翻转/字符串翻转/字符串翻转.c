#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//��һ���ַ����������Ϊ:"student a am i",
//	���㽫��������ݸ�Ϊ"i am a student".
//	Ҫ��
//	����ʹ�ÿ⺯����
//	ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
//
//	student a am i
//	i ma a tneduts
//	i am a student
int leng(char* str) {
	int len=0;
	while(str[len]!='\0'){
		++len;
    }
	return len;
}
void swap_one(char* str, int star, int end) {

	while (star <= end) {
		char temp = str[star];
		str[star] = str[end];
		str[end] = temp;
		++star;
		--end;
	}
}

void swap_two(char* str) {
	int temp = 0; 
	int start = 0; 
	int end = leng(str) - 1;
	swap_one(str,start,end);
	printf("��һ�η�ת����ַ�����%s\n",str);
	while(str[temp]!='\0') {
		start = temp;
		while((str[temp]!='\0')&&(str[temp]!=' ')) {
			temp++;
		} 
		end = temp - 1;
		swap_one(str,start,end);
		if (str[temp] != '\0') {
			temp++;
		}
	} 
	printf("���һ�η�ת����ַ���Ϊ��%s\n",str);
}
	


void main() {
	char orig[] = "student a am i";
	printf("ԭ�ַ���Ϊ��%s\n",orig);
	int end = leng(orig)-1;
	int star = 0;
	swap_two(orig);
	system("pause");
}
