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

struct FUNCTION {//定义1000长度的结构体数组
	char name[20];
	char sex[2];
	int age;
	char telnumber[11];
	char adress[20];
}; 
typedef struct BOOK {
	struct FUNCTION address_book[peoplemax];
	int personcount;
}as_book;
//打印菜单
int menu() {
	int choice = 0;
	printf("=========简单通讯录=========\n");
	printf("=========1、添加联系人======\n");
	printf("=========2、删除联系人======\n");
	printf("=========3、查找联系人======\n");
	printf("=========4、修改联系人======\n");
	printf("=========5、显示联系人======\n");
	printf("=========6、退出通讯录======\n");
	printf("请输入您的选择：");
	scanf("%d",&choice);
	return choice;
}

//查找指定联系人信息
int find_person(as_book* person) {
	char name2[20];
	int temp = 0;
	while (temp < person->personcount) {
		if (strcmp(name2, person->address_book[temp].name) == 0) {
			printf("姓名：%s   性别：%s   年龄：%d   电话：%s   地址：%s\n", person->address_book[temp].name, person->address_book[temp].sex
				, person->address_book[temp].age, person->address_book[temp].telnumber, person->address_book[temp].adress);
			printf("这是第 %d 位联系人！\n", temp);
			return temp;
		}
		++temp;
	}
	printf("没有该联系人！\n");
	return 0;
}
//添加联系人信息。自行添加，作为通讯录的初始数据，再实现后面的功能
void add_person(as_book* person) {
	if (person->personcount>peoplemax) {
		printf("通讯录已满！\n");
	}
	else {
		printf("请输入姓名：");
		scanf("%s",(person->address_book[person->personcount]).name);
		printf("请输入性别：");
		scanf("%s", (person->address_book[person->personcount]).sex);
		printf("请输入年龄：");
		scanf("%d", &(person->address_book[person->personcount]).age);
		printf("请输入电话：");
		scanf("%s", (person->address_book[person->personcount]).telnumber);
		printf("请输入地址：");
		scanf("%s", (person->address_book[person->personcount]).adress);
	}
	printf("成功增加！\n");
	++person->personcount;
	printf("目前%d位联系人！\n",person->personcount);
}
//删除指定联系人信息
void del_person(as_book* person) {
	int temp = 0;
	temp = find_person(person);
	if (person->personcount==0) {
		printf("通讯录为空！\n");
	}
	else {
		if (temp==0) {
			printf("没有该联系人！\n");
		}
		else {
			int temp2 = temp;
			while(temp2<person->personcount-1){
				person->address_book[temp2] = person->address_book[temp2 + 1];
				++temp2;
			}
			printf("已经删除该联系人！\n");
		}
	}
}

//修改指定联系人信息
void alt_person(as_book* person) {
	int temp = find_person(person);
	if (temp==0) {
		printf("没有该联系人！\n");
	}
	else {
		int choice = 0;
		int max = 5;
		while (max--) {//有五次修改机会，没选择一次就会减少一次。
		printf("请选择要修改的项：");
		scanf("%d",&choice);
		switch (choice)
		{
		case 1:
			scanf("姓名修改为：%s",person->address_book[temp].name);
			break;
		case 2:
			scanf("性别修改为：%s",person->address_book[temp].sex);
			break;
		case 3:
			scanf("年龄修改为：%d", &person->address_book[temp].age);
			break;
		case 4:
			scanf("电话修改为：%s", person->address_book[temp].telnumber);
		case 5:
			scanf("地址修改为：%s", person->address_book[temp].adress);
			break;
		default:
			max++;//输入错误，加一次修改机会。
			break;
		}

		}
		
	}
}
//显示所有联系人信息
void show_all(as_book* person) {
	if (person->personcount==0) {
		printf("通讯录为空！\n");
	}
	else {
		int temp = 0;
		while (temp<person->personcount)
		{
			printf("姓名：%s   性别：%s   年龄：%d   电话：%s   地址：%s\n", person->address_book[temp].name, person->address_book[temp].sex
				, person->address_book[temp].age, person->address_book[temp].telnumber, person->address_book[temp].adress);
			printf("\n");
			++temp;
		}
	}
}
//清空所有联系人,初始化
void init_book(as_book* person) {
	//person->address_book[peoplemax] ={0,0,0,0,0};
	person->personcount = 0;
}
//以名字排序所有联系人
void name_sort(as_book* person){
	if (person->personcount==0)
	{
		printf("通讯录为空，不需要排序！\n");
	}
	else
	{
		int row = 0;
		while (row<person->personcount-1)
		{
			int col = 0;
			while (col < person->personcount - 1 - row)
			{
				if (strcmp(person->address_book[col].name, person->address_book[col + 1].name) > 0)
				{
					char temp[20];
					strcpy(temp, person->address_book[col].name);
					strcpy(person->address_book[col].name, person->address_book[col + 1].name);
					strcpy(person->address_book[col + 1].name, temp);
				}
				++col;
			}
			++row;
		}
	}
}
//保存联系人到文件
void save_person() {

}
//加载联系人。就是打印联系人
void print_person(as_book* person) {
	char* name3 = "0";
	int temp = 0;
	printf("请输入联系人：");
	scanf("%s",name3);
	while (temp<person->personcount)
	{
		if (strcmp(name3,person->address_book[temp].name)==0) {

			printf("姓名：%s   性别：%s   年龄：%d   电话：%s   地址：%s\n", person->address_book[temp].name, person->address_book[temp].sex
				, person->address_book[temp].age, person->address_book[temp].telnumber, person->address_book[temp].adress);
		}
	}
	printf("未找到！\n");
	
}
int main() {
	//使用开关函数，用户自行选择
	as_book person;
	init_book(&person);//初始化结构体
	int choice = 0;
	while (1)
	{
		choice=menu();//打印菜单
		switch (choice)
		{
		case 1:
			add_person(&person);//添加
			break;
		case 2:
			del_person(&person);//删除
			break;
		case 3:
			find_person(&person);//查找
			break;
		case 4:
			alt_person(&person);//修改
			break;
		case 5:
			show_all(&person);//显示
			break;
		case 6:
			printf("退出程序！\n");
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