#include <stdio.h>
#include <stdlib.h>
struct vaari
{
   int id;
   char name[60];
}v1;
struct raavi
{
   int id;
   char name[60];
}r1;

int main()
{
   v1.id=101;
   strcpy(v1.name,"sono");

   r1.id=102;
   strcpy(r1.name,"rakhi");

   printf("structure vaari%d\n ",v1.id);
   printf("structure vaari%s\n",v1.name);

   printf("strucre raavi%d \n",r1.id);
   printf("strucure raavi%s\n",r1.name);
}
