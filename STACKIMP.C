#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAXSIZE 5
void push();
void pop();
void display();
int stack[MAXSIZE];
int top=-1;
void main()
{
int choice;
clrscr();
while(1)
{
clrscr();
printf("STATIC IMPLEMENTATION OF STACK");
printf("\n.............");
printf("\n1.PUSH");
printf("\n2.POP");
printf("\n3.DISPLAY");
printf("\n4.EXIT");
printf("\n...........");
printf("\n\n enter your choice[1/2/3/4]:");
scanf("%d",&choice);
switch(choice)
{
case1:push();
break;
case2:pop();
break;
case3:display();
break;
case4:exit(0);
default:printf("\n\n sry bro i cant");
}
getch();
}
}
void push()
{
int num;
if(top==MAXSIZE-1)
{
printf("\n\n stack is full(stack overflow)");
return;
}

printf("\n\n enter the elements to be pushed in the stack :");
scanf("%d",&num);
top++;
stack[top]=num;
}
void pop()
{
int num;
if(top==-1)
{
printf("\n\n stack is empty(stack underflow)");
return;
}
num=stack[top];
printf("\n\n elements poped from stack:%d",num);
top--;
}
void display()
{
int i;
if(top==-1)
{
printf("\n\n stack is empty(stack underflow)");
return;
}
printf("\n\n stack elements are :\n");
for(i=top;i>=0;i--)
{
printf("stack [%d]:%d\n",i,stack[i]);
}
}
