#include<stdio.h>
#include<string.h>
int i=0,error=0;
char input[10];
void E();
void T();
void Eprime();
void Tprime();
void F();
void main()
{

	printf("Enter the input to check if valid:");
	scanf("%c",&input[i]);
	E();
	if(error==0)
	{
		printf("Accepted");
	}
	else
	{
		printf("Rejected");
	}
}
void E()
{
	T();
	Eprime();
}
void Eprime()
{
	if(input[i]=='+')
	{
		i++;
	}
	T();
	Eprime();
}
void T()
{
	F();
	Tprime();
}
void Tprime()
{
	if(input[i]=='*')
	{
		i++;
	}
	F();
	Tprime();

}
void F()
{
	if(input[i]=='(');
	{
		i++;
	}
	E();
	if(input[i]==')');
	{
		i++;
	}

}