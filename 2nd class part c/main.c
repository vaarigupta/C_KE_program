#include <stdio.h>
#include <stdlib.h>

int main()
{
     float x;
printf("Enter your percentage");
scanf("%f",&x);
   if ( x >= 90&  x < 100)

   printf(" excellent perf.");


    else if ( x >= 80 & x < 90)
        printf ( " very good perf.");


    else if ( x >= 70 & x < 80)
        printf( " good perf.");



    else if ( x >=60 & x<70)
        printf(" average perf.");


    else if ( x>= 50 &  x <60)
        printf(" bad perfo");


    else
        printf(" very bad perf.");
return 0;
}
