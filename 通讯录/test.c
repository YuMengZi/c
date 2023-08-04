#define _CRT_SECURE_NO_WARNINGS
#include "tongxunlu.h"
static int FindByName(const struct Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
	
}


void InitContact(struct Contact* ps)
{
	memset(ps->data, 0,sizeof(ps->data));
	ps->size = 0;
}


void AddContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("ͨѶ¼�������޷�����\n");
	}
	else
	{
		printf("ǰ����������:>");
		scanf("%s", ps->data[ps->size].name);
		printf("ǰ����������:>");
		scanf("%d", &ps->data[ps->size].age);
		printf("ǰ�������Ա�:>");
		scanf("%s", ps->data[ps->size].sex);
		printf("ǰ������绰:>");
		scanf("%s", ps->data[ps->size].tele);
		printf("ǰ�������ַ:>");
		scanf("%s", ps->data[ps->size].addr);
		ps->size ++;
		printf("��ӳɹ�\n");
	}
}


void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����","����", "�Ա�", "�绰", "��ַ");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age, 
				ps->data[i].sex, 
				ps->data[i].tele, 
				ps->data[i].addr);
		}

	}
}


void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫɾ���˵�����\n");
	scanf("%s", name);
	int pos=FindByName(ps, name);
	if (pos==-1)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}


void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ���ҵ�����:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
	}
}


void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�޸ĵ�����\n");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("Ҫ�޸��˵���Ϣ������\n");
	}
	else
	{
		printf("ǰ����������:>");
		scanf("%s", ps->data[ps->size].name);
		printf("ǰ����������:>");
		scanf("%d", &ps->data[ps->size].age);
		printf("ǰ�������Ա�:>");
		scanf("%s", ps->data[ps->size].sex);
		printf("ǰ������绰:>");
		scanf("%s", ps->data[ps->size].tele);
		printf("ǰ�������ַ:>");
		scanf("%s", ps->data[ps->size].addr);
	
		printf("�޸ĳɹ�\n");
	}
}

void SortContact(struct Contact* ps)
{

}