#include<stdio.h>
#include<stdlib.h>
void main(){
	
	for (int num = 0; num < 1000; num++) {
	int a = num / 100;
	int b = num /10 % 10;
	int c = num % 10;
	if (num == a * a*a + b * b*b + c * c*c) {
		printf("%d  ",num);
	}
	}
	system("pause");
}