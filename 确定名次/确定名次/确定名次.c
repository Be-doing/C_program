#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次
void player_rank(int p1,int p2,int p3,int p4,int p5) {
	for (p1 = 1; p1 <= 5;p1++) {
		for (p2 = 1; p2 <= 5; p2++) {
			for (p3 = 1; p3 <= 5; p3++) {
				for (p4 = 1; p4 <= 5; p4++) {
					for (p5 = 1; p5 <= 5; p5++) {
						if ((p1!=p2)&&(p1!=p3)&&(p1!=p4)&&(p1!=p5)&&(p2!=p3)&&(p2!=p4)&&(p2!=p5)&&(p3!=p4)&&(p3!=p5)&&(p4!=p5)) {
						//if(p1*p2*p3*p4*p5==120){
						     if (((p2 == 2) + (p1 == 3) == 1) &&
								((p2 == 2) + (p5 == 4) == 1) &&
								((p3 == 1) + (p4 == 2) == 1) &&
								((p3 == 5) + (p4 == 3) == 1) &&
								((p5 == 4) + (p1 == 1) == 1) == 1) {
								printf("A=%d B=%d C=%d D=%d E=%d \n", p1, p2, p3, p4, p5);
							}
						}
					}
				}
			}
		}
	}
}
void main(){
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	player_rank(a,b,c,d,e);
	system("pause");
}