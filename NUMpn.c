#include<stdio.h>
int main()
{
int a;
printf("Enter the number:");
scanf("%d",&a);
if(a<=0)
printf("The entered number is Negative");
else if(a>=0)
printf("The entered number is Positive");
else
printf("Please enter the valid number");
return 0;
}
