#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//malloc
//calloc
//realloc
//free
void use_malloc() {
	// void* malloc(size_t size)
	//malloc ��������һ�������Ŀռ�

	printf("malloc��Ӧ�ã�\n");
	printf("������һ���������飬����������Ҫ�����鳤��(num>0)��");
	int num = 0;
	scanf("%d",&num);
	int* arr=NULL;
	arr = (int*)malloc(num * sizeof(int));
	for (int temp = 0; temp < num; ++temp) {
		arr[temp] = temp+1;
		printf("%d ", arr[temp]);

	}

	free(arr);//����ʹ�á��ͷ�������Ŀռ�
	//free(void* ptr)
}
void use_calloc() {
	printf("calloc��Ӧ�ã�\n");
	//void* calloc(size_t num , size_t size)
	//calloc �����Ǹ�num����Сλsize��Ԫ�ؿ���һ��ռ䡣����ʼ��Ϊ0
	int* ptr = NULL;
	printf("������һ���������飬����������Ҫ���������鳤�Ⱥ�Ԫ�ش�С(num>0�� size==4)��");
	int num = 0;
	int size = 0;
	scanf("%d", &num);
	ptr = (int*)calloc(num,sizeof(int));
	for (int temp = 0; temp < num;++temp) {
		printf("%d ",ptr[temp]);
	}
	free(ptr);
}
void use_realloc() {
	//void* realloc(void* ptr,size_t size)
	//Ϊ����������������ڴ�
	//������һ���ڴ�ռ�ʱ�� realloc()��ͼֱ�ӴӶ����ִ�����ݺ����
	//��Щ�ֽ��л�ø��ӵ��ֽ����ԭ�ȵ��ڴ��С����û���㹻�Ŀ��пռ�
	//�������䣬��ô�Ӷ���������һ��newsize��С���ڴ档
	printf("realloc��Ӧ�ã�\n");
	char *p;
	p = (char *)malloc(100);

		printf("��ַ��: %p\n", p);

	char *new = (char *)realloc(p, 256);
	if (new)
		printf("�µ�ַ: %p\n", new);
	else
		printf("δ������!/n");
	free(new);

}
void main() {
	//use_malloc();
     //use_calloc();
	use_realloc();
	system("pause");
}