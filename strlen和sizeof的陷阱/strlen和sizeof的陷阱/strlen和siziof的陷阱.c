#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main() {
	int a[] = { 1,2,3,4 };
	printf("%d\n",sizeof(a));//这个就很简单吧，计算的数组的长度，每个元素的长度是4个字节，所以答案是 4 * 4 = 16
	printf("%d\n", sizeof(a+0));//这里计算的什么呢？好像数组名不能加减吧？但是指针可以啊，只要进行饿了加减运算就是指针。所以这里指针的长度。因为米钱VS是32位编译系统的。所以是4
	printf("%d\n", sizeof(*a));//这个是解引用吧。所以计算的是第一个元素的长度哇，是 4
	printf("%d\n", sizeof(a[1]));//这个太明显了，不说了不说了，第一个元素的长度 ，是 4
	printf("%d\n", sizeof(&a));//取地址的结果是什么啊？结果是指针呐。取地址，地址是啥，指针。所以是 4
	printf("%d\n", sizeof(*&a));//这里和上面有点相似。加了 * 。便是解引用吧？这是对数组的解引用哦。简单点就是* 和& 抵消，结果是 16
	printf("%d\n", sizeof(&a+1));//这里上面提到过，所以是指针+ 1啊。但还是指针吧。所以是 4
	printf("%d\n", sizeof(&a[0]));//这里是指针吧。所以一班遇见了 &就是指针吧？但是要看编译系统是多少位的。这里是 4。32位的
	printf("===========\n");
	char arr[] = { 'a','b','c','d','e','f' };//没有'\0'
	printf("%d\n", sizeof(arr));//这还是数组的长度吧？结果就是 6吧
	printf("%d\n", sizeof(arr+0));//还是指针啊，指针才能相加减哦 所以结果是 4
	printf("%d\n", sizeof(*arr));//这是解引用吧？第一个元素的长度 所以是 1
	printf("%d\n", sizeof(arr[1]));//这是第一个元素的长度，简单。是1。字符的长度哦。
	printf("%d\n", sizeof(&arr));//这是指针哦。所以是4
	printf("%d\n", sizeof(&arr+1));//这里上面提到过，还是指针吧。所以是 4
	printf("%d\n", sizeof(&arr[0]+1));//这里注意计算的先后顺序啊。arr[0]->&arr[0]->&arr[0]+1。所以是指针+1 化石指针哦  4

	printf("============\n");
	printf("%d\n", strlen(arr));//注意strlen要到'\0'结束哦，但这个数组是没有'\0'的，所以啊，是个随机数，我也不知道
	//strlen不过参数是指针还是数组名，都会拿着这个地址一直找到'\0'结束
	printf("%d\n", strlen(arr + 0));//这个还是一样，不管是撒，只要没有'\0'都是随机值，这个值和上面的是一样的吧
	//未定义行为
	printf("============\n");
	char arr2[] = "abcdef";//这是有'\0'仅限于字符串的初始化
	printf("%d\n", sizeof(arr2));//这还是数组的长度吧？但是多了一个'\0'哦，结果就是 7
	printf("%d\n", sizeof(arr2 + 0));//还是指针啊，指针才能相加减哦 所以结果是 4
	printf("%d\n", sizeof(*arr2));//这是解引用吧？第一个元素的长度 所以是 1
	printf("%d\n", sizeof(arr2[1]));//这是第一个元素的长度，简单。是1。字符的长度哦。
	printf("%d\n", sizeof(&arr2));//这是指针哦。所以是4
	printf("%d\n", sizeof(&arr2 + 1));//这里上面提到过，还是指针吧。所以是 4

	printf("============\n");
	printf("%d\n", strlen(arr2));//这还是数组的长度吧？但是不包括'\0'。结果就是 6吧
	printf("%d\n", strlen(arr2 + 0));//这里有'\0'，从这里开始计算长度，所以结果是 6
	printf("%d\n", strlen(*arr2));//这是解引用吧？但是strlen不能求字符长度。
	printf("%d\n", strlen(arr2[1]));//strlen不能求字符长度。
	printf("%d\n", strlen(&arr2));//和第二个一样的结果，懂我意思吧？
	printf("%d\n", strlen(&arr2 + 1));//这个地址是整个数组的地址，跳过就越界了。所以是随机值，数组指针
	printf("%d\n", strlen(&arr2[0] + 1));//这个就简单吧？从第二个元素位置开始找。所以是 5

	printf("============\n");
	char* p = "abcdef";
	printf("%d\n", sizeof(p));//这里是个指针啊。所以是4
	printf("%d\n", sizeof(p+1));//这还是4，不说了
	printf("%d\n", sizeof(*p));//这里解引用啊。第一个元素的长度 结果 1
	printf("%d\n", sizeof(p[0]));//第一个元素的长度啊 1
	printf("%d\n", sizeof(&p));//这里是指针吧 4
	printf("%d\n", sizeof(&p+1));//4

	printf("============\n");
	//printf("%d\n", strlen(p));//有'\0'  6
	//printf("%d\n", strlen(p + 1));//第二个元素开始啊。所以是5
	//printf("%d\n", strlen(*p));//未定义行为
	//printf("%d\n", strlen(p[0]));//未定义行为

	printf("============\n");

	int a2[3][4] = { 0 };
	printf("%d\n", sizeof(a2));//十二个元素，都是int 型，所以结果是48
	printf("%d\n", sizeof(a2[0]));//这是第一个一维数组的长度，所以结果是16
	printf("%d\n", sizeof(a2[0]+1));//这是指针吧？所以是4
	printf("%d\n", sizeof(*(a2[0]+1)));//==a2[0][1] 所以是4
	printf("%d\n", sizeof(*(&a2[0]+1)));//16

	system("pause");

}