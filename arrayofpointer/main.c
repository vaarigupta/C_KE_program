#include <stdio.h>
#include <stdlib.h>

int main()
{ int i;
   int a[3]={30,40,50};
   int *pointer_array[3];

   for (  i=0;i<3;i++)
   {
       pointer_array[i]=&a[i];
   }
  for ( i=0;i<3;i++)
   { printf("the address of array[%d]= %x\n", i, pointer_array[i]);
   printf("the value of array[%d]= %d\n", i, *pointer_array[i]);
   }
}
