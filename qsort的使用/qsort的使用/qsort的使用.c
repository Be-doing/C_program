#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int compare(const void* min,const void* max) {
	return (*(int*)max > *(int*)min);
}
int compare_ch(const void* min,const void* max) {
	return (*(char*)max > *(char*)min);
}
int compare_str(const void* min,const void* max) {
	return (*(char**)max > *(char**)min);
}
void main() {
	//int arr[] = { 10,30,40,90,80,45,75,97,122,84 };
	int sor = 0;
	//qsort(arr,10,4,compare);
	//while (sor<10)
	//{
	//	printf("%d\t",arr[sor]);
	//	++sor;
	//}
	//char arr[] = { 'a','k','r','e','g','l' };
	//qsort(arr,sizeof(arr),1,compare_ch);
	//while (sor<6)
	//{
	//	printf("%c\t",arr[sor]);
	//	++sor;
	//}
	char* str[] = { "i","am","a","student" };
	qsort(str,4,4,compare_str);
	while (sor<4) {
		printf("%s ",str[sor]);
		++sor;
	}
	printf("\n");
	system("pause");
}