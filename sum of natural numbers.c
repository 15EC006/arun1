#include<stdio.h>
int main()
{
    int Num,i=0,s=0;
    printf("Enter the number of digits");
    scanf("%d",&Num);
    for(i=0;i<=Num;i++)
    s=s+i;
    printf("The sum of %d Natural numbers is %d",Num,s);
}
