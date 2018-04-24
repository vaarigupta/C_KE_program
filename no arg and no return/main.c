#include <stdio.h>
#include <stdlib.h>
void area();
void main()
{
     area();
}

void area()

{ float rad ;
float areaofcircle ;

    printf("enter the number");
    scanf("%f", &rad);
    areaofcircle = 3.14*rad*rad;
    printf("area of circle=%f", areaofcircle);

}
