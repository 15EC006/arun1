#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE], f[MAX_SIZE];
    int size, i, j, count;
    scanf("%d", &size);
   for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
        f[i] = -1;
    } for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                f[j] = 0;
            }
        }
        if(f[i]!=0)
        {
            f[i] = count;
        }
    }
    for(i=0; i<size; i++)
    {
    if(f[i]==1)
    {
    printf("%d", arr[i]);
    }}
    return 0;
    }
       
