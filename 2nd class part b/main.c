#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=56;


   if ( x> 50 & x < 60){
    printf(" performance is bad");
    printf("performance is very bad");
   }
   else if ( x > 60 & x < 70){
    printf(" performance is average ");
   }
   else if (x > 70 & x < 80){

    printf ( "performance is good");
   }
   else if ( x > 80 & x < 90)
   {
    printf(" performance is very good ");
    }
     printf(" performance is excellent");
   else{
       printf(" performance is outtstanding");
   }
return 0;
}
