#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。

//如果A假，则A是凶手。B和D矛盾
//如果B假，不是C凶手，C和D矛盾
//如果C假，成立
//如果D假，则B和C矛盾

int find_x(char man[]) {
	
	for (int temp = 0; temp < sizeof(man) / sizeof(man[0]);temp++) {
		if (((man[temp]!='A')+(man[temp]=='C')+(man[temp]=='D')+(man[temp]!='D'))==3) {
			printf("凶手是%c\n",man[temp]);
		}
	}
	return 0;
}
void main() {
	char xiongshou[4] = {'A','B','C','D'};
	find_x(xiongshou);
	system("pause");
}