#include<stdio.h>
void main()
{
int a[100],n,i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=1;j<n;j++)
{
if(a[i]==a[j+i])
{
printf("%d",a[i]);
}}}}
