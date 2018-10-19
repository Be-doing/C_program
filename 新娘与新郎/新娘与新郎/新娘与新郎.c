#include<stdio.h>
#include<stdlib.h>
/*3对情侣参加婚礼,3个新郎分别为A,B,C, 3个新娘分别为X,Y,Z,
 有人想知道究竟谁与谁结婚,于是就问新人中的三位,得到如下
结果:A说他将和X结婚;X说她的未婚夫是C;C说他将和Z结婚.这
人事后知道他们在开玩笑,说的全是假的. 那么,究竟谁和谁结婚呢! */
void married(int i,int j,int k,char wife[]) {
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			for (k = 0; k < 3; k++) {
				if (i!=k&&k!=j&&j!=i) {
					if (wife[i]!='X'&&wife[k]!='X'&&wife[k]!='Z') {
						printf("配对方式为：\n");
						printf("A-----%c\n",wife[i]);
						printf("B-----%c\n",wife[j]);
						printf("C-----%c\n",wife[k]);
					}
				}
			}
		}
	}
}
void main() {
	char  wife[3] = {'X','Y','Z'};
	int i = 0;
	int j = 0;
	int k = 0;
	married(i,j,k,wife);
	system("pause");
}