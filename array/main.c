#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],i;
    printf("enter the  ten numbers");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<10;i++)
    {
        printf("your number is %d \n",a[i]);
    }
    return 0;
}
