//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，例如：2 + 22 + 222 + 2222 + 22222
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*void main() {
	int num;
	printf("请输入0~9中的数字：");
	scanf_s("%d",&num);
	int a = 11111 * num;
	int b = 1111 * num;
	int c = 111 * num;
	int d = 11 * num;
	printf("%d+%d+%d+%d+%d=%d\n",a,b,c,d,num,a+b+c+d+num);
	system("pause");
}*/
void main() {
int num=2;
int a=2;
int b = 0;
int c = 0;
int i = 0;
while(i<5){
	b = b + a;
	c= c + b;
	a = a * 10;
	++i;
}
printf("%d",c);
system("pause");
}