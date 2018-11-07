#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//模拟实现strcat
void my_strcat(const char* str,const char* str2,int leng) {
	char str3[20] = "0";
	//char* num = str3;
	char* p1 = str;
	char* p2 = str2;
	char* p3 = str3;
	while (p3!=(str3+leng+1)) {
		while (*p1 != '\0') {
		*p3 = *p1;
		++p1;
		++p3;
		}

			*p3 = *p2;
			++p2;
			++p3;
		
	}
	printf("%s\n",str3);
}
void main() {
	char str1[10] = "0";
	char str2[10] = "0";
	printf("请输入两个个字符串：");
	gets_s(str1,9);
	gets_s(str2,9);
	int leng = strlen(str1) + strlen(str2);
	my_strcat(str1,str2,leng);
	system("pause");
}