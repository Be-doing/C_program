#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
//Ä£ÄâÊµÏÖstrcat
char* my_strcat( char* str, char* str2) {
	assert(str);
	assert(str2);
	
	char* p1 = str;
	char* p2 = str2;
	char* p3 = str;
	while (*p1 != '\0') {
		
		++p1;
		
	}
	while (*p2!='\0') {
		

			*p1 = *p2;
			++p2;
			++p1;
		
	}
	p1 = '\0';
	return p3;
}
void main() {
	char str1[] = "abcdefg";
	char str2[] = "hijklmn";
	//int leng = strlen(str1) + strlen(str2);
	
	printf("%s\n", my_strcat(str1, str2));
	system("pause");
}