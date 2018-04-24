#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5],i;
    printf("enter the number of elements\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        printf("\nthe number is %d ",a[i]);
    }
    return 0;
}
