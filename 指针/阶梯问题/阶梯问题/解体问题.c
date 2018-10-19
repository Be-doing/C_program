#include<stdio.h>
#include<stdlib.h>
#include <limits.h>//检测整型数据数据类型的表达值范围
/*著名的爱因斯坦阶梯问题是这样的：有一条长长长的阶梯，
如果你每步跨2阶，那么最后剩1阶；如果你每步跨3阶，那么
最后剩2阶；如果你每步跨5阶，那么最后剩4阶；如果你每步
跨6阶，那么最后剩5阶；最有当你每步跨7阶时，最后正好走完，
一阶也不剩。请问这条阶梯最少有多少阶。*/
void main() {
	int i = 1;
	int ladder = 7;
	for (i = 1; i < INT_MAX;i++) {
		if ((ladder%2==1)&&(ladder%3==2)&&(ladder%5==4)&&(ladder%6==5)) {
			break;
		}
		ladder = 7 * (i+1);
	}
	printf("最低的阶梯数是：%d\n",ladder);
	system("pause");
}