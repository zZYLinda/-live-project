#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
 
#define LEN sizeof(struct information)
 
typedef struct information
{
	char name[20];
	char id[20];
	char time[20];
	struct information *next;
}INFO;
 
 
INFO *add(INFO *head)
{
	INFO *p0 = NULL, *p1, *p2;
	p0 = (INFO *)malloc(LEN);
	p1 = head;
	p2 = head;
	printf("****************************\n");
	printf("姓名：");
	scanf("%s",p0->name);
	printf("学号：");
	scanf("%s",p0->id);
	printf("进入时间：");
	scanf("%s",p0->time);
	
	/*再将节点p0存入链表*/
	/*
	if(head == NULL)
	{
		head = p0;
		head->next = NULL;	
		return head;
	}
	else
	{
		p2->next = p1;
		p2 = p1;
	}while(p1->next != NULL);
	p1->next = p0;
	p0->next = NULL;
	return head;
	*/
	
	
	if(head==NULL)
	{
		head=p0;
		p0->next=NULL;
	}
	else
	{
		while((strcmp(p0->name,p1->name)>0)&&(p1->next!=NULL))
		{
			p2=p1;
			p1=p1->next;
		}
		if((strcmp(p0->name,p1->name))<=0)
		{
			if(head==p1)
				head=p0;
			else
				p2->next=p0;
			p0->next=p1;
		}
		else
		{
			p1->next=p0;
			p0->next=NULL;
		}
		printf("\n************************************************************\n");
		printf("\n\n");
	}
	return(head);
}

INFO *print(INFO *head)
{
	INFO *p;
	p = head;
	system("clear");
 
	if(head != NULL)
	{
		printf("已有成员：\n");
		while(p != NULL)
		{
			printf("姓名：%s\n",p->name);
			printf("学号：%s\n",p->id);
			printf("进入时间：%s\n",p->time);
			printf("\n\n");
			p = p->next;
		}
	}
	else
	{
		printf("目前无信息！\n\n");
	}
	return head;
	
}

INFO *search(INFO *head)
{
	INFO *p1, *p2;
	char name[10];
	p1 = head;
	p2 = head;
	
	printf("请以姓名为关键字，输入需要查找的成员信息：\n");
	printf("****************************\n");
	scanf("%s",name);
	
	if(head != NULL)
	{
		while(p1 != NULL)
		{
			if(0 == strcmp(p1->name,name))
			{
				printf("以下是此人信息：\n");
				printf("姓名：%s",p1->name);
				printf("\n");
				printf("ID：%s",p1->id);
				printf("\n");
				printf("时间：%s",p1->time);
				printf("\n");
				return head;
			}
			else
			{
				p2 = p1;
				p2->next = p1;
			}
		}
		printf("查无此人。\n");
	}
	else
	{
		printf("目前为空。\n");
	}
	
}

int main()
{
	char choose[20];
	INFO *head = NULL;
	head = (INFO *)malloc(LEN);
	system("clear");
	while(1)
	{
		printf("请输入你需要进行的操作：\n");
		scanf("%s",&choose);
		switch(choose)
		{
			case 0:return 0;
			case 1:head = print(head);break;
			case 2:head = add(head);break;
			case 3:head = search(head);break;
			case 4:system("clear");break;
		}
	}
}