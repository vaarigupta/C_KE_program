#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x;
   printf("enter the no");
   scanf("%d",&x);
   switch(x)

   case 100:
   case 99:
   case 98:
   case 97:
   case 96:
   case 95:
   case 94:
    {
        printf("excellent");

    }
    break;


   case 90 :
   case 89:
   case 88:
   case 87:
   case 86:
   case 85:
   case 84:
   case 83:
    {
        printf("good one");

    }
    break;

    default
    {
        printf("nyc");
    }
    break;

    return 0;
}
