#include<stdio.h>
int main()
{
	int n,a[100],i,j,k=0,count=0,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(a[j-1]<a[j])
			{
				t=a[j-1];
				a[j-1]=a[j];
				a[j]=t;
			}
		}
	}
	for(j=0;j<n;j++)
	{
	for(i=j+1;i<n;i++)
	{
		if(a[i]==a[j])
		{
			count++;
		}
	}
	if(count==0)
	{
  printf("%d",a[J]);
  }
  count=0;
  }
  return 0;
  }
		
