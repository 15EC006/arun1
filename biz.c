#include <stdio.h>
#include<conio.h>
void main ()
{
int number[30];
int t, j, a, n;
printf("Enter the value of N\n");
scanf("%d", &n);
printf("Enter the numbers \n");
for (t = 0; t < n; ++t)
scanf("%d", &number[t]);
for (t =0; t< n; ++t)
{
for (j = t + 1; j < n; ++j)
{
 if (number[t] < number[j])
{
 a = number[t];
number[t] = number[j];
number[j]=a;
}
}
}
printf("numbers arranged in desending order\n");
for(t=0;t<n;++t)
{
printf("%d\n",number[t]);
}
}
