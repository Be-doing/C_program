#include<stdio.h>
#include<stdlib.h>
//完全数：数值等于它的因子之和。
//用for循环求出所有因子之和；if判断完全数。
void main() {
	int x = 1;//不能取0，0除以任何数都是0；
	for (x = 1; x <=1000;x++) {//求1000以内的完全数
		int sum = 0;
		for (int i = 1; i < x; i++) {
			
			if (x%i==0) {
				sum += i;
			}
		}
		if (sum==x) {
			printf("%d  ",x);
		}
	}
	system("pause");
}