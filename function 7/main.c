#include <stdio.h>
#include <stdlib.h>
int min ( int num1, int num2);
int main()
{
    int a,b;
    printf("enter the numbers");
    scanf("%d%d",&a,&b);
    int minimum = min(a,b);
    printf("the min value : %d", minimum);

    return 0;
}

int min ( int num1 , int num2)
{
    int result;
    if ( num1> num2)
        result = num2;
    else
        result = num1;

    return result;
}
