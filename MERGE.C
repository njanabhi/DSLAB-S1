#include<stdio.h>
#include<conio.h>
int main()
{
int a[20],b[20],c[40],i,m,n,k;
clrscr();
printf("enter the size of first array");
scanf("%d",&n);
printf("enter the elkements of first array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
c[i]=a[i];
}
k=
i;
printf("enter the size of second array :\n");
scanf("%d",&m);
printf("enter the elements:\n");
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
c[k]=b[i];
k++;
}
printf("the merged array:\n");
for(i=0;i<k;i++)
{
printf("%d\n",c[i]);
}
getch();
return 0;
}
