#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x ;
    scanf("%d",&x);
    switch (x)
    {
    case 96:
    case 95:
    case 94:
        {
            printf("your percentage is greater than 90");
        }


       break;

    case 82:
    case 83:
    case 84:
        {
            printf("ur percentage is greater than 80");
        }
       break;

    default :
        {
            printf("u r passed only");
        }
        break;

    }

    return 0;
}
