#include <stdio.h>
#include <string.h>
#define MAX 1000
#define MAX_NAME 5
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

struct Contact
{
	struct PeoInfo data[MAX];
	int size;
};

void InitContact(struct Contact* ps);//初始化
void AddContact(struct Contact* ps);//增加
void ShowContact(const struct Contact* ps);//打印
void DelContact(struct Contact* ps);//删除
void SearchContact(const struct Contact* ps);//查找
void ModifyContact(struct Contact* ps);//修改
void SortContact(struct Contact* ps);//排序