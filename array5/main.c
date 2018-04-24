#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a[100];
    printf("enter the ten numbers");
    for(i=1;i<=10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the number is:%d",a[5]);
    return 0;
}
