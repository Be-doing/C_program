#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��

//�����ã��ٳ�ʼ��������ա���Լʱ�䣬�����ٶ���������߳�ʼ�����顣
void reverse(int arr[],int len) {
	int right = len-1;
	int left = 0;
	printf("���ú������Ϊ");
	while (left<=right) {
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		--right;
		++left;
	}
	int num = 0;
	while (num<10) {
	printf("%d ",arr[num]);
	++num;
	}
	
}
void init(int arr[],int len) {
	int num = 0;
	printf("\n");
	printf("��ʼ��������Ϊ��");
	while (num<len) {
		arr[num] = 1;
		printf("%d ",arr[num]);
		++num;
	}
}
void empty(int arr[],int len) {

	int num = 0;
	printf("\n");
	printf("��պ�������ǣ�");
	while (num<len) {
		arr[num] = '\0';//��վ���Ϊ��ֵ
		printf("%d ",arr[num]);
		++num;
	}
	printf("\n");
}
void main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int len=sizeof(arr) / sizeof(arr[0]);//�����鳤��,������ֱ��ʹ��
	int temp = 0;
	printf("ԭ����Ϊ��");
	while (temp<len) {
		printf("%d ",arr[temp]);
		++temp;
	}
	printf("\n");
	reverse(arr,len);
	init(arr,len);
	empty(arr,len);
	system("pause");
}