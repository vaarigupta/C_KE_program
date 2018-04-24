#include <stdio.h>
#include <stdlib.h>

int main()
{
 float x;
printf("enter your rate");
 scanf("%f",&x);

 if (x <1000 & x>= 900)
    printf("expensive ");


    else if (x >= 800 & x < 900)
    printf("least expensive");



      else if ( x >= 700 & x < 800)
        printf(" normal rate");


        else
            printf("anyone can purchase");











    return 0;
}
