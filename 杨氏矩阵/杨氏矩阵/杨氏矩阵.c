#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//���Ͼ���
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
////���飺
//1 2 3     //1 3 4    //1 2 3
//2 3 4     //2 4 5    //4 5 6
//3 4 5     //4 5 6    //7 8 9


//˼·��
//��Ϊ��һ�к�һ�ж��ǵ����ģ����Կ��Դ����һ�������бȽ�
//Ȼ������һ��������һ�������б����ıȽ�
void to_find(int arr[3][3],int num,int row,int col) {//��λ������к���
	if (num > arr[2][2]) {
		printf("�����̫���ˣ�û�ҵ���\n");
	}
	else if (num < arr[0][0]) {
		printf("�����̫С�ˣ�û�ҵ���\n");
	}
	else 
		while ((row>=0)&&(col>=0)) {//ֱ���ҵ����߱�����û�ҵ��˳�ѭ��
		
		if (num==arr[row][col]) {
			printf("�ҵ��ˣ���һ�γ����ڵ�%d�У���%d��\n",row,col);
			break;
		}
		else if (num<arr[row][col]) {
			    --col;
		}
		else if (col == 0) {
			--row;
			col += 2;
		}

	}

}
void main() {
	int arr[3][3] = { {1,2,3},{2,3,4}, {3,4,5} };
	int num;
		printf("������һ��������");
		scanf("%d",&num);
		to_find(arr,num,2,2);

	system("pause");
}