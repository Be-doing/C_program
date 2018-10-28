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
char swap_two(char* str) {
	char* star = str;
	char* end = str;
	int lengx = leng(str);
	while (*end!='\0') {
	   while(*end!=' ') {
		++end;
	   }
	   char temp = *star;
	   *star = *end;
	   *end = temp;
	   star = end+2;
	   end++;
	}
	
	printf("%s",str);
}
char swap_one(char* str) {
	char* star = str;
	int lenmax = leng(str);
	char* end = &str[lenmax-1];
	while (star<=end){
		char temp = *star;
		*star = *end;
		*end = temp;
		++star;
		--end;
	}
	printf("%s", str);
	printf("\n");
	swap_two(str);
}

void main() {
	char orig[] = "student a am i";
	swap_one(orig);
	system("pause");
}
