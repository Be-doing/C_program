#include<stdio.h>
#include<stdlib.h>
void main() {
	printf("请输入3个数：\n");
	int a[2], i = 0;
	for (i; i < 3; i++) {
		scanf_s("%d", &a[i]);
	}
	for ( i = 0; i <2; i++)                                           //6，4，3 初始
	{                                                                 //4，3，6 第一趟
		for (int j = 0; j <2 - i; j++) {                             //3，4，6
			if (a[j] > a[j+1]){
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
    
	}
     for ( i = 0; i < 3; i++)
	 printf("%d\t",a[i]);
	system("pause");
}
