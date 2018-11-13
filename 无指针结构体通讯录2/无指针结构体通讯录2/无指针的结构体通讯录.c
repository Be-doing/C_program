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
	while (temp<address_book->personcount){
		if (temp==0)		{
			printf("编号\t姓名\t性别\t年龄\t电话\t住址\n");
			printf("=================================================\n");
		}
		if (strcmp(name,address_book[address_book->personcount].name)==0) {
			printf("%d\t%s\t%s\t%d\t%s\t%s\t", address_book->personcount, address_book->name, address_book->sex
				, address_book->age, address_book->tel, address_book->address);
			printf("\n");
			++temp;
			return address_book->personcount;
		}
	}
	
	printf("通讯录里没有该联系人！\n");
	return 0;
}
void del_person() {
	int temp = 0;
	temp = find_person();
	if (temp==0) {
		printf("没有该联系人！\n");
	}
	else{
		while (temp<address_book->personcount){
			address_book[temp] = address_book[temp + 1];
			++temp;
		}
		printf("成功删除该联系人！\n");
	}
}
void alt_person() {

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
			printf("%d\t%s\t%s\t%d\t%s\t%s\t",address_book->personcount,address_book->name,address_book->sex
			,address_book->age,address_book->tel,address_book->address);
			printf("\n");
			++temp;
		}
	}
}
void empty_person() {

}
void sort_person() {

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