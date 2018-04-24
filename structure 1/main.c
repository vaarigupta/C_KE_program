#include <stdio.h>
#include <stdlib.h>
struct vaari
{
 int id;
 char name;

}v1;
int main()
{
    v1.id=1000;
    strcpy(v1.name,"abhishek");
    printf("vaari id:%d\n",v1.id);
    printf("vaari name:%s\n",v1.name);



    return 0;
}
