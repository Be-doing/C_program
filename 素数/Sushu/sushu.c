#include<stdio.h>
#include "stdlib.h"


void main() {
	int i = 2;
	printf("100--200µÄËØÊıÓĞ£º\n");
	int j=100;
	while (j <= 200) {
		for (i = 2; i < j; i++)
		{
			if (j%i == 0)
			{
				break;
			}
		}
		printf("%d\t", j);
		++j;
	}
	system("pause"); 

		

		
}