#include <stdio.h>
#include <stdlib.h>
int max( int num1, int num2);

int main()
{
   int a,b;
   printf("enter the numbers");
   scanf("%d%d",&a,&b);
   int maximum;
   maximum = max(a,b);
   printf("the max value is :%d", maximum);

    return 0;
}
int max( int num1 , int num2)
{
    int r;
    if ( num1> num2 )
        r=num1;
    else
        r = num2;
        return r ;

}
