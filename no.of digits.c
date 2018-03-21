#include <stdio.h>
 
int main()
{
    int num,temp,cnt;
 
    printf("Enter a number: ");
    scanf("%d",&num);
 
    cnt=0;
    temp=num;
 
    while(temp>0)
    {
        cnt++;
        temp/=10;
    }
 
    printf("Total numbers of digits are: %d in number: %d.",cnt,num);
     
    return 0;
}
