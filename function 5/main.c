#include <stdio.h>
#include <stdlib.h>
int max( int num1,int num2);

int main()
{
    int a=290;
    int b=300;
    int maximum ;
    maximum = max(a,b);
    printf("the max value is :%d",maximum );

    return 0;
}
int max( int num1, int num2)
{
   int result;
   if (num1 > num2)
        result=num1;
   else
    result = num2;
   return result;









}
