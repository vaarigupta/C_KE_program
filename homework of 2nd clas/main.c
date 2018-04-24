#include <stdio.h>
#include <stdlib.h>

int main()
{int x;

printf("enter your percentage");
scanf("%d",&x);
if (x>90 & x <100)
    printf("excellent");


else if (x >80 & x <90)
    printf("very good");


else if (x >70 & x < 80)

printf("good");


   else if ( x > 60 & x < 70)
    printf("average");

   else
    printf(" poor performance");


    return 0;
}
