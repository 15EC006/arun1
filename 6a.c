#include<stdio.h>
int main()
{
int a[100],i,n,j,temp,k=0,b[100];
printf("the number of values=");
scanf("%d",&n);
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
 for (j = 0; j < n; ++j)
   {
      for (k = j + 1; k < n; ++k)
      {
         if (a[j] > a[k])
         {
            temp = a[j];
            a[j] = a[k];
            a[k] = temp;
         }
      }
   }
for(i=0;i<n;i++)
{
    printf("\n%d",a[i]);
}
for(i=0;i<n;i++)
{
    if(a[i]==i)
    {
        printf("the value %d in index %d are same \n",a[i],i);
        k=k+1;
    }


}
if(k==0)
printf("no such value exist");
return 0;
}
