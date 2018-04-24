#include <stdio.h>
#include <stdlib.h>

int main()
{
   int var=20;
   int *ip;
   ip =&var ;

   printf("value of var variable: %d\n", var);
   printf("address of variables :%x\n",ip);
   printf("integral value of var:%d\n",*&var);


    return 0;
}
