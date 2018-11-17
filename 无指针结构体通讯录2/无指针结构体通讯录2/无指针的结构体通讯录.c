#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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

//定义一个结构体数组，每个数组的元素里面包含一个联系人信息
#define PERSONMAX 1000
struct BOOK{
	char name[1024];
	char sex[1024];
	int age;
	char tel[1024];
	char address[1024];

	int personcount;
}address_book[PERSONMAX];

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
	address_book->personcount = 0;
	memset(address_book, 0x0, sizeof(address_book));
	printf("通讯录已经初始化！\n");
}
void add_person() {
	if (address_book->personcount==PERSONMAX) {
		printf("通讯录已满，添加失败！\n");
	}
	else {
		printf("请输入姓名：");
		scanf("%s", address_book[address_book->personcount].name);
		printf("请输入性别：");
		scanf("%s", address_book[address_book->personcount].sex);
		printf("请输入年龄：");
		scanf("%d", &address_book[address_book->personcount].age);
		printf("请输入电话：");
		scanf("%s", (address_book[address_book->personcount]).tel);
		printf("请输入地址：");
		scanf("%s", address_book[address_book->personcount].address);
	}
	printf("成功增加！\n");
	++address_book->personcount;
	printf("目前%d位联系人！\n", address_book->personcount);
}
int find_person() {
	char name[1024] = "0";
	printf("请输入查找人的姓名：");
	scanf("%s",name);
	int temp = 0;
	printf("编号\t姓名\t性别\t年龄\t电话\t住址\n");
	printf("=================================================\n");
	while (temp<address_book->personcount){
		

	
		if (strcmp(name,address_book[temp].name)==0) {
			printf("%d\t%s\t%s\t%d\t%s\t%s\t", address_book[temp].personcount, address_book[temp].name, address_book[temp].sex
				, address_book[temp].age, address_book[temp].tel, address_book[temp].address);
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
	if (temp==0) {
		;
	}
	else {
			while (temp<address_book->personcount){
			address_book[temp] = address_book[temp + 1];
			++temp;
		}
		--address_book->personcount;
		printf("成功删除该联系人！\n");
	
	}
}
void alt_person() {
	int temp = 0;
	temp = find_person();
	if (temp==-1) {
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
				scanf("%s", address_book[temp].name);
				break;
			case 2:
				printf("性别修改为：");
				scanf("%s", address_book[temp].sex);
				break;
			case 3:
				printf("年龄修改为：");
				scanf("%d", &address_book[temp].age);
				break;
			case 4:
				printf("电话修改为：");
				scanf("%s", address_book[temp].tel);
				break;
			case 5:
				printf("地址修改为：");
				scanf("%s", address_book[temp].address);
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
	if (address_book->personcount==0) {
		printf("通讯录为空，请先添加联系人！\n");
	}
	else {
		int temp = 0;
		printf("编号\t姓名\t性别\t年龄\t电话\t住址\n");
		printf("=================================================\n");
		while (temp<address_book->personcount)
		{
			printf("%d\t%s\t%s\t%d\t%s\t%s\t", address_book[temp].personcount, address_book[temp].name, address_book[temp].sex
				, address_book[temp].age, address_book[temp].tel, address_book[temp].address);
			printf("\n");
			++temp;
		}
	}
}

void sort_person() {
	if (address_book->personcount == 0)
	{
		printf("通讯录为空，不需要排序！\n");
	}
	else
	{
		int row = 0;
		while (row < address_book->personcount - 1)
		{
			int col = 0;
			while (col < address_book->personcount - 1 - row)
			{
				if (strcmp(address_book[col].name,address_book[col + 1].name) > 0)
				{
					char temp[1024];
					strcpy(temp, address_book[col].name);
					strcpy(address_book[col].name, address_book[col + 1].name);
					strcpy(address_book[col + 1].name, temp);
				}
				++col;
			}
			++row;
		}
	}
}
int main(){
	int choice = 0;
	//以循环打印菜单提示用户输入选择
	while (1) {
		//开关语句卡是实现函数，增删查改，排序，清空。
		choice=book_menu();
		switch (choice){
		case 1://添加联系人
			add_person();
			break;
		case 2://删除联系人
			del_person();
			break;
		case 3://查找联系人
			find_person();
			break;
		case 4://修改联系人
			alt_person();
			break;
		case 5://显示所有联系人
			print_person();
			break;
		case 6://清空联系人
			empty_person();
			break;
		case 7://排序联系人
			sort_person();
			break;
		case 8:
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