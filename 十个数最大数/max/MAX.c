#include<stdio.h>
#include<stdlib.h>
void main(){
	printf("请输入10个数：\n");
	int a[9],i= 0,max=a[0];
	for (i ; i < 10; i++){
	scanf_s("%d",&a[i]);
	}
	for (i = 1; i < 10; i++)
	{
		if (max < a[i])
			max = a[i]; 
	}
	printf("最大的数数：%d\n",max);
	system("pause");
}
