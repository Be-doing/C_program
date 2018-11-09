#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char* my_strncat(char* dest,const char* sor,size_t num) {
	assert(dest);
	assert(sor);
	char* ret = dest;

	while (*dest!='\0')
	{
		++dest;
	}
	while (num--) {
		*dest = *sor;
		++dest;
		++sor;
		if (*sor=='\0')
		{
			break;
		}
	}
	*dest = '\0';
	return ret;
}
void main() {
	char str1[] = "abcdef";
	char str2[] = "ghijk";
	my_strncat(str1,str2,7);
	printf("%s\n",str1);
	system("pause");
}