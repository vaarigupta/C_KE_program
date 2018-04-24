#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
    for (i=5;i>=1;i--)
    {
       for(j=1;j<=i;j++)

       {
           printf(" ");
       }
        {
        for(k=6;k>=j;k--)
            {
                printf("*");
            }

           printf("\n") ;


        }








    }
    return 0;
}
