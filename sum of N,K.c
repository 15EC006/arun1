#include<stdio.h>
int main()
{
    int i,N,K,j,sum=0;
    printf("Enter the numbers");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    printf("%d",i);
     scanf("%d",&K);
    for(j=0;j<=K;j++)
    sum=sum+j;
    printf(" \n The sum is %d",sum);
}
