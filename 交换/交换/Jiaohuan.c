#include<stdio.h>
#include<stdlib.h>
void main() {//将数组A中的内容和数组B中的内容进行交换。（数组一样大） 
	int arr1[10],arr2[10],temp[10];
	printf("请输入10个数A10（空格隔开）：");
	for (int i = 0; i < 10;i++) {
          scanf_s("%d",&arr1[i]);
	}
    printf("请再输入10个数B10（空格隔开）：");
	for (int j = 0; j < 10;j++) {
          scanf_s("%d",&arr2[j]);
     }
	for (int k = 0; k < 10;k++) {
		temp[k] = arr1[k];
		arr1[k] = arr2[k];
		arr2[k] = temp[k];
	}
	printf("NOW\nA10:");
	for (int i = 0; i < 10;i++) {
	  printf("%d",arr1[i]);
	}
	printf("\nNOW\nB10:");
	for (int i = 0; i < 10;i++) {
	  printf("%d",arr2[i]);
	}
	printf("\n:");
	system("pause");
}