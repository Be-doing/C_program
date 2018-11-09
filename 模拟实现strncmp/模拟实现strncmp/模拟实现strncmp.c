#include<stdio.h>
#include<stdlib.h>
int my_strncmp(const char* str1,const char* str2,size_t num) {
	while (--num)
	{
		if (*str1==*str2) {
			++str1;
			++str2;
		}
		else{
			break;
		}
	}
	if (*str1>*str2) {
		return -1;
	}
	else if (*str1==*str2) {
		return 0;
	}
	else {
		return 1;
	}
}
void main() {
	char str1[] = "compare";
	char str2[] = "computer";
	printf("%d\n",my_strncmp(str1,str2,4));
	system("pause");
}