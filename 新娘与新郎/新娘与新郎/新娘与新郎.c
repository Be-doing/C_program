#include<stdio.h>
#include<stdlib.h>
/*3�����²μӻ���,3�����ɷֱ�ΪA,B,C, 3������ֱ�ΪX,Y,Z,
 ������֪������˭��˭���,���Ǿ��������е���λ,�õ�����
���:A˵������X���;X˵����δ�����C;C˵������Z���.��
���º�֪�������ڿ���Ц,˵��ȫ�Ǽٵ�. ��ô,����˭��˭�����! */
void married(int i,int j,int k,char wife[]) {
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			for (k = 0; k < 3; k++) {
				if (i!=k&&k!=j&&j!=i) {
					if (wife[i]!='X'&&wife[k]!='X'&&wife[k]!='Z') {
						printf("��Է�ʽΪ��\n");
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