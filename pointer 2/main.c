#include <stdio.h>
#include <stdlib.h>

int main()
{ int a=10;
  int *add;
  add=&a;


  printf("address of a :%x \n",a);
  printf("integral value :%d \n ",*add);
    return 0;
}
