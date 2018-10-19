#include<stdio.h>
#include<stdlib.h>
void judge(int x,int y,int z) {
	if ((x+y)<z||(x-y)>z ) {
		printf("请输入正确的三角形三边数据！");
	}
	else {
		if ((x==y)&&(x!=z) ){
			printf("这是等腰三角形\n");
		}
		if (x == y == z) {
			printf("这是等边三角形\n");
		}
		if (x != y != z) {
			printf("这是普通三角形三角形\n");
		}
	}
	
}
void main() {
	printf("请从小到大输入三角形的三边：");
	int x;
	int y;
	int z;
	scanf_s("%d %d %d",&x,&y,&z);
	judge(x,y,z);
	system("pause");
}