#include <stdio.h>
#include <stdlib.h>
void area(float rad);
void main()
{
    float rad;
    printf("enter the radius");
    scanf("%f",&rad);
    area(rad);
return 0;

}
void area( float rad)
{
    float ar;
    ar=3.14*rad*rad;
    printf("area of circle is:%f",ar);
    return ar;
}
