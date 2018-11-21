#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main() {
	FILE* fp;
	fp = fopen("./test.txt","w");
	if (fp==NULL) {
		printf("文件不存在，打开失败！\n");
	}
	else {
		printf("文件已打开！\n");
	}
	int c;
	while ((c=fgetc(stdin))!=EOF){
		fputc(c, stdout);
		fputc(c, fp);
	}


	fclose(fp);
	
	system("pause");
}