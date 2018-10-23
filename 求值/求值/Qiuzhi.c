//¼ÆËã1/1-1/2+1/3-1/4+1/5 ¡­¡­ + 1/99 - 1/100 µÄÖµ¡£
#include<stdio.h>
#include<stdlib.h>
void main() {
	float i = 1;
	int k = 1;
	float  j=0;
	while (i <= 100) {
		
		j = j + k*1 / i;
		
		i++;
		k = 0 - k;
	}
	printf("%f",j);
	system("pause");
}