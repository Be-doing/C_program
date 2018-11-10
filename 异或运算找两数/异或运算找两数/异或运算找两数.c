
#include<stdio.h>
#include<stdlib.h>

void main() {
	int arr[] = { 1,1,2,2,3,3,4,6,7,7 };
	int pos = 0;
	int ret = 0;
	int i = 0;
	int x = 0;
	int y = 0;
	for (i = 0; i < 10;++i) {
		ret ^= arr[i];
	}
	for (i = 0; i < 32;++i) {
		if (((ret>>i)&1)==1) {//4   100    6   110  000  
			pos = i;          //5   101     7  111
		}
	}
	for (i = 0; i < 10;++i) {
		if ((arr[i]>>pos)&1) {
			x ^= arr[i];
		}
		else {
			y ^= arr[i];
		}
	}
	printf("%d %d\n",x,y);
	system("pause");
}