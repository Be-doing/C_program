#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define peoplemax 1000
//ʵ��һ��ͨѶ¼��
//ͨѶ¼���������洢1000���˵���Ϣ��ÿ���˵���Ϣ������
//�������Ա����䡢�绰��סַ
//
//�ṩ������
//1.	�����ϵ����Ϣ
//2.	ɾ��ָ����ϵ����Ϣ
//3.	����ָ����ϵ����Ϣ
//4.	�޸�ָ����ϵ����Ϣ
//5.	��ʾ������ϵ����Ϣ
//6.	���������ϵ��
//7.	����������������ϵ��
//8.  ������ϵ�˵��ļ�
//9.  ������ϵ��

//�ȴ���һ���ṹ�����顣�ṹ���������������Ϣ���ټ���һ������

struct FUNCTION {//����1000���ȵĽṹ������
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
//��ӡ�˵�
int menu() {
	int choice = 0;
	printf("=========��ͨѶ¼=========\n");
	printf("=========1�������ϵ��======\n");
	printf("=========2��ɾ����ϵ��======\n");
	printf("=========3��������ϵ��======\n");
	printf("=========4���޸���ϵ��======\n");
	printf("=========5����ʾ��ϵ��======\n");
	printf("=========6���˳�ͨѶ¼======\n");
	printf("����������ѡ��");
	scanf("%d",&choice);
	return choice;
}

//����ָ����ϵ����Ϣ
int find_person(as_book* person) {
	char name2[20];
	int temp = 0;
	while (temp < person->personcount) {
		if (strcmp(name2, person->address_book[temp].name) == 0) {
			printf("������%s   �Ա�%s   ���䣺%d   �绰��%s   ��ַ��%s\n", person->address_book[temp].name, person->address_book[temp].sex
				, person->address_book[temp].age, person->address_book[temp].telnumber, person->address_book[temp].adress);
			printf("���ǵ� %d λ��ϵ�ˣ�\n", temp);
			return temp;
		}
		++temp;
	}
	printf("û�и���ϵ�ˣ�\n");
	return 0;
}
//�����ϵ����Ϣ��������ӣ���ΪͨѶ¼�ĳ�ʼ���ݣ���ʵ�ֺ���Ĺ���
void add_person(as_book* person) {
	if (person->personcount>peoplemax) {
		printf("ͨѶ¼������\n");
	}
	else {
		printf("������������");
		scanf("%s",(person->address_book[person->personcount]).name);
		printf("�������Ա�");
		scanf("%s", (person->address_book[person->personcount]).sex);
		printf("���������䣺");
		scanf("%d", &(person->address_book[person->personcount]).age);
		printf("������绰��");
		scanf("%s", (person->address_book[person->personcount]).telnumber);
		printf("�������ַ��");
		scanf("%s", (person->address_book[person->personcount]).adress);
	}
	printf("�ɹ����ӣ�\n");
	++person->personcount;
	printf("Ŀǰ%dλ��ϵ�ˣ�\n",person->personcount);
}
//ɾ��ָ����ϵ����Ϣ
void del_person(as_book* person) {
	int temp = 0;
	temp = find_person(person);
	if (person->personcount==0) {
		printf("ͨѶ¼Ϊ�գ�\n");
	}
	else {
		if (temp==0) {
			printf("û�и���ϵ�ˣ�\n");
		}
		else {
			int temp2 = temp;
			while(temp2<person->personcount-1){
				person->address_book[temp2] = person->address_book[temp2 + 1];
				++temp2;
			}
			printf("�Ѿ�ɾ������ϵ�ˣ�\n");
		}
	}
}

//�޸�ָ����ϵ����Ϣ
void alt_person(as_book* person) {
	int temp = find_person(person);
	if (temp==0) {
		printf("û�и���ϵ�ˣ�\n");
	}
	else {
		int choice = 0;
		int max = 5;
		while (max--) {//������޸Ļ��ᣬûѡ��һ�ξͻ����һ�Ρ�
		printf("��ѡ��Ҫ�޸ĵ��");
		scanf("%d",&choice);
		switch (choice)
		{
		case 1:
			scanf("�����޸�Ϊ��%s",person->address_book[temp].name);
			break;
		case 2:
			scanf("�Ա��޸�Ϊ��%s",person->address_book[temp].sex);
			break;
		case 3:
			scanf("�����޸�Ϊ��%d", &person->address_book[temp].age);
			break;
		case 4:
			scanf("�绰�޸�Ϊ��%s", person->address_book[temp].telnumber);
		case 5:
			scanf("��ַ�޸�Ϊ��%s", person->address_book[temp].adress);
			break;
		default:
			max++;//������󣬼�һ���޸Ļ��ᡣ
			break;
		}

		}
		
	}
}
//��ʾ������ϵ����Ϣ
void show_all(as_book* person) {
	if (person->personcount==0) {
		printf("ͨѶ¼Ϊ�գ�\n");
	}
	else {
		int temp = 0;
		while (temp<person->personcount)
		{
			printf("������%s   �Ա�%s   ���䣺%d   �绰��%s   ��ַ��%s\n", person->address_book[temp].name, person->address_book[temp].sex
				, person->address_book[temp].age, person->address_book[temp].telnumber, person->address_book[temp].adress);
			printf("\n");
			++temp;
		}
	}
}
//���������ϵ��,��ʼ��
void init_book(as_book* person) {
	//person->address_book[peoplemax] ={0,0,0,0,0};
	person->personcount = 0;
}
//����������������ϵ��
void name_sort(as_book* person){
	if (person->personcount==0)
	{
		printf("ͨѶ¼Ϊ�գ�����Ҫ����\n");
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
//������ϵ�˵��ļ�
void save_person() {

}
//������ϵ�ˡ����Ǵ�ӡ��ϵ��
void print_person(as_book* person) {
	char* name3 = "0";
	int temp = 0;
	printf("��������ϵ�ˣ�");
	scanf("%s",name3);
	while (temp<person->personcount)
	{
		if (strcmp(name3,person->address_book[temp].name)==0) {

			printf("������%s   �Ա�%s   ���䣺%d   �绰��%s   ��ַ��%s\n", person->address_book[temp].name, person->address_book[temp].sex
				, person->address_book[temp].age, person->address_book[temp].telnumber, person->address_book[temp].adress);
		}
	}
	printf("δ�ҵ���\n");
	
}
int main() {
	//ʹ�ÿ��غ������û�����ѡ��
	as_book person;
	init_book(&person);//��ʼ���ṹ��
	int choice = 0;
	while (1)
	{
		choice=menu();//��ӡ�˵�
		switch (choice)
		{
		case 1:
			add_person(&person);//���
			break;
		case 2:
			del_person(&person);//ɾ��
			break;
		case 3:
			find_person(&person);//����
			break;
		case 4:
			alt_person(&person);//�޸�
			break;
		case 5:
			show_all(&person);//��ʾ
			break;
		case 6:
			printf("�˳�����\n");
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