
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char *my_strncpy(char *dest, const char *src, size_t n) {
	assert(dest);
	assert(src);
	char* ret = dest;
	while (n--)
	{
		*dest= *src;
		++dest;
		++src;
	}
	*dest = '\0';
	return ret;
}
void main() {
	char str1[] = "i am a student .";
	char str2[1024] = "0";
	my_strncpy(str2,str1,8);
	printf("%s\n",str2);
	system("pause");
}

