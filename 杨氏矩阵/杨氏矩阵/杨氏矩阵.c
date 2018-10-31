#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//杨氏矩阵
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
////数组：
//1 2 3     //1 3 4    //1 2 3
//2 3 4     //2 4 5    //4 5 6
//3 4 5     //4 5 6    //7 8 9


//思路：
//因为是一行和一列都是递增的，所以可以从最后一个数进行比较
//然后从最后一个数到第一个数进行遍历的比较
void to_find(int arr[3][3],int num,int row,int col) {//二位数组的行和列
	if (num > arr[2][2]) {
		printf("这个数太大了！没找到！\n");
	}
	else if (num < arr[0][0]) {
		printf("这个数太小了！没找到！\n");
	}
	else 
		while ((row>=0)&&(col>=0)) {//直到找到或者遍历完没找到退出循环
		
		if (num==arr[row][col]) {
			printf("找到了！第一次出现在第%d行，第%d列\n",row,col);
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
		printf("请输入一个整数：");
		scanf("%d",&num);
		to_find(arr,num,2,2);

	system("pause");
}