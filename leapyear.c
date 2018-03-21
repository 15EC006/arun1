#include <stdio.h>
int main()
{
int year;
printf("Enter the Year :");
scanf("%d",&year);
if(year%4==0)
{
    if (year%100==0)
    {
        if(year%400==0)
        printf("Leap Year");
        else
        printf(" not a Leap year");
    }
    else
    printf("Leap year");
}
else
printf("Entered year is not a Leap year");
return 0;
}
