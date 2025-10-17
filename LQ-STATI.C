#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAXSIZE 5
void initialize();
void lqinsert();
void lqdelete();
void lqtraverse();
int queue[MAXSIZE];
int font,rear,choice,num;
void main()
{
clrscr();
initialize();
//int choice;
while(1)
{
clrscr();
printf("\n STATIC IMPLEMENTATION OF LINEAR QUEUE");

printf("\n---------------");
printf("\n 1.insert");
printf("\n 2.delete");
printf("\n 3.traverse");
printf("\n 4.exit");
printf("\n-----------------------");
printf("\n\n enter your name[1/2/3/4]:");
scanf("%d",&choice);
switch(choice)
{
case 1:lqinsert();
break;
case 2:lqdelete();
break;
case 3: lqtraverse();
break;
case 4:exit(0);
default:printf("\n invalid choice");
}
getch();
}
}
//function to insert an element into queue
void lqinsert()
{
int num;
if(rear==MAXSIZE-1)
{
printf("\n queue is full(queue overflow)");
return;
}
printf("\n enter the element to be inserted:");
scanf("%d",&num);
rear++;
queue[rear]=num;
if(front==-1)
{
front=0;
}
//function for delete an element from queue void
void lqdelete()
{
if(front==-1)
{
printf("\n queue is empty (queue underflow)");
return;
}
//int num;
num=queue[front];
print("\n delete element is: %d",num);
front++
if(front>rear)
{
front=rear=1;
}
//function to display queue void lq traverse()
[
if(front==-1)
{
printf("\n queue is empty (queue underflow)");
return;
}
else
{
printf("\n queue elements are:\n");
for(int i=front;i<=rear;i++)
{
printf("%d\t",queue[i]);
}
}