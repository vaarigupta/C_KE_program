#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("enter any no");
    scanf("%d",&x);
    switch(x)
    {
     case 90:
    {
        printf("good");

    }
    break;
     case 80:
        {
            printf("nice");

        }
    break;
     default:
        {
            printf("so so");
        }
    break ;


    }
    return 0;
}
