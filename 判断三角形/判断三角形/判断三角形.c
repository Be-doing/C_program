#include<stdio.h>
#include<stdlib.h>
void judge(int x,int y,int z) {
	if ((x+y)<z||(x-y)>z ) {
		printf("��������ȷ���������������ݣ�");
	}
	else {
		if ((x==y)&&(x!=z) ){
			printf("���ǵ���������\n");
		}
		if (x == y == z) {
			printf("���ǵȱ�������\n");
		}
		if (x != y != z) {
			printf("������ͨ������������\n");
		}
	}
	
}
void main() {
	printf("���С�������������ε����ߣ�");
	int x;
	int y;
	int z;
	scanf_s("%d %d %d",&x,&y,&z);
	judge(x,y,z);
	system("pause");
}