#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void find(int num) {
	int s1;
	int s2;
	for (s1 = 1; s1 < sqrt(num);s1++) {
		for (s2 = s1; s2 < sqrt(num); s2++) {
			if (s1*s1+s2*s2==num) {
				printf("%d^2+%d^2=%d\n",s1,s2,num);
			}
		}
	}
}
void main() {
	int numX;
	printf("请输入一个数字：");
	scanf_s("%d",&numX);
	find(numX);
	system("pause");
}