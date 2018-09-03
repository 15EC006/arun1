#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);

    int i,j,k,arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        for(k=j+1;k<n;k++)
        {
        if(arr[i]+arr[j]==arr[k])
        printf("%d %d %d\n",arr[i],arr[j],arr[k]);
           }
           }
           }
           }
