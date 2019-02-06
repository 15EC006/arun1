#include<stdio.h>
#include<string.h>
int main()
{
int i,j=0,k=0,x,len;
char str[300],char strl[10][30],temp;
printf("enter the string:");
scanf("%[^\n]s",str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]==' ')
{
strl[k][j]='\0';
k++;
j=0;
}
else
{
str[k][j]=str[i];
j++;
}
}
strl[k][j]='\0';
for (i = 0;i <= k;i++)
    {
  
        len = strlen(str1[i]);
        for (j = 0, x = len - 1;j < x;j++,x--)
        {
            temp = str1[i][j];
            str1[i][j] = str1[i][x];
            str1[i][x]=temp;
            }
            }
            for
            (i=0;i<=k;i++)
            {
            str1[i][x] = temp;
        }
    }
   
