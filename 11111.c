#include<stdio.h>
int main()
{
int n,k,diff,sum=0,temp,i;
scanf("%d%d%d",&n,&k,&diff);
for(i=0;i<n;i++)
{
temp=sum+k;
sum=temp;
k=k+diff;
}
printf("%d",temp);
return 0;
}
