#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grades = 95;
    switch ( grades)

    {
    case 90:
    case 95:
    { printf("outstanding"); }
    break;

    case 80:
        {
            printf("very good");

        }
        break;
        case 70:
        {
            printf("good");
        } break;

        default:
            {
                printf("sorry not available");
            }

    }
    return 0;
}
