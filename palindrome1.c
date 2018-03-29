#include<stdio.h>
void main()
{
int a,temp=0,b,c;

printf("enter the number");
scanf("%d",&a);
c=a;
while(a>0)
{
b=a%10;
temp=temp*10+b;
a=a/10;
printf("%d\n",temp);
}
if(temp==c)
{
    printf("\npalindrome");
}
else
{
    printf("not a palindrome");
}
}
