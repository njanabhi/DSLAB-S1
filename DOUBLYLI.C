#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node * next;
struct node * prev;
}
*head=NULL,*temp=NULL,*prev=NULL,*newNode=NULL;
void insert();
void delete1();
void display();
void create_node();
void main()
{
int ch,i;
clrscr();
while(1)
{
printf("\n 1.insertion \n 2.deletion \n 3.display \n 4.exit \n");
printf("\n enter the choice :\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
insert();
break;
case 2:
delete1();
break;
case 3:
display();
break;
case 4:
exit(0);
default:
printf("\n invalid option\n");
break;
}
}
}
void insert()//insert at begining
{
if(head==NULL)//list is empty
{
create_node();
head=newNode;
}
else
{
create_node();
head->prev=newNode;
newNode->next=head;
head=newNode;
}
}
 void create_node()
{
newNode=(struct node*)malloc(sizeof(struct node));
printf("\n enter the value :\n");
scanf("%d",&newNode->data);
newNode->prev=NULL;
newNode->next=NULL;
}
void delete1()//deletion from begining
{
if(head==NULL)
{
printf("\n list is empty\n");
}
else
{
temp=head;
head=head->next;
head->prev=NULL;
printf("%d is delete \n",temp->data);
free(temp);
}                         }
void display()
{
if(head==NULL)
{
printf("\n list is empty \n");
}
else
{
temp=head;
while(temp!=NULL)
{
printf("%d-->",temp->data);
temp=temp->next;
}
}
}