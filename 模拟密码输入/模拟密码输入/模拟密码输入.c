#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//模拟三次密码输入的场景。
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。


void main() {
	int num = 0;
	char password_i[20];
	char password[] = "618524";
	printf("请输入六位密码：");
		while (num<3) {
			scanf("%s",password_i);
			//gets(password_i);
			if(strlen(password_i)!=6){
				printf("你输入的密码无效！");
				break;
			}
			if (strcmp(password_i,password) == 0) {
				printf("登陆成功\n");
				break;
			}
			else {
				if (num == 2) {
				printf("此卡已锁！\n");
				}
				else {
                 printf("请重新输入:");
				}
			}
			num++;
			
		}	
	system("pause");
}
