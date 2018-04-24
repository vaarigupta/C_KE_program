#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("enter the number");
    scanf("%d",&x);
    switch (x)
    {
    case 98:
    case 97:
    case 96:
    case 95:
        {
            printf("excellent");
        }
        break;
    case 89:
    case 88:
    case 87:
    case 86:
        {
            printf("very good");

        }
        break;
    case 79:
    case 78:
    case 77:
    case 76:
        {
            printf("good");

        }
        break;

    default:
        {
            printf("bad");

        }

        break;

    }
    return 0;
}
