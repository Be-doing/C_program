#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
//Ä£ÄâÊµÏÖstrcat
char* my_strcat( char* str, const char* str2) {
	assert(str);
	assert(str2);
	
	/*char* p1 = str;
	char* p2 = str2;*/
	char* p3 = str;
	while (*str != '\0') {
		
		++str;
		
	}
	while (*str2!='\0') {
		

			*str = *str2;
			++str;
			++str2;
		
	}
	*str = '\0';
	return p3;
}
void main() {
	char str1[] = "abcdefg";
	char str2[] = "hijklmn";
	
	printf("%s\n", my_strcat(str1, str2));
	system("pause");
}