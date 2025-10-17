#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 100
//queue variable
char queue[MAX];
int front=-1,rear=-1;
//function to enqueue at rear
void enqueue(char ch)
{
if(rear==MAX-1)
{
printf("queue overflow\n");
return;
}
if(front==-1)front=0;
queue[++rear]=ch;
}
//function to dequeue from rear
char dequeue_rear()
{
if(rear==-1)
{
printf("queue unnderflow\n");
return '\0';
}
return queue[rear--];
}
int main()
{
char str[MAX],processed[MAX],reversed[MAX];
int i,len,idx=0,k;
printf("enter a string:");
fgets(str,MAX,stdin);
//remove new line character if present str[strcspr(str,"\n"]='\0';
//process string:remove space and convert to lower case
for(i=0;str[i]!='\0';i++)
{
if(!isspace((unsigned char)str[i]))
{
processed[idx++]=tolower((unsigned char)str[i]);
}
}
processed[idx]='\0';
len=strlen(processed);
//enqueue each character
for(i=0;i<len;i++)
{
enqueue(processed[i]);
}
//dequeue from rear to form reversed string
// int
 k=0;
while(rear!=-1)
{
reversed[k++]=dequeue_rear();
}
reversed[k]='\0';
//compare and print result
if(strcmp(processed,reversed)==0)
{
printf("palindrome\n");
}
else{
printf("not palindrome\n");
}
return 0;
}