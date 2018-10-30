#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//有一个字符数组的内容为:"student a am i",
//	请你将数组的内容改为"i am a student".
//	要求：
//	不能使用库函数。
//	只能开辟有限个空间（空间个数和字符串的长度无关）。
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
	printf("第一次翻转后的字符串：%s\n",str);
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
	printf("最后一次翻转后的字符串为：%s\n",str);
}
	


void main() {
	char orig[] = "student a am i";
	printf("原字符串为：%s\n",orig);
	int end = leng(orig)-1;
	int star = 0;
	swap_two(orig);
	system("pause");
}
