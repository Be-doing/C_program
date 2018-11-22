#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define peoplemax 1000
//实现一个通讯录；
//通讯录可以用来存储1000个人的信息，每个人的信息包括：
//姓名、性别、年龄、电话、住址
//
//提供方法：
//1.	添加联系人信息
//2.	删除指定联系人信息
//3.	查找指定联系人信息
//4.	修改指定联系人信息
//5.	显示所有联系人信息
//6.	清空所有联系人
//7.	以名字排序所有联系人
//8.  保存联系人到文件
//9.  加载联系人

//先创建一个结构体数组。结构体里面包含个人信息。再加上一个人数

typedef struct FUNCTION {//定义1000长度的结构体数组
	char name[20];
	char sex[2];
	int age;
	char telnumber[11];
	char adress[20];
}ADbook;
struct BOOK {
	ADbook* address_book;
	int size;
	int personcount;
}as_book;

void Check_malloc() {
	if (as_book.size < as_book.personcount) {
		return;
	}
	as_book.personcount *= 2;
	ADbook* temp = (ADbook*)malloc
	(sizeof(ADbook)*as_book.personcount);
	for (int i = 0; i < as_book.size; i++) {
		temp[i] = as_book.address_book[i];
	}
	free(as_book.address_book);
	as_book.address_book = temp;
	printf("通讯录已经扩容！\n");
}
int book_menu() {
	int choice = 0;
	printf("=========<简易通讯录>=========\n");
	printf("=========<1、添加联系人>=========\n");
	printf("=========<2、删除联系人>=========\n");
	printf("=========<3、查找联系人>=========\n");
	printf("=========<4、修改联系人>=========\n");
	printf("=========<5、显示全部>==========\n");
	printf("=========<6、清空联系人>=========\n");
	printf("=========<7、排序联系人>=========\n");
	printf("=========<8、退出通讯录>=========\n");
	printf("请输入您的选择：");
	scanf("%d", &choice);
	return choice;
}
void empty_person() {//清空和初始化的相同作用。所以这里可以写成初始化
	as_book.size = 0;
	
	as_book.personcount = 5;
	as_book.address_book = (ADbook*)malloc
	(sizeof(ADbook)*as_book.personcount);
	//printf("通讯录已经初始化！\n");
}
void add_person() {
	Check_malloc();
	printf("请输入姓名：");
	scanf("%s", as_book.address_book[as_book.size].name);
	printf("请输入性别：");
	scanf("%s", as_book.address_book[as_book.size].sex);
	printf("请输入年龄：");
	scanf("%d", &as_book.address_book[as_book.size].age);
	printf("请输入电话：");
	scanf("%s", as_book.address_book[as_book.size].telnumber);
	printf("请输入地址：");
	scanf("%s", as_book.address_book[as_book.size].adress);

	printf("成功增加！\n");
	++as_book.size;
	printf("目前%d位联系人！\n", as_book.size);
}
int find_person() {
	char name[1024] = "0";
	printf("请输入查找人的姓名：");
	scanf("%s", name);
	int temp = 0;
	while (temp < as_book.size) {
		if (temp == 0) {
			printf("编号\t姓名\t性别\t年龄\t电话\t住址\n");
			printf("=================================================\n");
		}
		if (strcmp(name, as_book.address_book[temp].name) == 0) {
			printf("%d\t%s\t%s\t%d\t%s\t%s\t", as_book.size, as_book.address_book[temp].name, as_book.address_book[temp].sex
				, as_book.address_book[temp].age, as_book.address_book[temp].telnumber, as_book.address_book[temp].adress);
			printf("\n");
			return temp;
		}
		++temp;
	}

	printf("通讯录里没有该联系人！\n");
	return -1;
}
void del_person() {
	int temp = 0;
	temp = find_person();
	if (temp == 0) {
		;
	}
	else {
		while (temp < as_book.personcount) {
			as_book.address_book[temp] = as_book.address_book[temp + 1];
			++temp;
		}
		--as_book.personcount;
		printf("成功删除该联系人！\n");

	}
}
void alt_person() {
	int temp = 0;
	temp = find_person();
	if (temp == -1) {
		;
	}
	else {
		int choice = 0;
		int max = 5;
		while (max--) {//有五次修改机会，没选择一次就会减少一次。
			printf(" ======1、姓名 === 2、性别=======\n");
			printf(" ======3、年龄 === 4、电话=======\n");
			printf(" ======5、地址 === 6、跳过=======\n");
			printf("请选择要修改的项：");
			scanf("%d", &choice);
			switch (choice)
			{
			case 1:
				printf("姓名修改为：");
				scanf("%s", as_book.address_book[temp].name);
				break;
			case 2:
				printf("性别修改为：");
				scanf("%s", as_book.address_book[temp].sex);
				break;
			case 3:
				printf("年龄修改为：");
				scanf("%d", &as_book.address_book[temp].age);
				break;
			case 4:
				printf("电话修改为：");
				scanf("%s", as_book.address_book[temp].telnumber);
				break;
			case 5:
				printf("地址修改为：");
				scanf("%s", as_book.address_book[temp].adress);
				break;
			case 6:
				printf("请继续选择。\n");
				break;
			default:
				++max;//输入错误，加一次修改机会。
				break;
			}
		}
	}
}
void print_person() {
	if (as_book.size == 0) {
		printf("通讯录为空，请先添加联系人！\n");
	}
	else {
		int temp = 0;
		printf("编号\t姓名\t性别\t年龄\t电话\t住址\n");
		printf("=================================================\n");
		while (temp < as_book.size)
		{
			printf("%d\t%s\t%s\t%d\t%s\t%s\t", as_book.size, as_book.address_book[temp].name, as_book.address_book[temp].sex
				, as_book.address_book[temp].age, as_book.address_book[temp].telnumber, as_book.address_book[temp].adress);
			printf("\n");
			++temp;
		}
	}
}
//保存联系人
void save() {
	printf("正在保存……\n");
	FILE* fp = fopen("../ test.txt","w");
	if (fp==NULL) {
		printf("文件不存在，打开失败！\n");
		return;//结束程序
	}
	for (int temp = 0; temp < as_book.size; ++temp) {
		fwrite(&as_book.address_book[temp],sizeof(ADbook), 1 ,fp);
	}
	fclose(fp);
	printf("保存成功！\n");
	printf("已经保存 %d 条数据\n",as_book.size);
}
//加载联系人
void load() {
	printf("LOADING……\n");
	FILE* fp = fopen("../ test.txt", "r");
	if (fp == NULL) {
		printf("文件打开失败，加载失败\n");
		return;//结束程序
	}
	ADbook temp = { 0 };
	while (fread(&temp,sizeof(temp),1,fp)){
		Check_malloc();
		as_book.address_book[as_book.size] = temp;
		++as_book.size;

	}
	fclose(fp);
	printf("加载成功\n");
	printf("加载 %d 条联系人！\n",as_book.size);
}
void sort_person() {
	if (as_book.size == 0)
	{
		printf("通讯录为空，不需要排序！\n");
	}
	else
	{
		int row = 0;
		while (row < as_book.size - 1)
		{
			int col = 0;
			while (col < as_book.size - 1 - row)
			{
				if (strcmp(as_book.address_book[col].name, as_book.address_book[col + 1].name) > 0)
				{
					char temp[1024];
					strcpy(temp, as_book.address_book[col].name);
					strcpy(as_book.address_book[col].name, as_book.address_book[col + 1].name);
					strcpy(as_book.address_book[col + 1].name, temp);
				}
				++col;
			}
			++row;
		}
	}
}
int main() {
	int choice = 0;
	empty_person();
	load();
	//以循环打印菜单提示用户输入选择
	while (1) {
		//开关语句卡是实现函数，增删查改，排序，清空。
		choice = book_menu();
		switch (choice) {
		case 1://添加联系人
			add_person();
			save();
			break;
		case 2://删除联系人
			del_person();
			save();
			break;
		case 3://查找联系人
			find_person();
			break;
		case 4://修改联系人
			alt_person();
			save();
			break;
		case 5://显示所有联系人
			print_person();
			break;
		case 6://清空联系人
			empty_person();
			save();
			break;
		case 7://排序联系人
			sort_person();
			save();
			break;
		case 8:
			save();
			printf("欢迎下次使用！\n");
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
	return 0;
	system("pause");
}