#include<stdio.h>
int main()
{
	int i,j,k,n;
	char a[100],b[100];
	scanf("%s",&a);
	scanf("%s",&b);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==b[i])
		{
    printf("%c",a[i]);
    }
    else
    {
    break;
    }
    }
    return 0;
    }
		
