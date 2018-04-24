#include <stdio.h>
#include <stdlib.h>
void arm(int x, int y, int z);
void main()
{
    int x,y,z;
    printf("enter the three numbers");
    scanf("%d%d%d",&x,&y,&z);
    arm(x,y,z);
  return 0;
}
void arm( int x,int y, int z)
{
    int num;
    num =pow(x,3)+pow(y,3)+pow(z,3);
    printf("the armstrong number is%d", num);
    return num;
}
