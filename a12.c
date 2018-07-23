#include<stdio.h>
void main()
{
int n,n1,temp=0,c;
printf("enter the number");
scanf("%d",&n);
c=n;
while(n>0)
{
n1=n%10;
temp=temp+(n1*n1*n1);
n=n/10;
}
printf("%d",temp);
if(temp==c)
{
printf("armstrong number");
}
else
{
printf("not an amstrong");
}}
