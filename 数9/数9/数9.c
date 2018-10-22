//编写程序数一下 1到 100 的所有整数中出现多少次数字9。
#include<stdio.h>
#include<stdlib.h>
void main() {
	int k = 0;
	for (int i = 1; i <= 100; i++) {
		if ((i+1)%10==0) {
			k++;
		}
        
	}
         printf("带九的数字有%d个\n",k);
	system("pause");
}