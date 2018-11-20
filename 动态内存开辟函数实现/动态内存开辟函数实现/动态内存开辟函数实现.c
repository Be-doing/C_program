#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//malloc
//calloc
//realloc
//free
void use_malloc() {
	// void* malloc(size_t size)
	//malloc 函数申请一段连续的空间

	printf("malloc的应用！\n");
	printf("这里有一个整型数组，请输入你想要的数组长度(num>0)：");
	int num = 0;
	scanf("%d",&num);
	int* arr=NULL;
	arr = (int*)malloc(num * sizeof(int));
	for (int temp = 0; temp < num; ++temp) {
		arr[temp] = temp+1;
		printf("%d ", arr[temp]);

	}

	free(arr);//配套使用。释放所申请的空间
	//free(void* ptr)
}
void use_calloc() {
	printf("calloc的应用！\n");
	//void* calloc(size_t num , size_t size)
	//calloc 函数是给num个大小位size的元素开辟一块空间。并初始化为0
	int* ptr = NULL;
	printf("这里有一个整型数组，请输入你想要的整型数组长度和元素大小(num>0， size==4)：");
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
	//为了灵活调整所申请的内存
	//当扩大一块内存空间时， realloc()试图直接从堆上现存的数据后面的
	//那些字节中获得附加的字节如果原先的内存大小后面没有足够的空闲空间
	//用来分配，那么从堆中另外找一块newsize大小的内存。
	printf("realloc的应用！\n");
	char *p;
	p = (char *)malloc(100);

		printf("地址是: %p\n", p);

	char *new = (char *)realloc(p, 256);
	if (new)
		printf("新地址: %p\n", new);
	else
		printf("未申请上!/n");
	free(new);

}
void main() {
	//use_malloc();
     //use_calloc();
	use_realloc();
	system("pause");
}