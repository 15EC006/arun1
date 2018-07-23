#include<stdio.h>
void main()
{
char a[200];
int i,j,k=0;
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
k=1;
}
if(a[0]>=97)
{
a[0]=a[0]-32;
printf("%c",a[0]);
}
else
{
printf("%c",a[0]);
}
for(j=1;j<i;j++)
{
if((a[j]>=65)&(a[j]<=90))
{
a[j]=a[j]+32;
}
printf("%c",a[j]);
}}
